#ifndef MYWIDGETCOMMONMODELB_H
#define MYWIDGETCOMMONMODELB_H

#include <QWidget>
#include <MyWidgetCommonLib.h>


class MyWidgetCommonModelB : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidgetCommonModelB(QWidget *parent = nullptr);
    void setTitleName(QString);
    void setOSCCommand(QString);
    void setThreshold(int);
    void setOSCSendPort(qint32);
    void setOSCSendIP(QString);
    void setOSCisOnlySendOnce(bool);

signals:
    void widgetCommonModelB_sendOSCCommand(QString, int, bool);
    void widgetCommonModelB_OSCNetCore_changeSendIP(QString);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    QLabel *_labelCommonModelB;

    QLabel *_labelCondition_2;

    QSpinBox *widgetCommonModelB_spbox_clickCount;
    QSpinBox *widgetCommonModelB_spbox_playerCount;
    QSpinBox *widgetCommonModelB_spbox_conditionStepCount;

    QLabel *_labelCondition_errorMsg;
    QTextEdit *widgetCommonModelB_txtEdit_oscCommand;

    void widgetCommonModelB_conditionCheck(qint32, qint32);

    MyObjectOSCNetCore *widgetCommonModelB_OSCNetCore;
//    MyObjectOSCCommandPool *widgetCommonModelB_OSCCommandPool;

    int widgetCommonModelB_conitionThreshold;
    int widgetCommonModelB_OSCSendPort;
    float widgetCommonModelB_OSCFloat;
    QString widgetCommonModelB_OSCSendIP;

    QString widgetCommonModelB_OSCCommandWithoutArg;

    bool widgetCommonModelB_is_OSCSend;
    bool widgetCommonModelB_is_OSCOnlySendOnce;

    QThread *widgetCMB_oscThread;


private slots:
    void widgetCommonModelB_on_spbox_clickCount_change(int);
    void widgetCommonModelB_on_spbox_playerCount_change(int);
    void widgetCommonModelB_on_spbox_conditionStepCount_change(int);

    void _getJsonData_clickCount(int);
    void _getJsonData_playerCount(int);

};

#endif // MYWIDGETCOMMONMODELB_H
