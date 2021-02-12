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

    mainWindow_widgetComete_btn_isEnable = new QPushButton();
    mainWindow_widgetComete_btn_isEnable->setText("");
    mainWindow_mainLayout->addWidget(mainWindow_widgetComete_btn_isEnable, 0, 0, 1, 1);





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

}

void MainWindow::mainWindow_widgetComete_on_btn_isEnable_pressed()
{

}

void MainWindow::mainWindow_widgetComete_on_btn_isLink_pressed()
{

}

