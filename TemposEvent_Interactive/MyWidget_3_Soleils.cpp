#include "MyWidget_3_Soleils.h"

MyWidget_3_Soleils::MyWidget_3_Soleils(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_3_Soleils::initialVariable()
{

}

void MyWidget_3_Soleils::initialUI()
{
    QGridLayout *widgetSoleils_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetChemin_mainLayout);

    widgetSoleils_mainLayout->setContentsMargins(0,0,0,0);
    widgetSoleils_mainLayout->setSpacing(3);

    widgetSoleils_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetSoleils_commonModelA_1->setTitleName("Soleils - bloc1");
    widgetSoleils_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSoleils_commonModelA_1->setThreshold(25);
    widgetSoleils_commonModelA_1->setOSCCommand("/layer:flareL_x/startMedia [1]");
    widgetSoleils_mainLayout->addWidget(widgetSoleils_commonModelA_1, 0, 0, 1, 1);

    widgetSoleils_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetSoleils_commonModelA_2->setTitleName("Soleils - bloc2");
    widgetSoleils_commonModelA_2->setThreshold(25);
    widgetSoleils_commonModelA_2->setOSCCommand("/layer:flareL_x/startMedia [2]");
    widgetSoleils_mainLayout->addWidget(widgetSoleils_commonModelA_2, 1, 0, 1, 1);
}

void MyWidget_3_Soleils::initialConnect()
{

}
