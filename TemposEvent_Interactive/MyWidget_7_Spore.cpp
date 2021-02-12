#include "MyWidget_7_Spore.h"

MyWidget_7_Spore::MyWidget_7_Spore(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_7_Spore::initialVariable()
{

}

void MyWidget_7_Spore::initialUI()
{
    QGridLayout *widgetSpore_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetSpore_mainLayout);

    QString VVVV_IP_2 = "169.254.159.128";
    QString millumin_IP = "169.254.160.141";
//    QString VVVV_IP_2 = "169.254.255.255";


    widgetSpore_mainLayout->setContentsMargins(0,0,0,0);
    widgetSpore_mainLayout->setSpacing(3);

    widgetSpore_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_1->setTitleName("Spores Bloc-1");
    widgetSpore_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSpore_commonModelA_1->setThreshold(80);
    widgetSpore_commonModelA_1->setOSCCommand("/layer:plante_x/startMedia [1]");
    widgetSpore_commonModelA_1->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_1, 0, 0, 1, 1);

    widgetSpore_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_2->setTitleName("Spores Bloc-2");
    widgetSpore_commonModelA_2->setThreshold(80);
    widgetSpore_commonModelA_2->setOSCCommand("/layer:plante_x/startMedia [2]");
    widgetSpore_commonModelA_2->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_2, 1, 0, 1, 1);

    widgetSpore_commonModelA_3 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_3->setTitleName("Spores Bloc-3");
    widgetSpore_commonModelA_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSpore_commonModelA_3->setThreshold(80);
    widgetSpore_commonModelA_3->setOSCCommand("/layer:plante_x/startMedia [3]");
    widgetSpore_commonModelA_3->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_3, 2, 0, 1, 1);

    widgetSpore_commonModelA_4 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_4->setTitleName("Spores Bloc-4");
    widgetSpore_commonModelA_4->setThreshold(80);
    widgetSpore_commonModelA_4->setOSCCommand("/layer:plante_x/startMedia [4]");
    widgetSpore_commonModelA_4->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_4, 3, 0, 1, 1);

    widgetSpore_commonModelA_5 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_5->setTitleName("Spores Bloc-5");
    widgetSpore_commonModelA_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSpore_commonModelA_5->setThreshold(80);
    widgetSpore_commonModelA_5->setOSCCommand("/layer:plante_x/startMedia [5]");
    widgetSpore_commonModelA_5->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_5, 4, 0, 1, 1);

    widgetSpore_commonModelA_6 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_6->setTitleName("Spores Bloc-6");
    widgetSpore_commonModelA_6->setThreshold(80);
    widgetSpore_commonModelA_6->setOSCCommand("/layer:plante_x/startMedia [6]");
    widgetSpore_commonModelA_6->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_6, 5, 0, 1, 1);

    widgetSpore_commonModelA_7 = new MyWidgetCommonModelA(this);
    widgetSpore_commonModelA_7->setTitleName("Spores Bloc-7");
    widgetSpore_commonModelA_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSpore_commonModelA_7->setThreshold(80);
    widgetSpore_commonModelA_7->setOSCCommand("/layer:plante_x/startMedia [7]");
    widgetSpore_commonModelA_7->setOSCSendIP(millumin_IP);
    widgetSpore_mainLayout->addWidget(widgetSpore_commonModelA_7, 6, 0, 1, 1);

}

void MyWidget_7_Spore::initialConnect()
{

}
