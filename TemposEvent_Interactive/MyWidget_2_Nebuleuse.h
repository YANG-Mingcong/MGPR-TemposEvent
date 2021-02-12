#ifndef MYWIDGET_2_NEBULEUSE_H
#define MYWIDGET_2_NEBULEUSE_H

#include <QWidget>
#include <MyWidgetCommonModelA.h>

class MyWidget_2_Nebuleuse : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_2_Nebuleuse(QWidget *parent = nullptr);

signals:

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_1;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_2;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_3;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_4;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_5;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_6;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_7;
    MyWidgetCommonModelA *widgetNebuleuse_commonModelA_8;

};

#endif // MYWIDGET_2_NEBULEUSE_H
