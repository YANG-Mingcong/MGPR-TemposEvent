#ifndef MYWIDGET_0_COMETE_H
#define MYWIDGET_0_COMETE_H

#include <QWidget>
#include <MyWidgetCommonLib.h>

class MyWidget_0_Comete : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_0_Comete(QWidget *parent = nullptr);

signals:
    void widgetComete_sendOSCCommand(QString, int, bool);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    QSpinBox *widgetComete_spbox_clickCount;
    QSpinBox *widgetComete_spbox_playerCount;
    QSpinBox *widgetComete_spbox_conditionStepCount;

    QLabel *_labelCondition_errorMsg;
    QTextEdit *widgetComete_txtEdit_oscCommand;

    void widgetComete_conditionCheck(qint32, qint32);

    MyObjectOSCNetCore *widgetComete_OSCNetCore;
//    MyObjectOSCCommandPool *widgetComete_OSCCommandPool;

    QThread *widgetComete_oscNetCore_thread;

private slots:
    void widgetComete_on_spbox_clickCount_change(int);
    void widgetComete_on_spbox_playerCount_change(int);
    void widgetComete_on_spbox_conditionStepCount_change(int);

    void _getJsonData_clickCount(int);
    void _getJsonData_playerCount(int);



};

#endif // MYWIDGET_0_COMETE_H
