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
    QString VVVV_IP_1 = "169.254.65.77";

    QString VVVV_IP_2 = "169.254.159.128";

//    QString VVVV_IP_2 = "169.254.255.255";

    widgetChemin_mainLayout->setContentsMargins(0,0,0,0);
    widgetChemin_mainLayout->setSpacing(3);


    widgetChemin_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_1->setTitleName("Chemin dans les astéroïdes-1");
    widgetChemin_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_1->setThreshold(80);
    widgetChemin_commonModelA_1->setOSCCommand("/VVVV/Chemin/bloc_1 1");
    widgetChemin_commonModelA_1->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_1->setOSCSendPort(4521);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_1, 0, 0, 1, 1);

    widgetChemin_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_2->setTitleName("Chemin dans les astéroïdes-2");
    widgetChemin_commonModelA_2->setThreshold(80);
    widgetChemin_commonModelA_2->setOSCCommand("/VVVV/Chemin/bloc_2 1");
    widgetChemin_commonModelA_2->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_2->setOSCSendPort(4522);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_2, 1, 0, 1, 1);

    widgetChemin_commonModelA_3 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_3->setTitleName("Chemin dans les astéroïdes-3");
    widgetChemin_commonModelA_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_3->setThreshold(80);
    widgetChemin_commonModelA_3->setOSCCommand("/VVVV/Chemin/bloc_3 1");
    widgetChemin_commonModelA_3->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_3->setOSCSendPort(4523);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_3, 2, 0, 1, 1);

    widgetChemin_commonModelA_4 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_4->setTitleName("Chemin dans les astéroïdes-4");
    widgetChemin_commonModelA_4->setThreshold(80);
    widgetChemin_commonModelA_4->setOSCCommand("/VVVV/Chemin/bloc_4 1");
    widgetChemin_commonModelA_4->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_4->setOSCSendPort(4524);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_4, 3, 0, 1, 1);

    widgetChemin_commonModelA_5 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_5->setTitleName("Chemin dans les astéroïdes-5");
    widgetChemin_commonModelA_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_5->setThreshold(80);
    widgetChemin_commonModelA_5->setOSCCommand("/VVVV/Chemin/bloc_5 1");
    widgetChemin_commonModelA_5->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_5->setOSCSendPort(4525);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_5, 4, 0, 1, 1);

    widgetChemin_commonModelA_6 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_6->setTitleName("Chemin dans les astéroïdes-6");
    widgetChemin_commonModelA_6->setThreshold(80);
    widgetChemin_commonModelA_6->setOSCCommand("/VVVV/Chemin/bloc_6 1");
    widgetChemin_commonModelA_6->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_6->setOSCSendPort(4526);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_6, 5, 0, 1, 1);

    widgetChemin_commonModelA_7 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_7->setTitleName("Chemin dans les astéroïdes-7");
    widgetChemin_commonModelA_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_7->setThreshold(80);
    widgetChemin_commonModelA_7->setOSCCommand("/VVVV/Chemin/bloc_7 1");
    widgetChemin_commonModelA_7->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_7->setOSCSendPort(4527);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_7, 6, 0, 1, 1);

    widgetChemin_commonModelA_8 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_8->setTitleName("Chemin dans les astéroïdes-8");
    widgetChemin_commonModelA_8->setThreshold(80);
    widgetChemin_commonModelA_8->setOSCCommand("/VVVV/Chemin/bloc_8 1");
    widgetChemin_commonModelA_8->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_8->setOSCSendPort(4528);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_8, 7, 0, 1, 1);

    widgetChemin_commonModelA_9 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_9->setTitleName("Chemin dans les astéroïdes-9");
    widgetChemin_commonModelA_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_9->setThreshold(80);
    widgetChemin_commonModelA_9->setOSCCommand("/VVVV/Chemin/bloc_9 1");
    widgetChemin_commonModelA_9->setOSCSendIP(VVVV_IP_1);
    widgetChemin_commonModelA_9->setOSCSendPort(4529);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_9, 8, 0, 1, 1);




}

void MyWidget_1_CheminDansLesAsteroides::initialConnect()
{

}
