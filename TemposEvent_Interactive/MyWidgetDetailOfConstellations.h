#ifndef MYWIDGETDETAILOFCONSTELLATIONS_H
#define MYWIDGETDETAILOFCONSTELLATIONS_H

#include <QWidget>

namespace Ui {
class MyWidgetDetailOfConstellations;
}

class MyWidgetDetailOfConstellations : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidgetDetailOfConstellations(QWidget *parent = nullptr);
    ~MyWidgetDetailOfConstellations();

private:
    Ui::MyWidgetDetailOfConstellations *ui;
};

#endif // MYWIDGETDETAILOFCONSTELLATIONS_H
