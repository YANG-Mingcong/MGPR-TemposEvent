#ifndef MYWIDGET_8_DESERT_H
#define MYWIDGET_8_DESERT_H

#include <QWidget>
#include <MyWidgetCommonLib.h>
#include <MyWidgetCommonModelB.h>

class MyWidget_8_Desert : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_8_Desert(QWidget *parent = nullptr);

signals:
    void _sendJsonData_to_widget_8_cube_1(int);
    void _sendJsonData_to_widget_8_cube_2(int);


    void _sendJsonData_playerCount(int);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelB *widgetDesert_commonModelB_1;
    MyWidgetCommonModelB *widgetDesert_commonModelB_2;

private slots:
    void _getJsonData_clickCount(int, int);
    void _getJsonData_playerCount(int);




};

#endif // MYWIDGET_8_DESERT_H
