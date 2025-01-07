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
    mainWindow_widget_isEnable_vector.fill(false, 11);

//    mainWindow_btn_isEnable_vectors.fill(new QPushButton("OFF"), 11);
//    mainWindow_btn_isLink_vectors.fill(new QPushButton("Link"), 11);

    mainWindow_refreshTimer = new QTimer(this);


    mainWindow_sendOSCNetCore = new MyObjectOSCNetCore();

    mainWindow_dataCatch = new MyObjectDataCatch(this);
    qDebug() << "mainWindow get PlayerCount: " << mainWindow_dataCatch->objectDataCatch_getPlayerCount();

    mainWindow_dataCatch->objectDataCatch_getBlocClickCount();
    qDebug() << "mainWindow get ID = 1 ClickCount:" << mainWindow_dataCatch->objectDataCatch_getClickCountFromId("1");

    mainWindow_00_all_isLink = false;

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



    //_widget_0
    mainWindow_00_btn_all_isLink = new QPushButton("Link JSON");
    mainWindow_00_btn_all_isLink->setMinimumWidth(60);

    mainWindow_widget_0_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_0_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_0 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_0->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_0->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_0->addWidget(mainWindow_00_btn_all_isLink);
    mainWindow_controlWidgetLayout_widget_0->addWidget(mainWindow_widget_0_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_0->addWidget(mainWindow_widget_0_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_0, 0,0,1,1);

    //_widget_1
    mainWindow_widget_1_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_1_btn_isLink = new QPushButton("Link");
    mainWindow_widget_1_btn_start = new QPushButton("MAN Start_1");

    QGridLayout *mainWindow_controlWidgetLayout_widget_1 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_1->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_1->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_1->addWidget(mainWindow_widget_1_btn_start, 0, 0, Qt::AlignTop);
    mainWindow_controlWidgetLayout_widget_1->addWidget(mainWindow_widget_1_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_1->addWidget(mainWindow_widget_1_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_1, 1,0,1,1);

    //_widget_2
    mainWindow_widget_2_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_2_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_2 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_2->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_2->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_2->addWidget(mainWindow_widget_2_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_2->addWidget(mainWindow_widget_2_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_2, 2,0,1,1);

    //_widget_3
    mainWindow_widget_3_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_3_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_3 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_3->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_3->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_3->addWidget(mainWindow_widget_3_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_3->addWidget(mainWindow_widget_3_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_3, 3,0,1,1);

    //_widget_4
    mainWindow_widget_4_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_4_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_4 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_4->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_4->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_4->addWidget(mainWindow_widget_4_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_4->addWidget(mainWindow_widget_4_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_4, 4,0,1,1);

    //_widget_5
    mainWindow_widget_5_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_5_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_5 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_5->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_5->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_5->addWidget(mainWindow_widget_5_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_5->addWidget(mainWindow_widget_5_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_5, 5,0,1,1);

    //_widget_6
    mainWindow_widget_6_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_6_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_6 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_6->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_6->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_6->addWidget(mainWindow_widget_6_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_6->addWidget(mainWindow_widget_6_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_6, 6,0,1,1);

    //_widget_7
    mainWindow_widget_7_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_7_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_7 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_7->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_7->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_7->addWidget(mainWindow_widget_7_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_7->addWidget(mainWindow_widget_7_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_7, 7,0,1,1);

    //_widget_8
    mainWindow_widget_8_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_8_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_8 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_8->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_8->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_8->addWidget(mainWindow_widget_8_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_8->addWidget(mainWindow_widget_8_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_8, 8,0,1,1);

//    //_widget_9
//    mainWindow_widget_9_btn_isEnable = new QPushButton("OFF");
//    mainWindow_widget_9_btn_isLink = new QPushButton("Link");

//    QGridLayout *mainWindow_controlWidgetLayout_widget_9 = new QGridLayout();
//    mainWindow_controlWidgetLayout_widget_9->setContentsMargins(0,0,0,0);
//    mainWindow_controlWidgetLayout_widget_9->setSpacing(0);
//    mainWindow_controlWidgetLayout_widget_9->addWidget(mainWindow_widget_9_btn_isEnable);
//    mainWindow_controlWidgetLayout_widget_9->addWidget(mainWindow_widget_9_btn_isLink);
//    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_9, 9,0,1,1);

    //_widget_10
    mainWindow_widget_10_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_10_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_10 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_10->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_10->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_10->addWidget(mainWindow_widget_10_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_10->addWidget(mainWindow_widget_10_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_10, 10,0,1,1);


//    QVector<QGridLayout*> mainWindow_contrlWidgetLayout_vector(11, new QGridLayout());
//    mainWindow_contrlWidget_vectors.fill(new QWidget(), 11);

//    for(int _widgetIndex = 0; _widgetIndex < 11; _widgetIndex++)
//    {
//        qDebug() <<_widgetIndex;
//        mainWindow_contrlWidgetLayout_vector.at(_widgetIndex)->setContentsMargins(0,0,0,0);
//        mainWindow_contrlWidgetLayout_vector.at(_widgetIndex)->setSpacing(0);
//        mainWindow_contrlWidget_vectors.at(_widgetIndex)->setContentsMargins(0,0,0,0);
//        mainWindow_contrlWidget_vectors.at(_widgetIndex)->setLayout(mainWindow_contrlWidgetLayout_vector.at(_widgetIndex));
////        mainWindow_mainLayout->addLayout(mainWindow_contrlWidgetLayout_vector.at(_widgetIndex), _widgetIndex, 0, 1, 1);


//        mainWindow_btn_isEnable_vectors.at(_widgetIndex)->setText("OFF");
//        mainWindow_btn_isLink_vectors.at(_widgetIndex)->setText("Link");

//        mainWindow_contrlWidgetLayout_vector.at(_widgetIndex)->addWidget(mainWindow_btn_isEnable_vectors.at(_widgetIndex), 0, 0, 1, 1);
//        mainWindow_contrlWidgetLayout_vector.at(_widgetIndex)->addWidget(mainWindow_btn_isLink_vectors.at(_widgetIndex), 1, 0, 1, 1);

//        mainWindow_mainLayout->addWidget(mainWindow_contrlWidget_vectors.at(_widgetIndex), _widgetIndex, 0, 1, 1);

//    }

//    mainWindow_widgetComete_btn_isEnable = new QPushButton();
//    mainWindow_widgetComete_btn_isEnable->setText("Enable");
//    mainWindow_controlWidgetLayout_comete->addWidget(mainWindow_widgetComete_btn_isEnable, 1, 0, 1, 1);

//    mainWindow_widgetComete_btn_isLink = new QPushButton();
//    mainWindow_widgetComete_btn_isLink->setText("Linked");
//    mainWindow_controlWidgetLayout_comete->addWidget(mainWindow_widgetComete_btn_isLink, 0, 0, 1, 1);



    mainWindow_widgetComete = new MyWidget_0_Comete(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetComete, 0, 1, 1, 1);

    mainWindow_widgetChemin = new MyWidget_1_CheminDansLesAsteroides(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetChemin, 1, 1, 1, 1);

    mainWindow_widgetNebuleuse = new MyWidget_2_Nebuleuse(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetNebuleuse, 2, 1, 1, 1);

    mainWindow_widgetSoleils = new MyWidget_3_Soleils(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetSoleils, 3, 1, 1, 1);

    mainWindow_widgetTrouNoir = new MyWidget_4_TrouNoir(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetTrouNoir, 4, 1, 1, 1);

    mainWindow_widgetSpaceship = new MyWidget_5_Spaceship(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetSpaceship, 5, 1, 1, 1);

    mainWindow_widgetConstellation = new MyWidget_6_Constellation(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetConstellation, 6, 1, 1, 1);

    mainWindow_widgetSpore = new MyWidget_7_Spore(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetSpore, 7, 1, 1, 1);

    mainWindow_widgetDesert = new MyWidget_8_Desert(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetDesert, 8, 1, 1, 1);

//    mainWindow_widgetCaverne = new MyWidget_9_Caverne(mainWindow_centralWidget);
//    mainWindow_mainLayout->addWidget(mainWindow_widgetCaverne, 9, 1, 1, 1);

    mainWindow_widgetPuzzle = new MyWidget_10_Puzzle(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetPuzzle, 10, 1, 1, 1);

}

void MainWindow::initialConnect()
{
    //UI
    connect(mainWindow_00_btn_all_isLink, SIGNAL(pressed()),
            this, SLOT(mainWindow_00_on_all_btn_isLink_pressed()));

    connect(mainWindow_widget_0_btn_isLink, SIGNAL(pressed()),
            this, SLOT(mainWindow_widget_0_on_btn_isLink_pressed()));

    connect(mainWindow_widget_1_btn_start, SIGNAL(pressed()),
            this, SLOT(mainWindow_widget_1_on_btn_start_pressed()));


    //Timer
    connect(mainWindow_refreshTimer, SIGNAL(timeout()),
            this, SLOT(_on_refreshBlocTimer_timeOut()));

    //OSC Net Core
    connect(this, SIGNAL(mainWindow_sendOSCCommand(QString, int, bool)),
            mainWindow_sendOSCNetCore, SLOT(sendDatagram(QString, int, bool)));

    connect(this, SIGNAL(mainWindow_OSCNetCore_changeSendIP(QString)),
            mainWindow_sendOSCNetCore, SLOT(changeSendToIP(QString)));


    //connnection with widget
    connect(this, SIGNAL(_sendJsonData_to_widget_0(int)),
            mainWindow_widgetComete, SLOT(_getJsonData_clickCount(int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_1(int, int, int, int, int, int, int, int, int)),
            mainWindow_widgetChemin, SLOT(_getJsonData_clickCount(int, int, int, int, int, int, int, int, int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_2(int, int, int, int, int, int, int, int)),
            mainWindow_widgetNebuleuse, SLOT(_getJsonData_clickCount(int, int, int, int, int, int, int, int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_3(int, int)),
            mainWindow_widgetSoleils, SLOT(_getJsonData_clickCount(int, int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_4(int)),
            mainWindow_widgetTrouNoir, SLOT(_getJsonData_clickCount(int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_5(int)),
            mainWindow_widgetSpaceship, SLOT(_getJsonData_clickCount(int)));
    //widget6

//        connect(this, SIGNAL(_sendJsonData_to_widget_6_1(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount1(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_2(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount2(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_3(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount3(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_4(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount4(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_5(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount5(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_6(int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount6(int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_7(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount7(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));
//        connect(this, SIGNAL(_sendJsonData_to_widget_6_8(int, int, int, int, int, int, int, int, int, int, int, int, int, int )),
//                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount8(int, int, int, int, int, int, int, int, int, int, int, int, int, int);));

    connect(this, SIGNAL(_sendJsonData_to_widget_6_1(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount1(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_2(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount2(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_3(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount3(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_4(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount4(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_5(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount5(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_6(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount6(QStringList)));
    connect(this, SIGNAL(_sendJsonData_to_widget_6_7(QStringList)), mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount7(QStringList)));


    connect(this, SIGNAL(_sendJsonData_to_widget_6_8(QStringList)),
                mainWindow_widgetConstellation, SLOT(_getJsonData_clickCount8(QStringList)));

    connect(this, SIGNAL(_sendJsonData_to_widget_7(int, int, int, int, int, int, int)),
            mainWindow_widgetSpore, SLOT(_getJsonData_clickCount(int, int, int, int, int, int, int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_8(int, int)),
            mainWindow_widgetDesert, SLOT(_getJsonData_clickCount(int, int)));

//    connect(this, SIGNAL(_sendJsonData_to_widget_9(int, int, int, int, int)),
//            mainWindow_widgetCaverne, SLOT(_getJsonData_clickCount(int, int, int, int, int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_10(int, int, int, int, int, int, int, int)),
            mainWindow_widgetPuzzle, SLOT(_getJsonData_clickCount(int, int, int, int, int, int, int, int)));



    //PlayerCount

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetComete, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetChemin, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetNebuleuse, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetSoleils, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetTrouNoir, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetSpaceship, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetConstellation, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetSpore, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetDesert, SLOT(_getJsonData_playerCount(int)));

//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            mainWindow_widgetCaverne, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetPuzzle, SLOT(_getJsonData_playerCount(int)));

}

void MainWindow::mainWindow_sendJsonData()
{
    emit this->_sendJsonData_to_widget_0(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Crack"));
    emit this->_sendJsonData_to_widget_1(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide1"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide2"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide3"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide4"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide5"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide6"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide7"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide8"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide9")
                                    );
    emit this->_sendJsonData_to_widget_2(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeBleu"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeViolet"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeOrange"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeRouge"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeCyan"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeMauve"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeVert"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("CubeJaune")
                                    );
    emit this->_sendJsonData_to_widget_3(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("SoleilG"),
                                   mainWindow_dataCatch->objectDataCatch_getClickCountFromName("SoleilD")
                                    );
    emit this->_sendJsonData_to_widget_4(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("TrouNoir"));
    emit this->_sendJsonData_to_widget_5(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Vaisseau"));

//    emit this->_sendJsonData_to_widget_6_1(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer6")
//                                            ,0,0,0,0,0,0,0,0);


//    emit this->_sendJsonData_to_widget_6_2(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus7"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus8"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus9")
//                                            ,0,0,0,0,0);

//    emit this->_sendJsonData_to_widget_6_3(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus7")
//                                            ,0,0,0,0,0,0,0);

//    emit this->_sendJsonData_to_widget_6_4(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos5")
//                                            ,0,0,0,0,0,0,0,0,0);

//    emit this->_sendJsonData_to_widget_6_5(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta7"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta8"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta9")
//                                            ,0,0,0,0,0);

//    emit this->_sendJsonData_to_widget_6_6(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion7"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion8"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion9"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion10")
//                                           );

//    emit this->_sendJsonData_to_widget_6_7(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos7"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos8")
//                                            ,0,0,0,0,0,0);

//    emit this->_sendJsonData_to_widget_6_8(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo1"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo2"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo3"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo4"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo5"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo6"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo7"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo8"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo9"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo10"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo11"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo12"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo13"),
//                                           mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo14")
//                                           );
    emit this->_sendJsonData_to_widget_6_1(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cancer1", 6));
    emit this->_sendJsonData_to_widget_6_2(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cepheus1", 9));
    emit this->_sendJsonData_to_widget_6_3(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Cygnus1", 7));
    emit this->_sendJsonData_to_widget_6_4(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kairos1", 5));
    emit this->_sendJsonData_to_widget_6_5(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lacerta1", 9));
    emit this->_sendJsonData_to_widget_6_6(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Lion1", 10));
    emit this->_sendJsonData_to_widget_6_7(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Kronos1", 8));
    emit this->_sendJsonData_to_widget_6_8(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo1", 14));



    emit this->_sendJsonData_to_widget_7(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre1"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre2"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre3"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre4"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre5"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre6"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Arbre7")
                                    );



    emit this->_sendJsonData_to_widget_8(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("TotemCactus"),
                                   mainWindow_dataCatch->objectDataCatch_getClickCountFromName("TotemTemple")
                                    );

//    emit this->_sendJsonData_to_widget_9(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("PierreRouge"),
//                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("PierreVerte"),
//                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("PierreJaune"),
//                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("PierreOrange"),
//                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("PierreViolet")
//                                    );

    emit this->_sendJsonData_to_widget_10(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle1"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle2"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle3"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle4"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle5"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle6"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle7"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Puzzle8")
                                    );

//    qDebug()<< "mainWindow getConstellation " << mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Virgo1", 14);






    emit this->_sendJsonData_playerCount(mainWindow_dataCatch->objectDataCatch_getPlayerCount());


}

void MainWindow::mainWindow_00_on_all_btn_isLink_pressed()
{
    if(!mainWindow_00_all_isLink)
    {
        mainWindow_refreshTimer->start(2000);
        mainWindow_00_all_isLink = true;
        mainWindow_00_btn_all_isLink->setText("UnLink JSON");
    }
    else
    {
        mainWindow_refreshTimer->stop();
        mainWindow_00_all_isLink = false;
        mainWindow_00_btn_all_isLink->setText("Link JSON");
    }
}

void MainWindow::mainWindow_widget_1_on_btn_start_pressed()
{
    qDebug() << "1btn press";
    emit this->mainWindow_OSCNetCore_changeSendIP(MyGloble::G_IP_VV1);
    for(int _i = 1; _i < 10; _i ++)
    {
        QString _oscCmd = tr("/vvvv/Chemin/bloc_%1 1").arg(_i);
        emit this->mainWindow_sendOSCCommand(_oscCmd, 4520 + _i, true);
    }

}

void MainWindow::mainWindow_widget_0_on_btn_isEnable_pressed()
{

}

void MainWindow::mainWindow_widget_0_on_btn_isLink_pressed()
{

}

void MainWindow::_on_refreshBlocTimer_timeOut()
{
    mainWindow_dataCatch->objectDataCatch_getBlocClickCount();
    this->mainWindow_sendJsonData();
}

