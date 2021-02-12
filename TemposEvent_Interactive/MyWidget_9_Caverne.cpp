#include "MyWidget_9_Caverne.h"

MyWidget_9_Caverne::MyWidget_9_Caverne(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_9_Caverne::initialVariable()
{

}

void MyWidget_9_Caverne::initialUI()
{
    QGridLayout *widgetNebuleuse_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetNebuleuse_mainLayout);

    QString VVVV_IP_2 = "169.254.159.128";
//    QString millumin_IP = "169.254.160.141";
//    QString VVVV_IP_2 = "169.254.255.255";
    QString millumin_IP = "255.255.255.255";


    widgetNebuleuse_mainLayout->setContentsMargins(0,0,0,0);
    widgetNebuleuse_mainLayout->setSpacing(3);

    widgetCaverne_commonModelB_1 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_1->setTitleName("Caverne Bloc-1");
    widgetCaverne_commonModelB_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetCaverne_commonModelB_1->setThreshold(80);
    widgetCaverne_commonModelB_1->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_1->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetCaverne_commonModelB_1, 0, 0, 1, 1);

    widgetCaverne_commonModelB_2 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_2->setTitleName("Caverne Bloc-2");
    widgetCaverne_commonModelB_2->setThreshold(80);
    widgetCaverne_commonModelB_2->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_2->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetCaverne_commonModelB_2, 1, 0, 1, 1);

    widgetCaverne_commonModelB_3 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_3->setTitleName("Caverne Bloc-3");
    widgetCaverne_commonModelB_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetCaverne_commonModelB_3->setThreshold(80);
    widgetCaverne_commonModelB_3->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_3->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetCaverne_commonModelB_3, 2, 0, 1, 1);

    widgetCaverne_commonModelB_4 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_4->setTitleName("Caverne Bloc-4");
    widgetCaverne_commonModelB_4->setThreshold(80);
    widgetCaverne_commonModelB_4->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_4->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetCaverne_commonModelB_4, 3, 0, 1, 1);

    widgetCaverne_commonModelB_5 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_5->setTitleName("Caverne Bloc-5");
    widgetCaverne_commonModelB_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetCaverne_commonModelB_5->setThreshold(80);
    widgetCaverne_commonModelB_5->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_5->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetCaverne_commonModelB_5, 4, 0, 1, 1);

}

void MyWidget_9_Caverne::initialConnect()
{

}
