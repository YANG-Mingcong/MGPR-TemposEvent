#ifndef MYWIDGET_1_CHEMINDANSLESASTEROIDES_H
#define MYWIDGET_1_CHEMINDANSLESASTEROIDES_H

#include <QWidget>
#include <MyWidgetCommonLib.h>
#include <MyWidgetCommonModelA.h>


class MyWidget_1_CheminDansLesAsteroides : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_1_CheminDansLesAsteroides(QWidget *parent = nullptr);


signals:
//    void widgetChemin_sendOSCCommand(QString, int, bool);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelA *widgetChemin_commonModelA_1;
    MyWidgetCommonModelA *widgetChemin_commonModelA_2;
    MyWidgetCommonModelA *widgetChemin_commonModelA_3;
    MyWidgetCommonModelA *widgetChemin_commonModelA_4;
    MyWidgetCommonModelA *widgetChemin_commonModelA_5;
    MyWidgetCommonModelA *widgetChemin_commonModelA_6;
    MyWidgetCommonModelA *widgetChemin_commonModelA_7;
    MyWidgetCommonModelA *widgetChemin_commonModelA_8;
    MyWidgetCommonModelA *widgetChemin_commonModelA_9;


};

#endif // MYWIDGET_1_CHEMINDANSLESASTEROIDES_H
