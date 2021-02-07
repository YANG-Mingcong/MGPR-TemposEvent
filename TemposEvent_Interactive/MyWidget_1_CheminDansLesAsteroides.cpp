#include "MyWidget_1_CheminDansLesAsteroides.h"

MyWidget_1_CheminDansLesAsteroides::MyWidget_1_CheminDansLesAsteroides(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_1_CheminDansLesAsteroides::initialVariable()
{

}

void MyWidget_1_CheminDansLesAsteroides::initialUI()
{
    QGridLayout *widgetChemin_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetChemin_mainLayout);

    widgetChemin_mainLayout->setContentsMargins(0,0,0,0);
    widgetChemin_mainLayout->setSpacing(3);

    widgetChemin_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_1->setTitleName("Chemin dans les astéroïdes-1");
    widgetChemin_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_1, 0, 0,1, 1);

    widgetChemin_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_2->setTitleName("Chemin dans les astéroïdes-2");
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_2, 1, 0, 1, 1);
}

void MyWidget_1_CheminDansLesAsteroides::initialConnect()
{

}
