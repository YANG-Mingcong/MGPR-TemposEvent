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

    MyWidget_3_Soleils *mainWindow_widgetSoleils;
    MyWidget_4_TrouNoir *mainWindow_widgetTrouNoir;
    MyWidget_5_Spaceship *mainWindow_widgetSpaceship;



};
#endif // MAINWINDOW_H
