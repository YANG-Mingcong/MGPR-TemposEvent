#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <MyObjectDataCatch.h>
#include <MyWidget_0_Comete.h>
#include <MyWidget_1_CheminDansLesAsteroides.h>
#include <MyWidget_2_Nebuleuse.h>
#include <MyWidget_3_Soleils.h>
#include <MyWidget_4_TrouNoir.h>
#include <MyWidget_5_Spaceship.h>
#include <MyWidget_6_Constellation.h>
#include <MyWidget_7_Spore.h>
#include <MyWidget_8_Desert.h>
#include <MyWidget_9_Caverne.h>
#include <MyWidget_10_Puzzle.h>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyObjectDataCatch *mainWindow_dataCatch;

    MyWidget_0_Comete *mainWindow_widgetComete;
    MyWidget_1_CheminDansLesAsteroides *mainWindow_widgetChemin;
    MyWidget_2_Nebuleuse *mainWindow_widgetNebuleuse;
    MyWidget_3_Soleils *mainWindow_widgetSoleils;
    MyWidget_4_TrouNoir *mainWindow_widgetTrouNoir;
    MyWidget_5_Spaceship *mainWindow_widgetSpaceship;
    MyWidget_6_Constellation *mainWindow_widgetConstellation;
    MyWidget_7_Spore *mainWindow_widgetSpore;
    MyWidget_8_Desert *mainWindow_widgetDesert;
    MyWidget_9_Caverne *mainWindow_widgetCaverne;
    MyWidget_10_Puzzle *mainWindow_widgetPuzzle;




};
#endif // MAINWINDOW_H
