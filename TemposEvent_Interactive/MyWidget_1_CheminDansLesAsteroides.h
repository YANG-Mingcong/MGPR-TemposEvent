#ifndef MYWIDGET_1_CHEMINDANSLESASTEROIDES_H
#define MYWIDGET_1_CHEMINDANSLESASTEROIDES_H

#include <QWidget>
#include <MyWidgetCommonLib.h>


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


};

#endif // MYWIDGET_1_CHEMINDANSLESASTEROIDES_H
