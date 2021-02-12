#ifndef MYWIDGET_3_SOLEILS_H
#define MYWIDGET_3_SOLEILS_H

#include <QWidget>
#include <MyWidgetCommonLib.h>
#include <MyWidgetCommonModelA.h>

class MyWidget_3_Soleils : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_3_Soleils(QWidget *parent = nullptr);

signals:

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelA *widgetSoleils_commonModelA_1;
    MyWidgetCommonModelA *widgetSoleils_commonModelA_2;

};

#endif // MYWIDGET_3_SOLEILS_H
