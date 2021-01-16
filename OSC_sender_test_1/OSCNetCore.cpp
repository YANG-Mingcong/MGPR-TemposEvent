#include "OSCNetCore.h"

OSCNetCore::OSCNetCore(QObject *parent) : QObject(parent)
{
    OSCNetCore_udpsocket = new QUdpSocket(this);
    OSCNetCore_udpsocket->bind(50000, QUdpSocket::ShareAddress);
}

void OSCNetCore::sendDatagram(QString oscString)
{
    //Multiple Line OSC Command Support
    QStringList commandList = oscString.split('\n');

    qDebug() <<commandList.size() <<" Lines OSC Command" << Qt::endl;

    for(qint64 indexOfList=0;
        indexOfList < commandList.size();
        indexOfList ++ )
    {
        qDebug() << "OSC Command[" << indexOfList <<"] " << commandList.at(indexOfList) << Qt::endl;

        QByteArray sentDataGram = this->OSCNetCore_oscCommandToDataGram(commandList.at(indexOfList));
        OSCNetCore_udpsocket->writeDatagram(sentDataGram, QHostAddress::Broadcast, 5000);
    }

//    QByteArray sentDataGram;
//    qint32 i_v = 1;
//    qint32 i_zero = 0;
//    sentDataGram = "/action/launchOrStopColumn";
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_zero);
//    sentDataGram.append(44); //","
//    sentDataGram.append(105);//"i"
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_zero);
//    sentDataGram.append(i_v);
//    OSCNetCore_udpsocket->writeDatagram(sentDataGram, QHostAddress::Broadcast, 5000);
}

QByteArray OSCNetCore::OSCNetCore_oscCommandToDataGram(QString _s)
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

    QByteArray _arg_Flag;
    _arg_Flag.append(',');

    QByteArray _arg_Content;

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

    _r.append(this->_FourByteFormat(_addr));
    _r.append(this->_FourByteFormat(_arg_Flag));
    _r.append(_arg_Content);

    qDebug() << _r <<Qt::endl;
    return _r;
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




