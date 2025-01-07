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
    void _sendJsonData_to_widget_2(int, int, int, int, int, int, int, int);
    void _sendJsonData_to_widget_3(int, int);
    void _sendJsonData_to_widget_4(int);
    void _sendJsonData_to_widget_5(int);
//    void _sendJsonData_to_widget_6_1(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_2(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_3(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_4(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_5(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_6(int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_7(int, int, int, int, int, int, int, int, int, int, int, int, int, int );
//    void _sendJsonData_to_widget_6_8(int, int, int, int, int, int, int, int, int, int, int, int, int, int );

    void _sendJsonData_to_widget_6_1(QStringList );
    void _sendJsonData_to_widget_6_2(QStringList );
    void _sendJsonData_to_widget_6_3(QStringList );
    void _sendJsonData_to_widget_6_4(QStringList );
    void _sendJsonData_to_widget_6_5(QStringList );
    void _sendJsonData_to_widget_6_6(QStringList );
    void _sendJsonData_to_widget_6_7(QStringList );
    void _sendJsonData_to_widget_6_8(QStringList );

    void _sendJsonData_to_widget_7(int, int, int, int, int, int, int);
    void _sendJsonData_to_widget_8(int, int);
    void _sendJsonData_to_widget_9(int, int, int, int, int);
    void _sendJsonData_to_widget_10(int, int, int, int, int, int, int, int);


    void _sendJsonData_playerCount(int);

    void mainWindow_sendOSCCommand(QString, int, bool);
    void mainWindow_OSCNetCore_changeSendIP(QString);

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
//    MyWidget_9_Caverne *mainWindow_widgetCaverne;
    MyWidget_10_Puzzle *mainWindow_widgetPuzzle;

    QPushButton *mainWindow_00_btn_all_isLink;

    QPushButton *mainWindow_widget_1_btn_start;

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
//    QPushButton *mainWindow_widget_9_btn_isEnable;
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
//    QPushButton *mainWindow_widget_9_btn_isLink;
    QPushButton *mainWindow_widget_10_btn_isLink;


    QLabel *mainWindow_widget_statusLink;

    QTimer *mainWindow_refreshTimer;

    MyObjectOSCNetCore *mainWindow_sendOSCNetCore;

//    QVector<QPushButton*> mainWindow_btn_isEnable_vectors;
//    QVector<QPushButton*> mainWindow_btn_isLink_vectors;
//    QVector<QWidget*> mainWindow_contrlWidget_vectors;

    bool mainWindow_00_all_isLink;
    QVector<bool> mainWindow_widget_isEnable_vector;
    QVector<bool> mainWindow_widget_isLink_vector;

private slots:
    void mainWindow_00_on_all_btn_isLink_pressed();

    void mainWindow_widget_1_on_btn_start_pressed();


    void mainWindow_widget_0_on_btn_isEnable_pressed();
    void mainWindow_widget_0_on_btn_isLink_pressed();

    void _on_refreshBlocTimer_timeOut();





};
#endif // MAINWINDOW_H
