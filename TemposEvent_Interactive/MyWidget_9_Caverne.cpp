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
    QGridLayout *widgetCaverne_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetCaverne_mainLayout);

    QString VVVV_IP_2 = "169.254.159.128";
//    QString millumin_IP = "169.254.160.141";
//    QString VVVV_IP_2 = "169.254.255.255";
    QString millumin_IP = "255.255.255.255";


    widgetCaverne_mainLayout->setContentsMargins(0,0,0,0);
    widgetCaverne_mainLayout->setSpacing(3);

    widgetCaverne_commonModelB_1 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_1->setTitleName("Caverne Bloc-PierreRouge-1");
    widgetCaverne_commonModelB_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetCaverne_commonModelB_1->setThreshold(80);
    widgetCaverne_commonModelB_1->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_1->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetCaverne_mainLayout->addWidget(widgetCaverne_commonModelB_1, 0, 0, 1, 1);

    widgetCaverne_commonModelB_2 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_2->setTitleName("Caverne Bloc-PierreVerte-2");
//    widgetCaverne_commonModelB_2->setThreshold(80);
    widgetCaverne_commonModelB_2->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_2->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetCaverne_mainLayout->addWidget(widgetCaverne_commonModelB_2, 1, 0, 1, 1);

    widgetCaverne_commonModelB_3 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_3->setTitleName("Caverne Bloc-PierreJaune-3");
    widgetCaverne_commonModelB_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetCaverne_commonModelB_3->setThreshold(80);
    widgetCaverne_commonModelB_3->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_3->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetCaverne_mainLayout->addWidget(widgetCaverne_commonModelB_3, 2, 0, 1, 1);

    widgetCaverne_commonModelB_4 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_4->setTitleName("Caverne Bloc-PierreOrange-4");
//    widgetCaverne_commonModelB_4->setThreshold(80);
    widgetCaverne_commonModelB_4->setOSCCommand("/millumin/pierre[y]/lumino ");
    widgetCaverne_commonModelB_4->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetCaverne_mainLayout->addWidget(widgetCaverne_commonModelB_4, 3, 0, 1, 1);

    widgetCaverne_commonModelB_5 = new MyWidgetCommonModelB(this);
    widgetCaverne_commonModelB_5->setTitleName("Caverne Bloc-PierreViolet-5");
    widgetCaverne_commonModelB_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    widgetCaverne_commonModelB_5->setThreshold(80);
    widgetCaverne_commonModelB_5->setOSCCommand("/test/Mil/a 1\n/TemposWait/ms 3000\n/test/Mil/a 2");
    widgetCaverne_commonModelB_5->setOSCSendIP(MyGloble::G_IP_MIL);
    widgetCaverne_mainLayout->addWidget(widgetCaverne_commonModelB_5, 4, 0, 1, 1);

}

void MyWidget_9_Caverne::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_9_cube_1(int)),
            widgetCaverne_commonModelB_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_9_cube_2(int)),
            widgetCaverne_commonModelB_2, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_9_cube_3(int)),
            widgetCaverne_commonModelB_3, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_9_cube_4(int)),
            widgetCaverne_commonModelB_4, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_9_cube_5(int)),
            widgetCaverne_commonModelB_5, SLOT(_getJsonData_clickCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetCaverne_commonModelB_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetCaverne_commonModelB_2, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetCaverne_commonModelB_3, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetCaverne_commonModelB_4, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetCaverne_commonModelB_5, SLOT(_getJsonData_playerCount(int)));


}

void MyWidget_9_Caverne::_getJsonData_clickCount(int _i1,
                                                 int _i2,
                                                 int _i3,
                                                 int _i4,
                                                 int _i5)
{
  emit this->_sendJsonData_to_widget_9_cube_1(_i1);
  emit this->_sendJsonData_to_widget_9_cube_2(_i2);
  emit this->_sendJsonData_to_widget_9_cube_3(_i3);
  emit this->_sendJsonData_to_widget_9_cube_4(_i4);
    emit this->_sendJsonData_to_widget_9_cube_5(_i5);
}

void MyWidget_9_Caverne::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);

}
