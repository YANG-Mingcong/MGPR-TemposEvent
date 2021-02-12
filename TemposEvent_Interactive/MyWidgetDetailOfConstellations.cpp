#include "MyWidgetDetailOfConstellations.h"
#include "ui_MyWidgetDetailOfConstellations.h"

MyWidgetDetailOfConstellations::MyWidgetDetailOfConstellations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidgetDetailOfConstellations)
{
    ui->setupUi(this);
}

MyWidgetDetailOfConstellations::~MyWidgetDetailOfConstellations()
{
    delete ui;
}
