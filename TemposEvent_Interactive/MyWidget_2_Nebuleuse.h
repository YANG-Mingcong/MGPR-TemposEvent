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
    void _sendJsonData_to_widget_2_cube_1(int);
    void _sendJsonData_to_widget_2_cube_2(int);
    void _sendJsonData_to_widget_2_cube_3(int);
    void _sendJsonData_to_widget_2_cube_4(int);
    void _sendJsonData_to_widget_2_cube_5(int);
    void _sendJsonData_to_widget_2_cube_6(int);
    void _sendJsonData_to_widget_2_cube_7(int);
    void _sendJsonData_to_widget_2_cube_8(int);

    void _sendJsonData_playerCount(int);


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

private slots:
    void _getJsonData_clickCount(int, int, int, int, int, int, int, int);
    void _getJsonData_playerCount(int);
};

#endif // MYWIDGET_2_NEBULEUSE_H
