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
    QByteArray OSCNetCore_oscCommandToDataGram(QString);

private slots:
    void sendDatagram(QString);


};

#endif // OSCNETCORE_H
