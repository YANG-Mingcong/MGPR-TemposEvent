#include "OSCNetCore.h"

OSCNetCore::OSCNetCore(QObject *parent) : QObject(parent)
{
    OSCNetCore_udpsocket = new QUdpSocket(this);
    OSCNetCore_udpsocket->bind(50000, QUdpSocket::ShareAddress);
}

void OSCNetCore::sendDatagram(QString oscString)
{
    QByteArray sentDataGram;
    qint32 i_v = 1;
    qint32 i_zero = 0;
    sentDataGram = "/action/launchOrStopColumn";
    sentDataGram.append(i_zero);
    sentDataGram.append(i_zero);
    sentDataGram.append(44); //","
    sentDataGram.append(105);//"i"
    sentDataGram.append(i_zero);
    sentDataGram.append(i_zero);
    sentDataGram.append(i_zero);
    sentDataGram.append(i_zero);
    sentDataGram.append(i_zero);
    sentDataGram.append(i_v);
    OSCNetCore_udpsocket->writeDatagram(sentDataGram, QHostAddress::Broadcast, 5000);
}

QByteArray OSCNetCore::OSCNetCore_oscCommandToDataGram(QString _s)
{
    QByteArray _r;

    return _r;
}
