#include "MyWidget_2_Nebuleuse.h"

MyWidget_2_Nebuleuse::MyWidget_2_Nebuleuse(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_2_Nebuleuse::initialVariable()
{

}

void MyWidget_2_Nebuleuse::initialUI()
{
    QGridLayout *widgetNebuleuse_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetNebuleuse_mainLayout);

    QString VVVV_IP_2 = "169.254.159.128";
    QString millumin_IP = "169.254.160.141";
//    QString VVVV_IP_2 = "169.254.255.255";


    widgetNebuleuse_mainLayout->setContentsMargins(0,0,0,0);
    widgetNebuleuse_mainLayout->setSpacing(3);

    widgetNebuleuse_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_1->setTitleName("Nebuleuse Bloc-Blue-1");
    widgetNebuleuse_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetNebuleuse_commonModelA_1->setThreshold(80);
    widgetNebuleuse_commonModelA_1->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_1->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_1, 0, 0, 1, 1);

    widgetNebuleuse_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_2->setTitleName("Nebuleuse Bloc-Violet-2");
    widgetNebuleuse_commonModelA_2->setThreshold(80);
    widgetNebuleuse_commonModelA_2->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_2->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_2, 1, 0, 1, 1);

    widgetNebuleuse_commonModelA_3 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_3->setTitleName("Nebuleuse Bloc-Orange-3");
    widgetNebuleuse_commonModelA_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetNebuleuse_commonModelA_3->setThreshold(80);
    widgetNebuleuse_commonModelA_3->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_3->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_3, 2, 0, 1, 1);

    widgetNebuleuse_commonModelA_4 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_4->setTitleName("Nebuleuse Bloc-Rouge-4");
    widgetNebuleuse_commonModelA_4->setThreshold(80);
    widgetNebuleuse_commonModelA_4->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_4->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_4, 3, 0, 1, 1);

    widgetNebuleuse_commonModelA_5 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_5->setTitleName("Nebuleuse Bloc-Cyan-5");
    widgetNebuleuse_commonModelA_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetNebuleuse_commonModelA_5->setThreshold(80);
    widgetNebuleuse_commonModelA_5->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_5->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_5, 4, 0, 1, 1);

    widgetNebuleuse_commonModelA_6 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_6->setTitleName("Nebuleuse Bloc-Mauve-6");
    widgetNebuleuse_commonModelA_6->setThreshold(80);
    widgetNebuleuse_commonModelA_6->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_6->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_6, 5, 0, 1, 1);

    widgetNebuleuse_commonModelA_7 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_7->setTitleName("Nebuleuse Bloc-Vert-7");
    widgetNebuleuse_commonModelA_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetNebuleuse_commonModelA_7->setThreshold(80);
    widgetNebuleuse_commonModelA_7->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_7->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_7, 6, 0, 1, 1);

    widgetNebuleuse_commonModelA_8 = new MyWidgetCommonModelA(this);
    widgetNebuleuse_commonModelA_8->setTitleName("Nebuleuse Bloc-Jaune-8");
    widgetNebuleuse_commonModelA_8->setThreshold(80);
    widgetNebuleuse_commonModelA_8->setOSCCommand("/millumin/shader/someCommand");
    widgetNebuleuse_commonModelA_8->setOSCSendIP(millumin_IP);
    widgetNebuleuse_mainLayout->addWidget(widgetNebuleuse_commonModelA_8, 7, 0, 1, 1);




}

void MyWidget_2_Nebuleuse::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_1(int)),
            widgetNebuleuse_commonModelA_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_2(int)),
            widgetNebuleuse_commonModelA_2, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_3(int)),
            widgetNebuleuse_commonModelA_3, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_4(int)),
            widgetNebuleuse_commonModelA_4, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_5(int)),
            widgetNebuleuse_commonModelA_5, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_6(int)),
            widgetNebuleuse_commonModelA_6, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_7(int)),
            widgetNebuleuse_commonModelA_7, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_2_cube_8(int)),
            widgetNebuleuse_commonModelA_8, SLOT(_getJsonData_clickCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_2, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_3, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_4, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_5, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_6, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_7, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetNebuleuse_commonModelA_8, SLOT(_getJsonData_playerCount(int)));


}

void MyWidget_2_Nebuleuse::_getJsonData_clickCount(int _i1,
                                                   int _i2,
                                                   int _i3,
                                                   int _i4,
                                                   int _i5,
                                                   int _i6,
                                                   int _i7,
                                                   int _i8)
{
    emit this->_sendJsonData_to_widget_2_cube_1(_i1);
    emit this->_sendJsonData_to_widget_2_cube_2(_i2);
    emit this->_sendJsonData_to_widget_2_cube_3(_i3);
    emit this->_sendJsonData_to_widget_2_cube_4(_i4);
    emit this->_sendJsonData_to_widget_2_cube_5(_i5);
    emit this->_sendJsonData_to_widget_2_cube_6(_i6);
    emit this->_sendJsonData_to_widget_2_cube_7(_i7);
    emit this->_sendJsonData_to_widget_2_cube_8(_i8);
}

void MyWidget_2_Nebuleuse::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);
}
