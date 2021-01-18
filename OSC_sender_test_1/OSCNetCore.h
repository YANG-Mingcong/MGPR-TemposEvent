#ifndef OSCNETCORE_H
#define OSCNETCORE_H

#include <QObject>
#include <QString>
#include <QUdpSocket>
#include <QByteArray>

class OSCNetCore : public QObject
{
    Q_OBJECT
public:
    explicit OSCNetCore(QObject *parent = nullptr);

signals:

private:
    QUdpSocket *OSCNetCore_udpsocket = nullptr;
    QByteArray OSCNetCore_oscMessageToDataGram(QString);
    QByteArray OSCNetCore_oscBundleToDataGram(QString);
    QByteArray _FourByteFormat(QByteArray);
    void sendOSCMessageDataGram(QString);
    void sendOSCBundleDataGram(QString);
    qint16 OSCNetcore_sendToPort;

private slots:
    void sendDatagram(QString);
    void changeSendToPort(qint16);


};

#endif // OSCNETCORE_H
