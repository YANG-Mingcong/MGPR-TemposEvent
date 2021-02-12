#ifndef MYWIDGET_4_TROUNOIR_H
#define MYWIDGET_4_TROUNOIR_H

#include <QWidget>
#include <MyWidgetCommonLib.h>


class MyWidget_4_TrouNoir : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_4_TrouNoir(QWidget *parent = nullptr);

signals:
    void widgetTrouNoir_sendOSCCommand(QString, int, bool);
    void widgetTrouNoir_OSCNetCore_changeSendIP(QString);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    QLabel *_labelCommonModelA;

    QLabel *_labelCondition_2;

    QSpinBox *widgetTrouNoir_spbox_clickCount;
    QSpinBox *widgetTrouNoir_spbox_playerCount;
    QDoubleSpinBox *widgetTrouNoir_spbox_conditionStepCount;

    QLabel *_labelCondition_errorMsg;
    QTextEdit *widgetTrouNoir_txtEdit_oscCommand;

    void widgetTrouNoir_conditionCheck(qint32, qint32);

    MyObjectOSCNetCore *widgetTrouNoir_OSCNetCore;
    MyObjectOSCCommandPool *widgetTrouNoir_OSCCommandPool;

    int widgetTrouNoir_conitionThreshold;
    int widgetTrouNoir_OSCSendPort;
    float widgetTrouNoir_OSCFloat;
    QString widgetTrouNoir_OSCSendIP;

private slots:
    void widgetTrouNoir_on_spbox_clickCount_change(int);
    void widgetTrouNoir_on_spbox_playerCount_change(int);
    void widgetTrouNoir_on_spbox_conditionStepCount_change(double);

};

#endif // MYWIDGET_4_TROUNOIR_H
