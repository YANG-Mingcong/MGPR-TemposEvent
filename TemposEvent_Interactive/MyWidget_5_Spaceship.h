#ifndef MYWIDGET_5_SPACESHIP_H
#define MYWIDGET_5_SPACESHIP_H

#include <QWidget>
#include <MyWidgetCommonLib.h>


class MyWidget_5_Spaceship : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_5_Spaceship(QWidget *parent = nullptr);

signals:
    void widgetSpaceship_sendOSCCommand(QString, int, bool);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    QSpinBox *widgetSpaceship_spbox_clickCount;
    QSpinBox *widgetSpaceship_spbox_playerCount;
    QSpinBox *widgetSpaceship_spbox_conditionStepCount;

    QLabel *_labelCondition_errorMsg;
    QTextEdit *widgetSpaceship_txtEdit_oscCommand;

    void widgetSpaceship_conditionCheck(qint32, qint32);

    MyObjectOSCNetCore *widgetSpaceship_OSCNetCore;
    MyObjectOSCCommandPool *widgetSpaceship_OSCCommandPool;

private slots:
    void widgetSpaceship_on_spbox_clickCount_change(int);
    void widgetSpaceship_on_spbox_playerCount_change(int);
    void widgetSpaceship_on_spbox_conditionStepCount_change(int);



};

#endif // MYWIDGET_5_SPACESHIP_H
