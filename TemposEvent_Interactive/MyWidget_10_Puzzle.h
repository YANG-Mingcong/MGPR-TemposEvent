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

};

#endif // MYWIDGET_10_PUZZLE_H
