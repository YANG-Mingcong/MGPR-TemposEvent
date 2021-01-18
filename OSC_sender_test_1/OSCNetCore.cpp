#include "OSCNetCore.h"

OSCNetCore::OSCNetCore(QObject *parent) : QObject(parent)
{
    OSCNetCore_udpsocket = new QUdpSocket(this);
    OSCNetCore_udpsocket->bind(50000, QUdpSocket::ShareAddress);

    OSCNetcore_sendToPort = 5000; //5000 as default
}

void OSCNetCore::changeSendToPort(qint16 _s)
{
    OSCNetcore_sendToPort = _s;
}

void OSCNetCore::sendDatagram(QString oscString, int _port, bool _mode)
{
    OSCNetcore_sendToPort = _port;
    if(!_mode)
    {
        this->sendOSCMessageDataGram(oscString);
    }
    else
    {
        this->sendOSCBundleDataGram(oscString);
    }
}

void OSCNetCore::sendOSCMessageDataGram(QString _oscString)
{
    //Multiple Line OSC Command Support
    QStringList commandList = _oscString.split('\n');

    qDebug() <<commandList.size() <<" Lines OSC Command" << Qt::endl;

    for(qint64 indexOfList=0;
        indexOfList < commandList.size();
        indexOfList ++ )
    {
        qDebug() << "OSC Command[" << indexOfList <<"] " << commandList.at(indexOfList) << Qt::endl;

        if(0 < commandList.at(indexOfList).size())
        {
            QByteArray sentDataGram = this->OSCNetCore_oscMessageToDataGram(commandList.at(indexOfList));
            OSCNetCore_udpsocket->writeDatagram(sentDataGram, QHostAddress::Broadcast, OSCNetcore_sendToPort);
        }
    }
}

void OSCNetCore::sendOSCBundleDataGram(QString _oscString)
{
    //Multiple Line OSC Command as ONE Bundle
    if(0 < _oscString.size())
    {
        QByteArray sentDataGram = this->OSCNetCore_oscBundleToDataGram(_oscString);
        OSCNetCore_udpsocket->writeDatagram(sentDataGram, QHostAddress::Broadcast, OSCNetcore_sendToPort);
        //wait 2 millisec for next package
        QElapsedTimer t;
        t.start();
        while(t.elapsed()<2);
    }

}

QByteArray OSCNetCore::OSCNetCore_oscMessageToDataGram(QString _s)
{
    QByteArray _r;

    //use first ' ' to divide Addr and [arg]
    QString oscCommand_Addr = _s.section(' ', 0, 0);
    QString oscCommand_Arg = _s.section(' ', 1, -1);

    //Addr part
    QByteArray _addr;
    _addr = oscCommand_Addr.toUtf8();
    _addr.append('\0');

    qDebug()<<"Addr RAW: " << _addr << Qt::endl;

    qDebug() << "OSC Addr is :" << oscCommand_Addr << Qt::endl;
    qDebug() << "OSC Arg is :" << oscCommand_Arg << Qt::endl;
    qDebug() << "OSC Arg size is :" << oscCommand_Arg.size() << Qt::endl;

    QByteArray _arg_Flag;
    _arg_Flag.append(',');

    QByteArray _arg_Content;

    if(0 < oscCommand_Arg.size())
    {
        QStringList oscCommand_Arg_List;

        if(oscCommand_Arg.at(0)=='[')
        {
            oscCommand_Arg_List = oscCommand_Arg.remove('[').remove(']').split(QLatin1Char(','),Qt::SkipEmptyParts);
        }
        else
        {
            oscCommand_Arg_List = oscCommand_Arg.split(QLatin1Char(' '),Qt::SkipEmptyParts);
        }
        qDebug() << oscCommand_Arg_List << Qt::endl;

        for(qint64 i_ArgList = 0;
            i_ArgList < oscCommand_Arg_List.size();
            i_ArgList++ )
        {
            if(oscCommand_Arg_List.at(i_ArgList).contains(QRegExp("^\\d+$")))
            {
                qint32 arg_i = oscCommand_Arg_List.at(i_ArgList).toInt();
                qDebug() << "i32" << Qt::endl;
                _arg_Flag.append('i');
                QByteArray _arg_int(sizeof(qint32), '\0');
                memcpy(_arg_int.data(), &arg_i, sizeof(qint32));
                std::reverse(_arg_int.begin(), _arg_int.end());
                qDebug() << "_arg_int" << _arg_int << Qt::endl;
                _arg_Content.append(_arg_int);
            }
            else if(oscCommand_Arg_List.at(i_ArgList).contains(QRegExp("^\\d*\\.\\d+$")))
            {
                float arg_f = oscCommand_Arg_List.at(i_ArgList).toFloat();
                qDebug() << "f32" << Qt::endl;
                _arg_Flag.append('f');
                QByteArray _arg_float(sizeof(float), '\0');
                memcpy(_arg_float.data(), &arg_f, sizeof(float));
                std::reverse(_arg_float.begin(), _arg_float.end());
                qDebug() << "_arg_float" << _arg_float << Qt::endl;
                _arg_Content.append(_arg_float);
            }
            else
            {
                qDebug() << "str" << Qt::endl;
                _arg_Flag.append('s');

                QString _arg_S = oscCommand_Arg_List.at(i_ArgList);
                _arg_S.remove('"');
                QByteArray _arg_String = _arg_S.toUtf8();
                _arg_String.append('\0');
                _arg_Content.append(this->_FourByteFormat(_arg_String));
            }
        }

        _arg_Flag.append('\0');
    }
        _r.append(this->_FourByteFormat(_addr));
        _r.append(this->_FourByteFormat(_arg_Flag));
        _r.append(_arg_Content);

    qDebug() <<"What is this?"<< _r <<Qt::endl;
    return _r;
}

QByteArray OSCNetCore::OSCNetCore_oscBundleToDataGram(QString _s)
{
    QByteArray _return;
    QString _bundleHeader = "#bundle";
    _return.append(this->_FourByteFormat(_bundleHeader.toUtf8()));

    //timeTag x00x00x00x00 x00x00x00x01 meas immediate. or Internet NTP timeStamp mode
    qint64 _timeTag = 1;
    QByteArray _arg_timeTag(sizeof(qint64), '\0');
    memcpy(_arg_timeTag.data(), &_timeTag, sizeof(qint64));
    std::reverse(_arg_timeTag.begin(), _arg_timeTag.end());
    _return.append(_arg_timeTag);

    qDebug() << "bundle content head + tt" << _return << Qt::endl;

    //Below is each Size in 32bit, and each Message Content
    QStringList commandList = _s.split('\n');

    qDebug() <<commandList.size() <<" Lines OSC Bundle Command" << Qt::endl;

    for(qint64 indexOfList=0;
        indexOfList < commandList.size();
        indexOfList ++ )
    {
        qDebug() << "OSC Command[" << indexOfList <<"] " << commandList.at(indexOfList) << Qt::endl;
        QByteArray _bundleContentMessage = this->OSCNetCore_oscMessageToDataGram(commandList.at(indexOfList));
        //cal Message Size
        qint32 _bundleContentMessageSize = _bundleContentMessage.size();
        qDebug() << "bundle content size:" << _bundleContentMessageSize;
        //qint32 to QByteArray
        QByteArray _arg_bundleContentMessageSize(sizeof(qint32), '\0');
        memcpy(_arg_bundleContentMessageSize.data(), &_bundleContentMessageSize, sizeof(qint32));
        std::reverse(_arg_bundleContentMessageSize.begin(), _arg_bundleContentMessageSize.end());
        //write into bundle
        qDebug() << "bundle content size Arg:" << _arg_bundleContentMessageSize <<Qt::endl;
        _return.append(_arg_bundleContentMessageSize);
        _return.append(_bundleContentMessage);
    }

    return _return;
}

QByteArray OSCNetCore::_FourByteFormat(QByteArray _src)
{
    QByteArray _return;

    qint64 _src_length = _src.length();
    _return = _src;

    if(_src_length % 4)
    {
        qDebug() << "ADD" << (4 -(_src_length % 4)) << Qt::endl;
        for(qint8 i=0; i < (4 -(_src_length % 4)); i++)
        {
            _return.append('\0');
        }
    }
    return _return;
}




