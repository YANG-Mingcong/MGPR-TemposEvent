#ifndef MYWIDGET_9_CAVERNE_H
#define MYWIDGET_9_CAVERNE_H

#include <QWidget>
#include <MyWidgetCommonModelB.h>


class MyWidget_9_Caverne : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_9_Caverne(QWidget *parent = nullptr);

signals:

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelB *widgetCaverne_commonModelB_1;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_2;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_3;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_4;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_5;

};

#endif // MYWIDGET_9_CAVERNE_H
