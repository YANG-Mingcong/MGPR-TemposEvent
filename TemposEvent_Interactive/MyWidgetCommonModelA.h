#ifndef MYWIDGETCOMMONMODELA_H
#define MYWIDGETCOMMONMODELA_H

#include <QWidget>
#include <MyWidgetCommonLib.h>

class MyWidgetCommonModelA : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidgetCommonModelA(QWidget *parent = nullptr);
    void setTitleName(QString);
    void setOSCCommand(QString);
    void setThreshold(int);
    void setOSCSendPort(qint32);





signals:
    void widgetCommonModelA_sendOSCCommand(QString, int, bool);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    QLabel *_labelCommonModelA;

    QSpinBox *widgetCommonModelA_spbox_clickCount;
    QSpinBox *widgetCommonModelA_spbox_playerCount;
    QSpinBox *widgetCommonModelA_spbox_conditionStepCount;

    QLabel *_labelCondition_errorMsg;
    QTextEdit *widgetCommonModelA_txtEdit_oscCommand;

    void widgetCommonModelA_conditionCheck(qint32, qint32);

    MyObjectOSCNetCore *widgetCommonModelA_OSCNetCore;
    MyObjectOSCCommandPool *widgetCommonModelA_OSCCommandPool;

    int widgetCommonModelA_conitionThreshold;
    int widgetCommonModelA_OSCSendPort;

private slots:
    void widgetCommonModelA_on_spbox_clickCount_change(int);
    void widgetCommonModelA_on_spbox_playerCount_change(int);
    void widgetCommonModelA_on_spbox_conditionStepCount_change(int);


};

#endif // MYWIDGETCOMMONMODELA_H