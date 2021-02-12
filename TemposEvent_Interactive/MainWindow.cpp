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

    mainWindow_btn_isEnable_vectors.fill(new QPushButton("OFF"), 11);
    mainWindow_btn_isLink_vectors.fill(new QPushButton("Link"), 11);

    mainWindow_refreshTimer = new QTimer(this);

    mainWindow_dataCatch = new MyObjectDataCatch(this);
    qDebug() << "mainWindow get PlayerCount: " << mainWindow_dataCatch->objectDataCatch_getPlayerCount();

    mainWindow_dataCatch->objectDataCatch_getBlocClickCount();
    qDebug() << "mainWindow get ID = 1 ClickCount:" << mainWindow_dataCatch->objectDataCatch_getClickCountFromId("1");


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
    mainWindow_widget_0_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_0_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_0 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_0->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_0->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_0->addWidget(mainWindow_widget_0_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_0->addWidget(mainWindow_widget_0_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_0, 0,0,1,1);

    //_widget_1
    mainWindow_widget_1_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_1_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_1 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_1->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_1->setSpacing(0);
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

    //_widget_9
    mainWindow_widget_9_btn_isEnable = new QPushButton("OFF");
    mainWindow_widget_9_btn_isLink = new QPushButton("Link");

    QGridLayout *mainWindow_controlWidgetLayout_widget_9 = new QGridLayout();
    mainWindow_controlWidgetLayout_widget_9->setContentsMargins(0,0,0,0);
    mainWindow_controlWidgetLayout_widget_9->setSpacing(0);
    mainWindow_controlWidgetLayout_widget_9->addWidget(mainWindow_widget_9_btn_isEnable);
    mainWindow_controlWidgetLayout_widget_9->addWidget(mainWindow_widget_9_btn_isLink);
    mainWindow_mainLayout->addLayout(mainWindow_controlWidgetLayout_widget_9, 9,0,1,1);

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

    mainWindow_widgetCaverne = new MyWidget_9_Caverne(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetCaverne, 9, 1, 1, 1);

    mainWindow_widgetPuzzle = new MyWidget_10_Puzzle(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetPuzzle, 10, 1, 1, 1);

}

void MainWindow::initialConnect()
{
    //UI
    connect(mainWindow_widget_0_btn_isLink, SIGNAL(pressed()),
            this, SLOT(mainWindow_widget_0_on_btn_isLink_pressed()));
    //Timer
    connect(mainWindow_refreshTimer, SIGNAL(timeout()),
            this, SLOT(_on_refreshBlocTimer_timeOut()));


    //connnection with widget
    connect(this, SIGNAL(_sendJsonData_to_widget_0(int)),
            mainWindow_widgetComete, SLOT(_getJsonData_clickCount(int)));

    connect(this, SIGNAL(_sendJsonData_to_widget_1(int, int, int, int, int, int, int, int, int)),
            mainWindow_widgetChemin, SLOT(_getJsonData_clickCount(int, int, int, int, int, int, int, int, int)));



    //PlayerCount

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetComete, SLOT(_getJsonData_playerCount(int)));

    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            mainWindow_widgetChemin, SLOT(_getJsonData_playerCount(int)));

}

void MainWindow::mainWindow_sendJsonData()
{
    this->_sendJsonData_to_widget_0(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Crack"));
    this->_sendJsonData_to_widget_1(mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide1"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide2"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide3"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide4"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide5"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide6"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide7"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide8"),
                                    mainWindow_dataCatch->objectDataCatch_getClickCountFromName("Asteroide9")
                                    );







    this->_sendJsonData_playerCount(mainWindow_dataCatch->objectDataCatch_getPlayerCount());


}

void MainWindow::mainWindow_widget_0_on_btn_isEnable_pressed()
{

}

void MainWindow::mainWindow_widget_0_on_btn_isLink_pressed()
{
    //temproly
    mainWindow_refreshTimer->start(1000);
//    mainWindow_sendJsonData();
}

void MainWindow::_on_refreshBlocTimer_timeOut()
{
    mainWindow_dataCatch->objectDataCatch_getBlocClickCount();
    this->mainWindow_sendJsonData();
}

