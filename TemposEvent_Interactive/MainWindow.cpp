#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialVariable()
{
    mainWindow_dataCatch = new MyObjectDataCatch(this);
    qDebug() << "mainWindow get PlayerCount: " << mainWindow_dataCatch->objectDataCatch_getPlayerCount();

    mainWindow_dataCatch->objectDataCatch_getBlocClickCount();
    qDebug() << "mainWindow get ID = 2 ClickCount:" << mainWindow_dataCatch->objectDataCatch_getClickCountFromId("2");

//    QByteArray _json_byteArray = MyObjectDataCatch::getJSONByteArrayfromURL("http://www.temposevent.com/api/blocsY.php");
//    QString _json_Qstring = _json_byteArray;
//    _json_Qstring = "{ \n \"blocs\":" + _json_Qstring + "}";

////    QString _json_QString = MyObjectDataCatch::getJSONStringfromURL("http://www.temposevent.com/api/blocsY/");
////    qDebug().noquote() << "QByteArray: " << _json_byteArray << "\n\nQString: " << _json_Qstring;
//    QJsonParseError jsonError;
//    QJsonDocument mainWindow_myJSONDocument = QJsonDocument::fromJson(_json_Qstring.toUtf8(), &jsonError);
//    qDebug() << jsonError.errorString();
//    qDebug().noquote() << mainWindow_myJSONDocument.toJson() << mainWindow_myJSONDocument.isEmpty();
//    QJsonObject mainWindow_myJSONObject = mainWindow_myJSONDocument.object();
//    QJsonArray mainWindow_myJSONArray = mainWindow_myJSONObject["blocs"].toArray();

//    qDebug() << mainWindow_myJSONArray.isEmpty() << "JSON Array: " << mainWindow_myJSONArray.at(0).toObject()["clickCounter"].toString().toInt();
//    qDebug() << jsonError.errorString();

//    QStringList _JSON_idList;
//    QStringList _JSON_clickCounterList;
//    QStringList _JSON_nameList;


//    foreach (const QJsonValue &value, mainWindow_myJSONArray )
//    {
//        QJsonObject _tmp_obj = value.toObject();
//        _JSON_idList.append(_tmp_obj["id"].toString());
//        _JSON_clickCounterList.append(_tmp_obj["clickCounter"].toString());
//        _JSON_nameList.append(_tmp_obj["name"].toString());
//    }

//    qDebug() << _JSON_idList;
//    qDebug() << _JSON_clickCounterList;

//    qDebug() << "find ID = 2, clickCounter :"  << _JSON_clickCounterList.at(_JSON_idList.indexOf("2"));



//    //PlayerCount
//    QByteArray _json_playerCountByteArray = MyObjectDataCatch::getJSONByteArrayfromURL("http://www.temposevent.com/api/playerCounter");
//    QJsonParseError mainWindow_playerCountJsonError;
//    QJsonDocument mainWindow_myPlayerCountJSONDocument = QJsonDocument::fromJson(_json_playerCountByteArray, &mainWindow_playerCountJsonError);
//    qDebug()<<"JSON PlayerCount :"<<jsonError.errorString();
//    qDebug().noquote() << mainWindow_myPlayerCountJSONDocument.toJson() << mainWindow_myPlayerCountJSONDocument.isEmpty();
//    QJsonObject mainWindow_myPlayerCountJSON = mainWindow_myPlayerCountJSONDocument.object();
//    QString mainWindow_intPlayerCountFromJSON = mainWindow_myPlayerCountJSON["number"].toString();
//    qDebug() << mainWindow_intPlayerCountFromJSON.toInt();





}

void MainWindow::initialUI()
{
    this->setWindowTitle("Tempos Event - Interactive V0.0.1 Alpha");

    QWidget *mainWindow_centralWidget = new QWidget(this);
//    this->setCentralWidget(centralWidget());

    this->setMinimumSize(1280,720);

    QScrollArea *mainWindow_scrollArea = new QScrollArea();
    mainWindow_scrollArea->setWidget(mainWindow_centralWidget);
    mainWindow_scrollArea->setWidgetResizable(true);
    this->setCentralWidget(mainWindow_scrollArea);


//    mainWindow_centralWidget->setMinimumSize(1440, 800);
    mainWindow_centralWidget->setMinimumWidth(1440);
    mainWindow_centralWidget->setContentsMargins(0,0,0,0);

    QGridLayout *mainWindow_mainLayout = new QGridLayout();
    mainWindow_centralWidget->setLayout(mainWindow_mainLayout);

    mainWindow_mainLayout->setContentsMargins(10,10,10,10);
    mainWindow_mainLayout->setSpacing(0);




    mainWindow_widgetComete = new MyWidget_0_Comete(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetComete, 0, 0, 1, 1);

    mainWindow_widgetChemin = new MyWidget_1_CheminDansLesAsteroides(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetChemin, 1, 0, 1, 1);

    mainWindow_widgetSoleils = new MyWidget_3_Soleils(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetSoleils, 3, 0, 1, 1);

    mainWindow_widgetTrouNoir = new MyWidget_4_TrouNoir(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetTrouNoir, 4, 0, 1, 1);

    mainWindow_widgetSpaceship = new MyWidget_5_Spaceship(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetSpaceship, 5, 0, 1, 1);

}

void MainWindow::initialConnect()
{

}

