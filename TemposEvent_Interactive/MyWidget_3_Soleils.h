#ifndef MYWIDGET_3_SOLEILS_H
#define MYWIDGET_3_SOLEILS_H

#include <QWidget>
#include <MyWidgetCommonLib.h>
#include <MyWidgetCommonModelB.h>

class MyWidget_3_Soleils : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_3_Soleils(QWidget *parent = nullptr);

signals:
    void _sendJsonData_to_widget_3_cube_1(int);
    void _sendJsonData_to_widget_3_cube_2(int);


    void _sendJsonData_playerCount(int);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelB *widgetSoleils_commonModelB_1;
    MyWidgetCommonModelB *widgetSoleils_commonModelB_2;

private slots:
    void _getJsonData_clickCount(int, int);
    void _getJsonData_playerCount(int);

};

#endif // MYWIDGET_3_SOLEILS_H
