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
//    QString VVVV_IP_1 = "169.254.65.77";

//    QString VVVV_IP_2 = "169.254.159.128";

//    QString VVVV_IP_2 = "169.254.255.255";

    widgetChemin_mainLayout->setContentsMargins(0,0,0,0);
    widgetChemin_mainLayout->setSpacing(3);


    widgetChemin_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_1->setTitleName("Chemin dans les astéroïdes-1");
    widgetChemin_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_1->setThreshold(80);
    widgetChemin_commonModelA_1->setOSCCommand("/vvvv/Chemin/bloc_1 0");
    widgetChemin_commonModelA_1->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_1->setOSCSendPort(4521);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_1, 1, 0, 1, 1);

    widgetChemin_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_2->setTitleName("Chemin dans les astéroïdes-2");
    widgetChemin_commonModelA_2->setThreshold(80);
    widgetChemin_commonModelA_2->setOSCCommand("/vvvv/Chemin/bloc_2 0");
    widgetChemin_commonModelA_2->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_2->setOSCSendPort(4522);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_2, 2, 0, 1, 1);

    widgetChemin_commonModelA_3 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_3->setTitleName("Chemin dans les astéroïdes-3");
    widgetChemin_commonModelA_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_3->setThreshold(80);
    widgetChemin_commonModelA_3->setOSCCommand("/vvvv/Chemin/bloc_3 0");
    widgetChemin_commonModelA_3->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_3->setOSCSendPort(4523);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_3, 3, 0, 1, 1);

    widgetChemin_commonModelA_4 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_4->setTitleName("Chemin dans les astéroïdes-4");
    widgetChemin_commonModelA_4->setThreshold(80);
    widgetChemin_commonModelA_4->setOSCCommand("/vvvv/Chemin/bloc_4 0");
    widgetChemin_commonModelA_4->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_4->setOSCSendPort(4524);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_4, 4, 0, 1, 1);

    widgetChemin_commonModelA_5 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_5->setTitleName("Chemin dans les astéroïdes-5");
    widgetChemin_commonModelA_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_5->setThreshold(80);
    widgetChemin_commonModelA_5->setOSCCommand("/vvvv/Chemin/bloc_5 0");
    widgetChemin_commonModelA_5->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_5->setOSCSendPort(4525);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_5, 5, 0, 1, 1);

    widgetChemin_commonModelA_6 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_6->setTitleName("Chemin dans les astéroïdes-6");
    widgetChemin_commonModelA_6->setThreshold(80);
    widgetChemin_commonModelA_6->setOSCCommand("/vvvv/Chemin/bloc_6 0");
    widgetChemin_commonModelA_6->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_6->setOSCSendPort(4526);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_6, 6, 0, 1, 1);

    widgetChemin_commonModelA_7 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_7->setTitleName("Chemin dans les astéroïdes-7");
    widgetChemin_commonModelA_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_7->setThreshold(80);
    widgetChemin_commonModelA_7->setOSCCommand("/vvvv/Chemin/bloc_7 0");
    widgetChemin_commonModelA_7->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_7->setOSCSendPort(4527);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_7, 7, 0, 1, 1);

    widgetChemin_commonModelA_8 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_8->setTitleName("Chemin dans les astéroïdes-8");
    widgetChemin_commonModelA_8->setThreshold(80);
    widgetChemin_commonModelA_8->setOSCCommand("/vvvv/Chemin/bloc_8 0");
    widgetChemin_commonModelA_8->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_8->setOSCSendPort(4528);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_8, 8, 0, 1, 1);

    widgetChemin_commonModelA_9 = new MyWidgetCommonModelA(this);
    widgetChemin_commonModelA_9->setTitleName("Chemin dans les astéroïdes-9");
    widgetChemin_commonModelA_9->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetChemin_commonModelA_9->setThreshold(80);
    widgetChemin_commonModelA_9->setOSCCommand("/vvvv/Chemin/bloc_9 0");
    widgetChemin_commonModelA_9->setOSCSendIP(MyGloble::G_IP_VV1);
    widgetChemin_commonModelA_9->setOSCSendPort(4529);
    widgetChemin_mainLayout->addWidget(widgetChemin_commonModelA_9, 9, 0, 1, 1);




}

void MyWidget_1_CheminDansLesAsteroides::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_1(int)),
            widgetChemin_commonModelA_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_2(int)),
            widgetChemin_commonModelA_2, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_3(int)),
            widgetChemin_commonModelA_3, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_4(int)),
            widgetChemin_commonModelA_4, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_5(int)),
            widgetChemin_commonModelA_5, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_6(int)),
            widgetChemin_commonModelA_6, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_7(int)),
            widgetChemin_commonModelA_7, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_8(int)),
            widgetChemin_commonModelA_8, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_1_asto_9(int)),
            widgetChemin_commonModelA_9, SLOT(_getJsonData_clickCount(int)));


    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_2, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_3, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_4, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_5, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_6, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_7, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_8, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetChemin_commonModelA_9, SLOT(_getJsonData_playerCount(int)));


}

void MyWidget_1_CheminDansLesAsteroides::_getJsonData_clickCount(int _i1,
                                                                 int _i2,
                                                                 int _i3,
                                                                 int _i4,
                                                                 int _i5,
                                                                 int _i6,
                                                                 int _i7,
                                                                 int _i8,
                                                                 int _i9)
{
    emit this->_sendJsonData_to_widget_1_asto_1(_i1);
    emit this->_sendJsonData_to_widget_1_asto_2(_i2);
    emit this->_sendJsonData_to_widget_1_asto_3(_i3);
    emit this->_sendJsonData_to_widget_1_asto_4(_i4);
    emit this->_sendJsonData_to_widget_1_asto_5(_i5);
    emit this->_sendJsonData_to_widget_1_asto_6(_i6);
    emit this->_sendJsonData_to_widget_1_asto_7(_i7);
    emit this->_sendJsonData_to_widget_1_asto_8(_i8);
    emit this->_sendJsonData_to_widget_1_asto_9(_i9);

}



void MyWidget_1_CheminDansLesAsteroides::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);
}
