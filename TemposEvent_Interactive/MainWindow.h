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
#include <MyWidgetCommonLib.h>
#include <QTimer>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void _sendJsonData_to_widget_0(int);
    void _sendJsonData_to_widget_1(int, int, int, int, int, int, int, int, int );

    void _sendJsonData_playerCount(int);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    void mainWindow_sendJsonData();

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

    //local control
    QPushButton *mainWindow_widget_0_btn_isEnable;
    QPushButton *mainWindow_widget_1_btn_isEnable;
    QPushButton *mainWindow_widget_2_btn_isEnable;
    QPushButton *mainWindow_widget_3_btn_isEnable;
    QPushButton *mainWindow_widget_4_btn_isEnable;
    QPushButton *mainWindow_widget_5_btn_isEnable;
    QPushButton *mainWindow_widget_6_btn_isEnable;
    QPushButton *mainWindow_widget_7_btn_isEnable;
    QPushButton *mainWindow_widget_8_btn_isEnable;
    QPushButton *mainWindow_widget_9_btn_isEnable;
    QPushButton *mainWindow_widget_10_btn_isEnable;

    QPushButton *mainWindow_widget_0_btn_isLink;
    QPushButton *mainWindow_widget_1_btn_isLink;
    QPushButton *mainWindow_widget_2_btn_isLink;
    QPushButton *mainWindow_widget_3_btn_isLink;
    QPushButton *mainWindow_widget_4_btn_isLink;
    QPushButton *mainWindow_widget_5_btn_isLink;
    QPushButton *mainWindow_widget_6_btn_isLink;
    QPushButton *mainWindow_widget_7_btn_isLink;
    QPushButton *mainWindow_widget_8_btn_isLink;
    QPushButton *mainWindow_widget_9_btn_isLink;
    QPushButton *mainWindow_widget_10_btn_isLink;


    QLabel *mainWindow_widget_statusLink;

    QTimer *mainWindow_refreshTimer;

    QVector<QPushButton*> mainWindow_btn_isEnable_vectors;
    QVector<QPushButton*> mainWindow_btn_isLink_vectors;
    QVector<QWidget*> mainWindow_contrlWidget_vectors;


    QVector<bool> mainWindow_widget_isEnable_vector;
    QVector<bool> mainWindow_widget_isLink_vector;

private slots:
    void mainWindow_widget_0_on_btn_isEnable_pressed();
    void mainWindow_widget_0_on_btn_isLink_pressed();

    void _on_refreshBlocTimer_timeOut();





};
#endif // MAINWINDOW_H
