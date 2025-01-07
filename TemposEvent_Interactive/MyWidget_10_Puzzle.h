#ifndef MYWIDGET_10_PUZZLE_H
#define MYWIDGET_10_PUZZLE_H

#include <QWidget>
#include <MyWidgetCommonModelA.h>

class MyWidget_10_Puzzle : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget_10_Puzzle(QWidget *parent = nullptr);

signals:
    void _sendJsonData_to_widget_10_cube_1(int);
    void _sendJsonData_to_widget_10_cube_2(int);
    void _sendJsonData_to_widget_10_cube_3(int);
    void _sendJsonData_to_widget_10_cube_4(int);
    void _sendJsonData_to_widget_10_cube_5(int);
    void _sendJsonData_to_widget_10_cube_6(int);
    void _sendJsonData_to_widget_10_cube_7(int);
    void _sendJsonData_to_widget_10_cube_8(int);

    void _sendJsonData_playerCount(int);

private:
    void initialVariable();
    void initialUI();
    void initialConnect();

    MyWidgetCommonModelA *widgetPuzzle_commonModelA_1;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_2;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_3;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_4;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_5;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_6;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_7;
    MyWidgetCommonModelA *widgetPuzzle_commonModelA_8;


private slots:
    void _getJsonData_clickCount(int, int, int, int, int, int, int, int);
    void _getJsonData_playerCount(int);

};

#endif // MYWIDGET_10_PUZZLE_H
