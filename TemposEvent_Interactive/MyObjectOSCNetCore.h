#ifndef MYOBJECTOSCNETCORE_H
#define MYOBJECTOSCNETCORE_H

#include <QObject>
#include <QString>
#include <QUdpSocket>
#include <QByteArray>
#include <QElapsedTimer>

class MyObjectOSCNetCore : public QObject
{
    Q_OBJECT
public:
    explicit MyObjectOSCNetCore(QObject *parent = nullptr);

signals:

private:
    QUdpSocket *OSCNetCore_udpsocket = nullptr;
    QByteArray OSCNetCore_oscMessageToDataGram(QString);
    QByteArray OSCNetCore_oscBundleToDataGram(QString);
    QByteArray _FourByteFormat(QByteArray);
    void sendOSCMessageDataGram(QString);
    void sendOSCBundleDataGram(QString);
    qint16 OSCNetcore_sendToPort;

    QElapsedTimer OSCCommandInternalWaitTimer;
    void sendDatagramInDifferentMode(QString, int, bool);

private slots:
    void sendDatagram(QString, int, bool);
    void changeSendToPort(qint16);




};

#endif // MYOBJECTOSCNETCORE_H
