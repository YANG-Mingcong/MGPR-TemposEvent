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
    widgetConstellation_cMA_1_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_1, 0, 0, 1, 1);

    widgetConstellation_cMA_1_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_2->setTitleName("Constellation_1_Cancer2");
    widgetConstellation_cMA_1_2->setThreshold(80);
    widgetConstellation_cMA_1_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_2, 1, 0, 1, 1);

    widgetConstellation_cMA_1_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_3->setTitleName("Constellation_1_Cancer3");
    widgetConstellation_cMA_1_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_1_3->setThreshold(80);
    widgetConstellation_cMA_1_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_3, 2, 0, 1, 1);

    widgetConstellation_cMA_1_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_4->setTitleName("Constellation_1_Cancer4");
    widgetConstellation_cMA_1_4->setThreshold(80);
    widgetConstellation_cMA_1_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_4, 3, 0, 1, 1);

    widgetConstellation_cMA_1_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_5->setTitleName("Constellation_1_Cancer5");
    widgetConstellation_cMA_1_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_1_5->setThreshold(80);
    widgetConstellation_cMA_1_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_5, 4, 0, 1, 1);

    widgetConstellation_cMA_1_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_1_6->setTitleName("Constellation_1_Cancer6");
    widgetConstellation_cMA_1_6->setThreshold(80);
    widgetConstellation_cMA_1_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_1_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_1_6, 5, 0, 1, 1);

    //Cepheus
    widgetConstellation_cMA_2_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_2_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_1->setThreshold(80);
    widgetConstellation_cMA_2_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_1, 6, 0, 1, 1);

    widgetConstellation_cMA_2_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_2_2->setThreshold(80);
    widgetConstellation_cMA_2_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_2, 7, 0, 1, 1);

    widgetConstellation_cMA_2_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_2_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_3->setThreshold(80);
    widgetConstellation_cMA_2_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_3, 8, 0, 1, 1);

    widgetConstellation_cMA_2_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_2_4->setThreshold(80);
    widgetConstellation_cMA_2_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_4, 9, 0, 1, 1);

    widgetConstellation_cMA_2_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_2_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_5->setThreshold(80);
    widgetConstellation_cMA_2_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_5, 10, 0, 1, 1);

    widgetConstellation_cMA_2_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_2_6->setThreshold(80);
    widgetConstellation_cMA_2_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_6, 11, 0, 1, 1);

    widgetConstellation_cMA_2_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_2_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_7->setThreshold(80);
    widgetConstellation_cMA_2_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_7, 12, 0, 1, 1);

    widgetConstellation_cMA_2_8 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetConstellation_cMA_2_8->setThreshold(80);
    widgetConstellation_cMA_2_8->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_8->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_8, 13, 0, 1, 1);

    widgetConstellation_cMA_2_9 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_2_9->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_2_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_2_9->setThreshold(80);
    widgetConstellation_cMA_2_9->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_2_9->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_2_9, 14, 0, 1, 1);

    //Cygnus
    widgetConstellation_cMA_3_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_3_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_3_1->setThreshold(80);
    widgetConstellation_cMA_3_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_1, 15, 0, 1, 1);

    widgetConstellation_cMA_3_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_3_2->setThreshold(80);
    widgetConstellation_cMA_3_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_2, 16, 0, 1, 1);

    widgetConstellation_cMA_3_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_3_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_3_3->setThreshold(80);
    widgetConstellation_cMA_3_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_3, 17, 0, 1, 1);

    widgetConstellation_cMA_3_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_3_4->setThreshold(80);
    widgetConstellation_cMA_3_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_4, 18, 0, 1, 1);

    widgetConstellation_cMA_3_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_3_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_3_5->setThreshold(80);
    widgetConstellation_cMA_3_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_5, 19, 0, 1, 1);

    widgetConstellation_cMA_3_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_3_6->setThreshold(80);
    widgetConstellation_cMA_3_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_6, 20, 0, 1, 1);

    widgetConstellation_cMA_3_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_3_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_3_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_3_7->setThreshold(80);
    widgetConstellation_cMA_3_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_3_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_3_7, 21, 0, 1, 1);

    //Kairos
    widgetConstellation_cMA_4_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_4_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_4_1->setThreshold(80);
    widgetConstellation_cMA_4_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_4_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_1, 22, 0, 1, 1);

    widgetConstellation_cMA_4_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_4_2->setThreshold(80);
    widgetConstellation_cMA_4_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_4_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_2, 23, 0, 1, 1);

    widgetConstellation_cMA_4_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_4_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_4_3->setThreshold(80);
    widgetConstellation_cMA_4_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_4_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_3, 24, 0, 1, 1);

    widgetConstellation_cMA_4_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_4_4->setThreshold(80);
    widgetConstellation_cMA_4_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_4_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_4, 25, 0, 1, 1);

    widgetConstellation_cMA_4_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_4_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_4_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_4_5->setThreshold(80);
    widgetConstellation_cMA_4_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_4_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_4_5, 26, 0, 1, 1);


    //Lacerta
    widgetConstellation_cMA_5_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_5_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_1->setThreshold(80);
    widgetConstellation_cMA_5_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_1, 27, 0, 1, 1);

    widgetConstellation_cMA_5_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_5_2->setThreshold(80);
    widgetConstellation_cMA_5_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_2, 28, 0, 1, 1);

    widgetConstellation_cMA_5_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_5_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_3->setThreshold(80);
    widgetConstellation_cMA_5_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_3, 29, 0, 1, 1);

    widgetConstellation_cMA_5_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_5_4->setThreshold(80);
    widgetConstellation_cMA_5_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_4, 30, 0, 1, 1);

    widgetConstellation_cMA_5_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_5_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_5->setThreshold(80);
    widgetConstellation_cMA_5_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_5, 31, 0, 1, 1);

    widgetConstellation_cMA_5_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_5_6->setThreshold(80);
    widgetConstellation_cMA_5_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_6, 32, 0, 1, 1);

    widgetConstellation_cMA_5_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_5_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_7->setThreshold(80);
    widgetConstellation_cMA_5_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_7, 33, 0, 1, 1);

    widgetConstellation_cMA_5_8 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetConstellation_cMA_5_8->setThreshold(80);
    widgetConstellation_cMA_5_8->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_8->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_8, 34, 0, 1, 1);

    widgetConstellation_cMA_5_9 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_5_9->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_5_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_5_9->setThreshold(80);
    widgetConstellation_cMA_5_9->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_5_9->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_5_9, 35, 0, 1, 1);

    //Lion
    widgetConstellation_cMA_6_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_6_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_1->setThreshold(80);
    widgetConstellation_cMA_6_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_1, 36, 0, 1, 1);

    widgetConstellation_cMA_6_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_6_2->setThreshold(80);
    widgetConstellation_cMA_6_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_2, 37, 0, 1, 1);

    widgetConstellation_cMA_6_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_6_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_3->setThreshold(80);
    widgetConstellation_cMA_6_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_3, 38, 0, 1, 1);

    widgetConstellation_cMA_6_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_6_4->setThreshold(80);
    widgetConstellation_cMA_6_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_4, 39, 0, 1, 1);

    widgetConstellation_cMA_6_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_6_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_5->setThreshold(80);
    widgetConstellation_cMA_6_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_5, 40, 0, 1, 1);

    widgetConstellation_cMA_6_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_6_6->setThreshold(80);
    widgetConstellation_cMA_6_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_6, 41, 0, 1, 1);

    widgetConstellation_cMA_6_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_6_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_7->setThreshold(80);
    widgetConstellation_cMA_6_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_7, 42, 0, 1, 1);

    widgetConstellation_cMA_6_8 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetConstellation_cMA_6_8->setThreshold(80);
    widgetConstellation_cMA_6_8->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_8->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_8, 43, 0, 1, 1);

    widgetConstellation_cMA_6_9 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_9->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_6_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_6_9->setThreshold(80);
    widgetConstellation_cMA_6_9->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_9->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_9, 44, 0, 1, 1);

    widgetConstellation_cMA_6_10 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_6_10->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_6_10->setThreshold(80);
    widgetConstellation_cMA_6_10->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_6_10->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_6_10, 45, 0, 1, 1);



    //Kronos
    widgetConstellation_cMA_7_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_7_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_7_1->setThreshold(80);
    widgetConstellation_cMA_7_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_1, 46, 0, 1, 1);

    widgetConstellation_cMA_7_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_7_2->setThreshold(80);
    widgetConstellation_cMA_7_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_2, 47, 0, 1, 1);

    widgetConstellation_cMA_7_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_7_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_7_3->setThreshold(80);
    widgetConstellation_cMA_7_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_3, 48, 0, 1, 1);

    widgetConstellation_cMA_7_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_7_4->setThreshold(80);
    widgetConstellation_cMA_7_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_4, 49, 0, 1, 1);

    widgetConstellation_cMA_7_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_7_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_7_5->setThreshold(80);
    widgetConstellation_cMA_7_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_5, 50, 0, 1, 1);

    widgetConstellation_cMA_7_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_7_6->setThreshold(80);
    widgetConstellation_cMA_7_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_6, 51, 0, 1, 1);

    widgetConstellation_cMA_7_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_7_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_7_7->setThreshold(80);
    widgetConstellation_cMA_7_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_7, 52, 0, 1, 1);

    widgetConstellation_cMA_7_8 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_7_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetConstellation_cMA_7_8->setThreshold(80);
    widgetConstellation_cMA_7_8->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_7_8->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_7_8, 53, 0, 1, 1);


    //Virgo
    widgetConstellation_cMA_8_1 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_8_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_1->setThreshold(80);
    widgetConstellation_cMA_8_1->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_1, 54, 0, 1, 1);

    widgetConstellation_cMA_8_2 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_8_2->setThreshold(80);
    widgetConstellation_cMA_8_2->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_2, 55, 0, 1, 1);

    widgetConstellation_cMA_8_3 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_8_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_3->setThreshold(80);
    widgetConstellation_cMA_8_3->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_3, 56, 0, 1, 1);

    widgetConstellation_cMA_8_4 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_8_4->setThreshold(80);
    widgetConstellation_cMA_8_4->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_4, 57, 0, 1, 1);

    widgetConstellation_cMA_8_5 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_8_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_5->setThreshold(80);
    widgetConstellation_cMA_8_5->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_5, 58, 0, 1, 1);

    widgetConstellation_cMA_8_6 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_8_6->setThreshold(80);
    widgetConstellation_cMA_8_6->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_6->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_6, 59, 0, 1, 1);

    widgetConstellation_cMA_8_7 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetConstellation_cMA_8_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_7->setThreshold(80);
    widgetConstellation_cMA_8_7->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_7->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_7, 60, 0, 1, 1);

    widgetConstellation_cMA_8_8 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetConstellation_cMA_8_8->setThreshold(80);
    widgetConstellation_cMA_8_8->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_8->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_8, 61, 0, 1, 1);

    widgetConstellation_cMA_8_9 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_9->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetConstellation_cMA_8_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_9->setThreshold(80);
    widgetConstellation_cMA_8_9->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_9->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_9, 62, 0, 1, 1);

    widgetConstellation_cMA_8_10 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_10->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetConstellation_cMA_8_10->setThreshold(80);
    widgetConstellation_cMA_8_10->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_10->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_10, 63, 0, 1, 1);

    widgetConstellation_cMA_8_11 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_11->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetConstellation_cMA_8_11->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_11->setThreshold(80);
    widgetConstellation_cMA_8_11->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_11->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_11, 64, 0, 1, 1);

    widgetConstellation_cMA_8_12 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_12->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetConstellation_cMA_8_12->setThreshold(80);
    widgetConstellation_cMA_8_12->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_12->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_12, 65, 0, 1, 1);

    widgetConstellation_cMA_8_13 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_13->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetConstellation_cMA_8_13->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetConstellation_cMA_8_13->setThreshold(80);
    widgetConstellation_cMA_8_13->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_13->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_13, 66, 0, 1, 1);

    widgetConstellation_cMA_8_14 = new MyWidgetCommonModelA(this);
    widgetConstellation_cMA_8_14->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetConstellation_cMA_8_14->setThreshold(80);
    widgetConstellation_cMA_8_14->setOSCCommand("/millumin/shader/someCommand");
    widgetConstellation_cMA_8_14->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetConstellation_mainLayout->addWidget(widgetConstellation_cMA_8_14, 67, 0, 1, 1);



}

void MyWidget_6_Constellation::initialConnect()
{

}
