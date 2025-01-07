#ifndef MYWIDGET_7_SPORE_H
#define MYWIDGET_7_SPORE_H

#include <QWidget>
#include <MyWidgetCommonModelA.h>

class MyWidget_7_Spore : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_7_Spore(QWidget *parent = nullptr);

signals:
    void _sendJsonData_to_widget_7_cube_1(int);
    void _sendJsonData_to_widget_7_cube_2(int);
    void _sendJsonData_to_widget_7_cube_3(int);
    void _sendJsonData_to_widget_7_cube_4(int);
    void _sendJsonData_to_widget_7_cube_5(int);
    void _sendJsonData_to_widget_7_cube_6(int);
    void _sendJsonData_to_widget_7_cube_7(int);

    void _sendJsonData_playerCount(int);
private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelA *widgetSpore_commonModelA_1;
    MyWidgetCommonModelA *widgetSpore_commonModelA_2;
    MyWidgetCommonModelA *widgetSpore_commonModelA_3;
    MyWidgetCommonModelA *widgetSpore_commonModelA_4;
    MyWidgetCommonModelA *widgetSpore_commonModelA_5;
    MyWidgetCommonModelA *widgetSpore_commonModelA_6;
    MyWidgetCommonModelA *widgetSpore_commonModelA_7;

private slots:
    void _getJsonData_clickCount(int, int, int, int, int, int, int);
    void _getJsonData_playerCount(int);

};

#endif // MYWIDGET_7_SPORE_H
