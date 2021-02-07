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

}

void MainWindow::initialUI()
{
    this->setWindowTitle("Tempos Event - Interactive V0.0.1 Alpha");

    QWidget *mainWindow_centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget());
    this->setMinimumSize(1440,800);

    mainWindow_centralWidget->setMinimumSize(1440, 800);
    mainWindow_centralWidget->setContentsMargins(0,0,0,0);

    QGridLayout *mainWindow_mainLayout = new QGridLayout();
    mainWindow_centralWidget->setLayout(mainWindow_mainLayout);

    mainWindow_mainLayout->setContentsMargins(10,10,10,10);
    mainWindow_mainLayout->setSpacing(0);




    mainWindow_widgetComete = new MyWidget_0_Comete(mainWindow_centralWidget);
    mainWindow_mainLayout->addWidget(mainWindow_widgetComete, 0, 0, 1, 1);

    mainWindow_widgetChemin = new MyWidget_1_CheminDansLesAsteroides(this);
    mainWindow_mainLayout->addWidget(mainWindow_widgetChemin, 1, 0, 1, 1);

}

void MainWindow::initialConnect()
{

}

