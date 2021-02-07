#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <MyWidget_0_Comete.h>
#include <MyWidget_1_CheminDansLesAsteroides.h>

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

    MyWidget_0_Comete *mainWindow_widgetComete;
    MyWidget_1_CheminDansLesAsteroides *mainWindow_widgetChemin;

};
#endif // MAINWINDOW_H
