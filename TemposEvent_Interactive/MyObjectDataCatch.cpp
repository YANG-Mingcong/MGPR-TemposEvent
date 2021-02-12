#include "MyObjectDataCatch.h"

MyObjectDataCatch::MyObjectDataCatch(QObject *parent) : QObject(parent)
{
    this->initialVariable();
    this->initialConnect();
}

QString MyObjectDataCatch::getJSONStringfromURL(QString url)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QNetworkReply *reply = manager->get(QNetworkRequest(QUrl(url)));
    QByteArray responseData;
    QEventLoop eventLoop;
    connect(manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    eventLoop.exec();       //block until finish
    responseData = reply->readAll();
    return QString(responseData);
}

QByteArray MyObjectDataCatch::getJSONByteArrayfromURL(QString url)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QNetworkReply *reply = manager->get(QNetworkRequest(QUrl(url)));
    QByteArray responseData;
    QEventLoop eventLoop;
    connect(manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    eventLoop.exec();       //block until finish
    responseData = reply->readAll();
    return responseData;
}

int MyObjectDataCatch::objectDataCatch_getPlayerCount()
{
    QByteArray _json_playerCountByteArray = MyObjectDataCatch::getJSONByteArrayfromURL("http://www.temposevent.com/api/playerCounter");
    QJsonParseError objectDataCatch_playerCountJsonError;
    QJsonDocument objectDataCatch_myPlayerCountJSONDocument = QJsonDocument::fromJson(_json_playerCountByteArray, &objectDataCatch_playerCountJsonError);
    qDebug() << "JSON PlayerCount Error: " << objectDataCatch_playerCountJsonError.errorString();
    qDebug().noquote() << objectDataCatch_myPlayerCountJSONDocument.toJson() << objectDataCatch_myPlayerCountJSONDocument.isEmpty();
    QJsonObject mainWindow_myPlayerCountJSON = objectDataCatch_myPlayerCountJSONDocument.object();
    QString objectDataCatch_intPlayerCountFromJSON = mainWindow_myPlayerCountJSON["number"].toString();
    return objectDataCatch_intPlayerCountFromJSON.toInt();
}

void MyObjectDataCatch::objectDataCatch_getBlocClickCount()
{
    QByteArray _json_byteArray = MyObjectDataCatch::getJSONByteArrayfromURL("http://www.temposevent.com/api/blocsY.php");
    QString _json_Qstring = _json_byteArray;
    _json_Qstring = "{ \n \"blocs\":" + _json_Qstring + "}";
    QJsonParseError jsonError;
    QJsonDocument mainWindow_myJSONDocument = QJsonDocument::fromJson(_json_Qstring.toUtf8(), &jsonError);
    qDebug() << jsonError.errorString();
    qDebug().noquote() << mainWindow_myJSONDocument.toJson() << mainWindow_myJSONDocument.isEmpty();
    QJsonObject mainWindow_myJSONObject = mainWindow_myJSONDocument.object();
    objectDataCatch_myJSONArray = mainWindow_myJSONObject["blocs"].toArray();

    qDebug() << objectDataCatch_myJSONArray.isEmpty() << "Data Catch JSON Array: " << objectDataCatch_myJSONArray.at(0).toObject()["clickCounter"].toString().toInt();
    qDebug() << jsonError.errorString();

    foreach (const QJsonValue &value, objectDataCatch_myJSONArray )
    {
        QJsonObject _tmp_obj = value.toObject();
        objectDataCatch_JSON_idList.append(_tmp_obj["id"].toString());
        objectDataCatch_JSON_clickCounterList.append(_tmp_obj["clickCounter"].toString());
        objectDataCatch_JSON_nameList.append(_tmp_obj["name"].toString());
    }
}

int MyObjectDataCatch::objectDataCatch_getClickCountFromId(QString _Id)
{
    int result;
    if(objectDataCatch_myJSONArray.isEmpty())
    {
        result = -1;
    }
    else
    {
        result = objectDataCatch_JSON_clickCounterList.at(objectDataCatch_JSON_idList.indexOf(_Id)).toInt();
    }
    return result;
}

int MyObjectDataCatch::objectDataCatch_getClickCountFromName(QString _Name)
{
    int result;
    if(objectDataCatch_myJSONArray.isEmpty())
    {
        result = -1;
    }
    else
    {
        result = objectDataCatch_JSON_clickCounterList.at(objectDataCatch_JSON_nameList.indexOf(_Name)).toInt();
    }
    return result;
}

void MyObjectDataCatch::initialVariable()
{
    objectDataCatch_JSON_idList.clear();
    objectDataCatch_JSON_nameList.clear();
    objectDataCatch_JSON_clickCounterList.clear();

}

void MyObjectDataCatch::initialConnect()
{

}
