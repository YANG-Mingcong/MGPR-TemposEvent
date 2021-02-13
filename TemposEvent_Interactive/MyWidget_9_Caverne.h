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
    void _sendJsonData_to_widget_9_cube_1(int);
    void _sendJsonData_to_widget_9_cube_2(int);
    void _sendJsonData_to_widget_9_cube_3(int);
    void _sendJsonData_to_widget_9_cube_4(int);
    void _sendJsonData_to_widget_9_cube_5(int);

    void _sendJsonData_playerCount(int);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelB *widgetCaverne_commonModelB_1;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_2;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_3;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_4;
    MyWidgetCommonModelB *widgetCaverne_commonModelB_5;

private slots:
    void _getJsonData_clickCount(int, int, int, int, int);
    void _getJsonData_playerCount(int);

};

#endif // MYWIDGET_9_CAVERNE_H
