#include "MyWidget_6_Constellation.h"

MyWidget_6_Constellation::MyWidget_6_Constellation(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_6_Constellation::initialVariable()
{

}

void MyWidget_6_Constellation::initialUI()
{
    QGridLayout *widgetConstellation_mainLayout = new QGridLayout(this);
    widgetConstellation_mainLayout->setContentsMargins(0,0,0,0);
    widgetConstellation_mainLayout->setSpacing(3);

    //Cancer
    widgetConstellation_cMA_1_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_1->setTitleName("Constellation_1_Cancer1");
    widgetConstellation_cMA_1_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_1_1->setThreshold(80);
    widgetConstellation_cMA_1_1->setOSCCommand("/action/launchColumn 33");
    widgetConstellation_cMA_1_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_1, 0, 0, 1, 1);

//    widgetConstellation_cMA_1_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_1_2->setTitleName("Constellation_1_Cancer2");
//    widgetConstellation_cMA_1_2->setThreshold(80);
//    widgetConstellation_cMA_1_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_1_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_2, 1, 0, 1, 1);

//    widgetConstellation_cMA_1_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_1_3->setTitleName("Constellation_1_Cancer3");
//    widgetConstellation_cMA_1_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_1_3->setThreshold(80);
//    widgetConstellation_cMA_1_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_1_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_3, 2, 0, 1, 1);

//    widgetConstellation_cMA_1_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_1_4->setTitleName("Constellation_1_Cancer4");
//    widgetConstellation_cMA_1_4->setThreshold(80);
//    widgetConstellation_cMA_1_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_1_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_4, 3, 0, 1, 1);

//    widgetConstellation_cMA_1_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_1_5->setTitleName("Constellation_1_Cancer5");
//    widgetConstellation_cMA_1_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_1_5->setThreshold(80);
//    widgetConstellation_cMA_1_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_1_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_5, 4, 0, 1, 1);

//    widgetConstellation_cMA_1_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_1_6->setTitleName("Constellation_1_Cancer6");
//    widgetConstellation_cMA_1_6->setThreshold(80);
//    widgetConstellation_cMA_1_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_1_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_6, 5, 0, 1, 1);

    //Cepheus
    widgetConstellation_cMA_2_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_1->setTitleName("Constellation_2_Cepheus1");
//    widgetConstellation_cMA_2_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_1->setThreshold(80);
    widgetConstellation_cMA_2_1->setOSCCommand("/action/launchColumn 34");
    widgetConstellation_cMA_2_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_1, 6, 0, 1, 1);

//    widgetConstellation_cMA_2_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_2->setTitleName("Constellation_2_Cepheus2");
//    widgetConstellation_cMA_2_2->setThreshold(80);
//    widgetConstellation_cMA_2_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_2, 7, 0, 1, 1);

//    widgetConstellation_cMA_2_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_3->setTitleName("Constellation_2_Cepheus3");
//    widgetConstellation_cMA_2_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_2_3->setThreshold(80);
//    widgetConstellation_cMA_2_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_3, 8, 0, 1, 1);

//    widgetConstellation_cMA_2_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_4->setTitleName("Constellation_2_Cepheus4");
//    widgetConstellation_cMA_2_4->setThreshold(80);
//    widgetConstellation_cMA_2_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_4, 9, 0, 1, 1);

//    widgetConstellation_cMA_2_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_5->setTitleName("Constellation_2_Cepheus5");
//    widgetConstellation_cMA_2_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_2_5->setThreshold(80);
//    widgetConstellation_cMA_2_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_5, 10, 0, 1, 1);

//    widgetConstellation_cMA_2_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_6->setTitleName("Constellation_2_Cepheus6");
//    widgetConstellation_cMA_2_6->setThreshold(80);
//    widgetConstellation_cMA_2_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_6, 11, 0, 1, 1);

//    widgetConstellation_cMA_2_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_7->setTitleName("Constellation_2_Cepheus7");
//    widgetConstellation_cMA_2_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_2_7->setThreshold(80);
//    widgetConstellation_cMA_2_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_7, 12, 0, 1, 1);

//    widgetConstellation_cMA_2_8 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_8->setTitleName("Constellation_2_Cepheus8");
//    widgetConstellation_cMA_2_8->setThreshold(80);
//    widgetConstellation_cMA_2_8->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_8->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_8, 13, 0, 1, 1);

//    widgetConstellation_cMA_2_9 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_2_9->setTitleName("Constellation_2_Cepheus9");
//    widgetConstellation_cMA_2_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_2_9->setThreshold(80);
//    widgetConstellation_cMA_2_9->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_2_9->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_9, 14, 0, 1, 1);

    //Cygnus
    widgetConstellation_cMA_3_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_1->setTitleName("Constellation_3_Cygnus1");
    widgetConstellation_cMA_3_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_3_1->setThreshold(80);
    widgetConstellation_cMA_3_1->setOSCCommand("/action/launchColumn 35");
    widgetConstellation_cMA_3_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_1, 15, 0, 1, 1);

//    widgetConstellation_cMA_3_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_2->setTitleName("Constellation_3_Cygnus2");
//    widgetConstellation_cMA_3_2->setThreshold(80);
//    widgetConstellation_cMA_3_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_2, 16, 0, 1, 1);

//    widgetConstellation_cMA_3_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_3->setTitleName("Constellation_3_Cygnus3");
//    widgetConstellation_cMA_3_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_3_3->setThreshold(80);
//    widgetConstellation_cMA_3_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_3, 17, 0, 1, 1);

//    widgetConstellation_cMA_3_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_4->setTitleName("Constellation_3_Cygnus4");
//    widgetConstellation_cMA_3_4->setThreshold(80);
//    widgetConstellation_cMA_3_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_4, 18, 0, 1, 1);

//    widgetConstellation_cMA_3_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_5->setTitleName("Constellation_3_Cygnus5");
//    widgetConstellation_cMA_3_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_3_5->setThreshold(80);
//    widgetConstellation_cMA_3_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_5, 19, 0, 1, 1);

//    widgetConstellation_cMA_3_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_6->setTitleName("Constellation_3_Cygnus6");
//    widgetConstellation_cMA_3_6->setThreshold(80);
//    widgetConstellation_cMA_3_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_6, 20, 0, 1, 1);

//    widgetConstellation_cMA_3_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_3_7->setTitleName("Constellation_3_Cygnus7");
//    widgetConstellation_cMA_3_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_3_7->setThreshold(80);
//    widgetConstellation_cMA_3_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_3_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_7, 21, 0, 1, 1);

    //Kairos
    widgetConstellation_cMA_4_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_1->setTitleName("Constellation_4_Kairos1");
//    widgetConstellation_cMA_4_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_4_1->setThreshold(80);
    widgetConstellation_cMA_4_1->setOSCCommand("/action/launchColumn 36");
    widgetConstellation_cMA_4_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_1, 22, 0, 1, 1);

//    widgetConstellation_cMA_4_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_4_2->setTitleName("Constellation_4_Kairos2");
//    widgetConstellation_cMA_4_2->setThreshold(80);
//    widgetConstellation_cMA_4_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_4_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_2, 23, 0, 1, 1);

//    widgetConstellation_cMA_4_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_4_3->setTitleName("Constellation_4_Kairos3");
//    widgetConstellation_cMA_4_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_4_3->setThreshold(80);
//    widgetConstellation_cMA_4_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_4_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_3, 24, 0, 1, 1);

//    widgetConstellation_cMA_4_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_4_4->setTitleName("Constellation_4_Kairos4");
//    widgetConstellation_cMA_4_4->setThreshold(80);
//    widgetConstellation_cMA_4_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_4_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_4, 25, 0, 1, 1);

//    widgetConstellation_cMA_4_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_4_5->setTitleName("Constellation_4_Kairos5");
//    widgetConstellation_cMA_4_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_4_5->setThreshold(80);
//    widgetConstellation_cMA_4_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_4_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_5, 26, 0, 1, 1);


    //Lacerta
    widgetConstellation_cMA_5_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_1->setTitleName("Constellation_5_Lacerta1");
    widgetConstellation_cMA_5_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_1->setThreshold(80);
    widgetConstellation_cMA_5_1->setOSCCommand("/action/launchColumn 37");
    widgetConstellation_cMA_5_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_1, 27, 0, 1, 1);

//    widgetConstellation_cMA_5_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_2->setTitleName("Constellation_5_Lacerta2");
//    widgetConstellation_cMA_5_2->setThreshold(80);
//    widgetConstellation_cMA_5_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_2, 28, 0, 1, 1);

//    widgetConstellation_cMA_5_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_3->setTitleName("Constellation_5_Lacerta3");
//    widgetConstellation_cMA_5_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_5_3->setThreshold(80);
//    widgetConstellation_cMA_5_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_3, 29, 0, 1, 1);

//    widgetConstellation_cMA_5_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_4->setTitleName("Constellation_5_Lacerta4");
//    widgetConstellation_cMA_5_4->setThreshold(80);
//    widgetConstellation_cMA_5_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_4, 30, 0, 1, 1);

//    widgetConstellation_cMA_5_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_5->setTitleName("Constellation_5_Lacerta5");
//    widgetConstellation_cMA_5_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_5_5->setThreshold(80);
//    widgetConstellation_cMA_5_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_5, 31, 0, 1, 1);

//    widgetConstellation_cMA_5_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_6->setTitleName("Constellation_5_Lacerta6");
//    widgetConstellation_cMA_5_6->setThreshold(80);
//    widgetConstellation_cMA_5_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_6, 32, 0, 1, 1);

//    widgetConstellation_cMA_5_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_7->setTitleName("Constellation_5_Lacerta7");
//    widgetConstellation_cMA_5_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_5_7->setThreshold(80);
//    widgetConstellation_cMA_5_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_7, 33, 0, 1, 1);

//    widgetConstellation_cMA_5_8 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_8->setTitleName("Constellation_5_Lacerta8");
//    widgetConstellation_cMA_5_8->setThreshold(80);
//    widgetConstellation_cMA_5_8->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_8->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_8, 34, 0, 1, 1);

//    widgetConstellation_cMA_5_9 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_5_9->setTitleName("Constellation_5_Lacerta9");
//    widgetConstellation_cMA_5_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_5_9->setThreshold(80);
//    widgetConstellation_cMA_5_9->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_5_9->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_9, 35, 0, 1, 1);

    //Lion
    widgetConstellation_cMA_6_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_1->setTitleName("Constellation_6_Lion1");
//    widgetConstellation_cMA_6_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_1->setThreshold(80);
    widgetConstellation_cMA_6_1->setOSCCommand("/action/launchColumn 38");
    widgetConstellation_cMA_6_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_1, 36, 0, 1, 1);

//    widgetConstellation_cMA_6_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_2->setTitleName("Constellation_6_Lion2");
//    widgetConstellation_cMA_6_2->setThreshold(80);
//    widgetConstellation_cMA_6_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_2, 37, 0, 1, 1);

//    widgetConstellation_cMA_6_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_3->setTitleName("Constellation_6_Lion3");
//    widgetConstellation_cMA_6_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_6_3->setThreshold(80);
//    widgetConstellation_cMA_6_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_3, 38, 0, 1, 1);

//    widgetConstellation_cMA_6_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_4->setTitleName("Constellation_6_Lion4");
//    widgetConstellation_cMA_6_4->setThreshold(80);
//    widgetConstellation_cMA_6_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_4, 39, 0, 1, 1);

//    widgetConstellation_cMA_6_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_5->setTitleName("Constellation_6_Lion5");
//    widgetConstellation_cMA_6_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_6_5->setThreshold(80);
//    widgetConstellation_cMA_6_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_5, 40, 0, 1, 1);

//    widgetConstellation_cMA_6_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_6->setTitleName("Constellation_6_Lion6");
//    widgetConstellation_cMA_6_6->setThreshold(80);
//    widgetConstellation_cMA_6_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_6, 41, 0, 1, 1);

//    widgetConstellation_cMA_6_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_7->setTitleName("Constellation_6_Lion7");
//    widgetConstellation_cMA_6_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_6_7->setThreshold(80);
//    widgetConstellation_cMA_6_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_7, 42, 0, 1, 1);

//    widgetConstellation_cMA_6_8 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_8->setTitleName("Constellation_6_Lion8");
//    widgetConstellation_cMA_6_8->setThreshold(80);
//    widgetConstellation_cMA_6_8->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_8->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_8, 43, 0, 1, 1);

//    widgetConstellation_cMA_6_9 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_9->setTitleName("Constellation_6_Lion9");
//    widgetConstellation_cMA_6_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_6_9->setThreshold(80);
//    widgetConstellation_cMA_6_9->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_9->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_9, 44, 0, 1, 1);

//    widgetConstellation_cMA_6_10 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_6_10->setTitleName("Constellation_6_Lion10");
//    widgetConstellation_cMA_6_10->setThreshold(80);
//    widgetConstellation_cMA_6_10->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_6_10->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_10, 45, 0, 1, 1);



    //Kronos
    widgetConstellation_cMA_7_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_1->setTitleName("Constellation_7_Kronos1");
    widgetConstellation_cMA_7_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_7_1->setThreshold(80);
    widgetConstellation_cMA_7_1->setOSCCommand("/action/launchColumn 39");
    widgetConstellation_cMA_7_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_1, 46, 0, 1, 1);

//    widgetConstellation_cMA_7_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_2->setTitleName("Constellation_7_Kronos2");
//    widgetConstellation_cMA_7_2->setThreshold(80);
//    widgetConstellation_cMA_7_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_2, 47, 0, 1, 1);

//    widgetConstellation_cMA_7_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_3->setTitleName("Constellation_7_Kronos3");
//    widgetConstellation_cMA_7_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_7_3->setThreshold(80);
//    widgetConstellation_cMA_7_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_3, 48, 0, 1, 1);

//    widgetConstellation_cMA_7_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_4->setTitleName("Constellation_7_Kronos4");
//    widgetConstellation_cMA_7_4->setThreshold(80);
//    widgetConstellation_cMA_7_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_4, 49, 0, 1, 1);

//    widgetConstellation_cMA_7_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_5->setTitleName("Constellation_7_Kronos5");
//    widgetConstellation_cMA_7_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_7_5->setThreshold(80);
//    widgetConstellation_cMA_7_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_5, 50, 0, 1, 1);

//    widgetConstellation_cMA_7_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_6->setTitleName("Constellation_7_Kronos6");
//    widgetConstellation_cMA_7_6->setThreshold(80);
//    widgetConstellation_cMA_7_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_6, 51, 0, 1, 1);

//    widgetConstellation_cMA_7_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_7->setTitleName("Constellation_7_Kronos7");
//    widgetConstellation_cMA_7_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_7_7->setThreshold(80);
//    widgetConstellation_cMA_7_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_7, 52, 0, 1, 1);

//    widgetConstellation_cMA_7_8 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_7_8->setTitleName("Constellation_7_Kronos8");
//    widgetConstellation_cMA_7_8->setThreshold(80);
//    widgetConstellation_cMA_7_8->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_7_8->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_8, 53, 0, 1, 1);


    //Virgo
    widgetConstellation_cMA_8_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_1->setTitleName("Constellation_9_Virgo1");
//    widgetConstellation_cMA_8_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_1->setThreshold(80);
    widgetConstellation_cMA_8_1->setOSCCommand("/action/launchColumn 40");
    widgetConstellation_cMA_8_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_1, 54, 0, 1, 1);

//    widgetConstellation_cMA_8_2 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_2->setTitleName("Constellation_7_Virgo2");
//    widgetConstellation_cMA_8_2->setThreshold(80);
//    widgetConstellation_cMA_8_2->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_2->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_2, 55, 0, 1, 1);

//    widgetConstellation_cMA_8_3 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_3->setTitleName("Constellation_7_Virgo3");
//    widgetConstellation_cMA_8_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_3->setThreshold(80);
//    widgetConstellation_cMA_8_3->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_3->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_3, 56, 0, 1, 1);

//    widgetConstellation_cMA_8_4 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_4->setTitleName("Constellation_7_Virgo4");
//    widgetConstellation_cMA_8_4->setThreshold(80);
//    widgetConstellation_cMA_8_4->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_4->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_4, 57, 0, 1, 1);

//    widgetConstellation_cMA_8_5 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_5->setTitleName("Constellation_7_Virgo5");
//    widgetConstellation_cMA_8_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_5->setThreshold(80);
//    widgetConstellation_cMA_8_5->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_5->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_5, 58, 0, 1, 1);

//    widgetConstellation_cMA_8_6 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_6->setTitleName("Constellation_7_Virgo6");
//    widgetConstellation_cMA_8_6->setThreshold(80);
//    widgetConstellation_cMA_8_6->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_6->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_6, 59, 0, 1, 1);

//    widgetConstellation_cMA_8_7 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_7->setTitleName("Constellation_7_Virgo7");
//    widgetConstellation_cMA_8_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_7->setThreshold(80);
//    widgetConstellation_cMA_8_7->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_7->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_7, 60, 0, 1, 1);

//    widgetConstellation_cMA_8_8 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_8->setTitleName("Constellation_7_Virgo8");
//    widgetConstellation_cMA_8_8->setThreshold(80);
//    widgetConstellation_cMA_8_8->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_8->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_8, 61, 0, 1, 1);

//    widgetConstellation_cMA_8_9 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_9->setTitleName("Constellation_7_Virgo9");
//    widgetConstellation_cMA_8_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_9->setThreshold(80);
//    widgetConstellation_cMA_8_9->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_9->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_9, 62, 0, 1, 1);

//    widgetConstellation_cMA_8_10 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_10->setTitleName("Constellation_7_Virgo10");
//    widgetConstellation_cMA_8_10->setThreshold(80);
//    widgetConstellation_cMA_8_10->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_10->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_10, 63, 0, 1, 1);

//    widgetConstellation_cMA_8_11 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_11->setTitleName("Constellation_7_Virgo11");
//    widgetConstellation_cMA_8_11->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_11->setThreshold(80);
//    widgetConstellation_cMA_8_11->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_11->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_11, 64, 0, 1, 1);

//    widgetConstellation_cMA_8_12 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_12->setTitleName("Constellation_7_Virgo12");
//    widgetConstellation_cMA_8_12->setThreshold(80);
//    widgetConstellation_cMA_8_12->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_12->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_12, 65, 0, 1, 1);

//    widgetConstellation_cMA_8_13 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_13->setTitleName("Constellation_7_Virgo13");
//    widgetConstellation_cMA_8_13->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetConstellation_cMA_8_13->setThreshold(80);
//    widgetConstellation_cMA_8_13->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_13->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_13, 66, 0, 1, 1);

//    widgetConstellation_cMA_8_14 = new MyWidgetCommonModelA(this);
//    widgetConstellation_cMA_8_14->setTitleName("Constellation_7_Virgo14");
//    widgetConstellation_cMA_8_14->setThreshold(80);
//    widgetConstellation_cMA_8_14->setOSCCommand("/action/launchColumn ");
//    widgetConstellation_cMA_8_14->setOSCSendIP(MyGloble::G_IP_MIL);
//    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_14, 67, 0, 1, 1);




}

void MyWidget_6_Constellation::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_1(int)),
            widgetConstellation_cMA_1_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_2(int)),
//            widgetConstellation_cMA_1_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_3(int)),
//            widgetConstellation_cMA_1_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_4(int)),
//            widgetConstellation_cMA_1_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_5(int)),
//            widgetConstellation_cMA_1_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_1_6(int)),
//            widgetConstellation_cMA_1_6, SLOT(_getJsonData_clickCount(int)));





    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_1(int)),
            widgetConstellation_cMA_2_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_2(int)),
//            widgetConstellation_cMA_2_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_3(int)),
//            widgetConstellation_cMA_2_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_4(int)),
//            widgetConstellation_cMA_2_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_5(int)),
//            widgetConstellation_cMA_2_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_6(int)),
//            widgetConstellation_cMA_2_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_7(int)),
//            widgetConstellation_cMA_2_7, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_8(int)),
//            widgetConstellation_cMA_2_8, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_2_9(int)),
//            widgetConstellation_cMA_2_9, SLOT(_getJsonData_clickCount(int)));




    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_1(int)),
            widgetConstellation_cMA_3_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_2(int)),
//            widgetConstellation_cMA_3_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_3(int)),
//            widgetConstellation_cMA_3_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_4(int)),
//            widgetConstellation_cMA_3_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_5(int)),
//            widgetConstellation_cMA_3_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_6(int)),
//            widgetConstellation_cMA_3_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_3_7(int)),
//            widgetConstellation_cMA_3_7, SLOT(_getJsonData_clickCount(int)));




    connect(this, SIGNAL(_sendJsonData_to_widget_6_4_1(int)),
            widgetConstellation_cMA_4_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_4_2(int)),
//            widgetConstellation_cMA_4_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_4_3(int)),
//            widgetConstellation_cMA_4_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_4_4(int)),
//            widgetConstellation_cMA_4_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_4_5(int)),
//            widgetConstellation_cMA_4_5, SLOT(_getJsonData_clickCount(int)));




    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_1(int)),
            widgetConstellation_cMA_5_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_2(int)),
//            widgetConstellation_cMA_5_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_3(int)),
//            widgetConstellation_cMA_5_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_4(int)),
//            widgetConstellation_cMA_5_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_5(int)),
//            widgetConstellation_cMA_5_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_6(int)),
//            widgetConstellation_cMA_5_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_7(int)),
//            widgetConstellation_cMA_5_7, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_8(int)),
//            widgetConstellation_cMA_5_8, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_5_9(int)),
//            widgetConstellation_cMA_5_9, SLOT(_getJsonData_clickCount(int)));




    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_1(int)),
            widgetConstellation_cMA_6_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_2(int)),
//            widgetConstellation_cMA_6_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_3(int)),
//            widgetConstellation_cMA_6_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_4(int)),
//            widgetConstellation_cMA_6_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_5(int)),
//            widgetConstellation_cMA_6_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_6(int)),
//            widgetConstellation_cMA_6_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_7(int)),
//            widgetConstellation_cMA_6_7, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_8(int)),
//            widgetConstellation_cMA_6_8, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_9(int)),
//            widgetConstellation_cMA_6_9, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_6_10(int)),
//            widgetConstellation_cMA_6_10, SLOT(_getJsonData_clickCount(int)));




    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_1(int)),
            widgetConstellation_cMA_7_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_2(int)),
//            widgetConstellation_cMA_7_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_3(int)),
//            widgetConstellation_cMA_7_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_4(int)),
//            widgetConstellation_cMA_7_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_5(int)),
//            widgetConstellation_cMA_7_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_6(int)),
//            widgetConstellation_cMA_7_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_7(int)),
//            widgetConstellation_cMA_7_7, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_7_8(int)),
//            widgetConstellation_cMA_7_8, SLOT(_getJsonData_clickCount(int)));





    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_1(int)),
            widgetConstellation_cMA_8_1, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_2(int)),
//            widgetConstellation_cMA_8_2, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_3(int)),
//            widgetConstellation_cMA_8_3, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_4(int)),
//            widgetConstellation_cMA_8_4, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_5(int)),
//            widgetConstellation_cMA_8_5, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_6(int)),
//            widgetConstellation_cMA_8_6, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_7(int)),
//            widgetConstellation_cMA_8_7, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_8(int)),
//            widgetConstellation_cMA_8_8, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_9(int)),
//            widgetConstellation_cMA_8_9, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_10(int)),
//            widgetConstellation_cMA_8_10, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_11(int)),
//            widgetConstellation_cMA_8_11, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_12(int)),
//            widgetConstellation_cMA_8_12, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_13(int)),
//            widgetConstellation_cMA_8_13, SLOT(_getJsonData_clickCount(int)));
//    connect(this, SIGNAL(_sendJsonData_to_widget_6_8_14(int)),
//            widgetConstellation_cMA_8_14, SLOT(_getJsonData_clickCount(int)));




    //PlayerCount
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_1_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_1_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_1_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_1_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_1_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_1_6, SLOT(_getJsonData_playerCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_2_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_7, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_8, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_2_9, SLOT(_getJsonData_playerCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_3_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_3_7, SLOT(_getJsonData_playerCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_4_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_4_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_4_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_4_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_4_5, SLOT(_getJsonData_playerCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_5_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_7, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_8, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_5_9, SLOT(_getJsonData_playerCount(int)));


    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_6_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_7, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_8, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_9, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_6_10, SLOT(_getJsonData_playerCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_7_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_7, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_7_8, SLOT(_getJsonData_playerCount(int)));






    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetConstellation_cMA_8_1, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_2, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_3, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_4, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_5, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_6, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_7, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_8, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_9, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_10, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_11, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_12, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_13, SLOT(_getJsonData_playerCount(int)));
//    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
//            widgetConstellation_cMA_8_14, SLOT(_getJsonData_playerCount(int)));

}




//void MyWidget_6_Constellation::_getJsonData_clickCount1(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_1_1(_i1);
//         emit this->_sendJsonData_to_widget_6_1_2(_i2);
//         emit this->_sendJsonData_to_widget_6_1_3(_i3);
//         emit this->_sendJsonData_to_widget_6_1_4(_i4);
//         emit this->_sendJsonData_to_widget_6_1_5(_i5);
//         emit this->_sendJsonData_to_widget_6_1_6(_i6);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount2(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_2_1(_i1);
//         emit this->_sendJsonData_to_widget_6_2_2(_i2);
//         emit this->_sendJsonData_to_widget_6_2_3(_i3);
//         emit this->_sendJsonData_to_widget_6_2_4(_i4);
//         emit this->_sendJsonData_to_widget_6_2_5(_i5);
//         emit this->_sendJsonData_to_widget_6_2_6(_i6);
//         emit this->_sendJsonData_to_widget_6_2_7(_i7);
//         emit this->_sendJsonData_to_widget_6_2_8(_i8);
//         emit this->_sendJsonData_to_widget_6_2_9(_i9);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount3(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_3_1(_i1);
//         emit this->_sendJsonData_to_widget_6_3_2(_i2);
//         emit this->_sendJsonData_to_widget_6_3_3(_i3);
//         emit this->_sendJsonData_to_widget_6_3_4(_i4);
//         emit this->_sendJsonData_to_widget_6_3_5(_i5);
//         emit this->_sendJsonData_to_widget_6_3_6(_i6);
//         emit this->_sendJsonData_to_widget_6_3_7(_i7);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount4(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_4_1(_i1);
//         emit this->_sendJsonData_to_widget_6_4_2(_i2);
//         emit this->_sendJsonData_to_widget_6_4_3(_i3);
//         emit this->_sendJsonData_to_widget_6_4_4(_i4);
//         emit this->_sendJsonData_to_widget_6_4_5(_i5);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount5(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_5_1(_i1);
//         emit this->_sendJsonData_to_widget_6_5_2(_i2);
//         emit this->_sendJsonData_to_widget_6_5_3(_i3);
//         emit this->_sendJsonData_to_widget_6_5_4(_i4);
//         emit this->_sendJsonData_to_widget_6_5_5(_i5);
//         emit this->_sendJsonData_to_widget_6_5_6(_i6);
//         emit this->_sendJsonData_to_widget_6_5_7(_i7);
//         emit this->_sendJsonData_to_widget_6_5_8(_i8);
//         emit this->_sendJsonData_to_widget_6_5_9(_i9);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount_6(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10                                                     )
//     {
//         emit this->_sendJsonData_to_widget_6_6_1(_i1);
//         emit this->_sendJsonData_to_widget_6_6_2(_i2);
//         emit this->_sendJsonData_to_widget_6_6_3(_i3);
//         emit this->_sendJsonData_to_widget_6_6_4(_i4);
//         emit this->_sendJsonData_to_widget_6_6_5(_i5);
//         emit this->_sendJsonData_to_widget_6_6_6(_i6);
//         emit this->_sendJsonData_to_widget_6_6_7(_i7);
//         emit this->_sendJsonData_to_widget_6_6_8(_i8);
//         emit this->_sendJsonData_to_widget_6_6_9(_i9);
//         emit this->_sendJsonData_to_widget_6_6_10(_i10);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount7(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_7_1(_i1);
//         emit this->_sendJsonData_to_widget_6_7_2(_i2);
//         emit this->_sendJsonData_to_widget_6_7_3(_i3);
//         emit this->_sendJsonData_to_widget_6_7_4(_i4);
//         emit this->_sendJsonData_to_widget_6_7_5(_i5);
//         emit this->_sendJsonData_to_widget_6_7_6(_i6);
//         emit this->_sendJsonData_to_widget_6_7_7(_i7);
//         emit this->_sendJsonData_to_widget_6_7_8(_i8);

//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount8(int _i1,
//                                                        int _i2,
//                                                        int _i3,
//                                                        int _i4,
//                                                        int _i5,
//                                                        int _i6,
//                                                        int _i7,
//                                                        int _i8,
//                                                        int _i9,
//                                                        int _i10,
//                                                        int _i11,
//                                                        int _i12,
//                                                        int _i13,
//                                                        int _i14                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_8_1(_i1);
//         emit this->_sendJsonData_to_widget_6_8_2(_i2);
//         emit this->_sendJsonData_to_widget_6_8_3(_i3);
//         emit this->_sendJsonData_to_widget_6_8_4(_i4);
//         emit this->_sendJsonData_to_widget_6_8_5(_i5);
//         emit this->_sendJsonData_to_widget_6_8_6(_i6);
//         emit this->_sendJsonData_to_widget_6_8_7(_i7);
//         emit this->_sendJsonData_to_widget_6_8_8(_i8);
//         emit this->_sendJsonData_to_widget_6_8_9(_i9);
//         emit this->_sendJsonData_to_widget_6_8_10(_i10);
//         emit this->_sendJsonData_to_widget_6_8_11(_i11);
//         emit this->_sendJsonData_to_widget_6_8_12(_i12);
//         emit this->_sendJsonData_to_widget_6_8_13(_i13);
//         emit this->_sendJsonData_to_widget_6_8_14(_i14);
//     }

//void MyWidget_6_Constellation::_getJsonData_clickCount8(QStringList _sl)                                                        )
//     {
//         emit this->_sendJsonData_to_widget_6_8_1(_sl.at(1).toInt());
//         emit this->_sendJsonData_to_widget_6_8_2(_sl.at(2).toInt());
//         emit this->_sendJsonData_to_widget_6_8_3(_sl.at(3).toInt());
//         emit this->_sendJsonData_to_widget_6_8_4(_sl.at(4).toInt());
//         emit this->_sendJsonData_to_widget_6_8_5(_sl.at(5).toInt());
//         emit this->_sendJsonData_to_widget_6_8_6(_sl.at(6).toInt());
//         emit this->_sendJsonData_to_widget_6_8_7(_sl.at(7).toInt());
//         emit this->_sendJsonData_to_widget_6_8_8(_sl.at(8).toInt());
//         emit this->_sendJsonData_to_widget_6_8_9(_sl.at(9).toInt());
//         emit this->_sendJsonData_to_widget_6_8_10(_sl.at(10).toInt());
//         emit this->_sendJsonData_to_widget_6_8_11(_sl.at(11).toInt());
//         emit this->_sendJsonData_to_widget_6_8_12(_sl.at(12).toInt());
//         emit this->_sendJsonData_to_widget_6_8_13(_sl.at(13).toInt());
//         emit this->_sendJsonData_to_widget_6_8_14(_sl.at(14).toInt());
//            _sl
//     }

void MyWidget_6_Constellation::_getJsonData_clickCount1(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_1_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount2(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_2_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount3(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_3_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount4(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_4_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount5(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_5_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount6(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_6_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount7(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_7_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_clickCount8(QStringList _sl)
{
   qint64 _clickAmount = 0;
   for(int i=0; i < _sl.size(); i++)
   {
       _clickAmount = _clickAmount + _sl.at(i).toInt();
   }
   emit this->_sendJsonData_to_widget_6_8_1((int)(_clickAmount));
}

void MyWidget_6_Constellation::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);
}
