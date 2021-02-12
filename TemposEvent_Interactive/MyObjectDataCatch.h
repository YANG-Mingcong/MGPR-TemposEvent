#ifndef MYOBJECTDATACATCH_H
#define MYOBJECTDATACATCH_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QEventLoop>

class MyObjectDataCatch : public QObject
{
    Q_OBJECT
public:
    explicit MyObjectDataCatch(QObject *parent = nullptr);
    static QString getJSONStringfromURL(QString url);
    static QByteArray getJSONByteArrayfromURL(QString url);
    int objectDataCatch_getPlayerCount();
    void objectDataCatch_getBlocClickCount();
    int objectDataCatch_getClickCountFromId(QString);
    int objectDataCatch_getClickCountFromName(QString);


signals:

private:
    void initialVariable();
    void initialConnect();

    QJsonArray objectDataCatch_myJSONArray;

    QStringList objectDataCatch_JSON_idList;
    QStringList objectDataCatch_JSON_clickCounterList;
    QStringList objectDataCatch_JSON_nameList;




};

#endif // MYOBJECTDATACATCH_H
