#include "MyWidget_10_Puzzle.h"

MyWidget_10_Puzzle::MyWidget_10_Puzzle(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_10_Puzzle::initialVariable()
{

}

void MyWidget_10_Puzzle::initialUI()
{
    QGridLayout *widgetPuzzle_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetPuzzle_mainLayout);

    QString VVVV_IP_2 = "169.254.159.128";
    QString millumin_IP = "169.254.160.141";
//    QString VVVV_IP_2 = "169.254.255.255";


    widgetPuzzle_mainLayout->setContentsMargins(0,0,0,0);
    widgetPuzzle_mainLayout->setSpacing(3);

    widgetPuzzle_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_1->setTitleName("Puzzle Bloc-1");
    widgetPuzzle_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetPuzzle_commonModelA_1->setThreshold(80);
    widgetPuzzle_commonModelA_1->setOSCCommand("/layer:PIECE1/startMedia [65]");
    widgetPuzzle_commonModelA_1->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_1, 0, 0, 1, 1);

    widgetPuzzle_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_2->setTitleName("Puzzle Bloc-2");
    widgetPuzzle_commonModelA_2->setThreshold(80);
    widgetPuzzle_commonModelA_2->setOSCCommand("/layer:PIECE2/startMedia [65]");
    widgetPuzzle_commonModelA_2->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_2, 1, 0, 1, 1);

    widgetPuzzle_commonModelA_3 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_3->setTitleName("Puzzle Bloc-3");
    widgetPuzzle_commonModelA_3->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetPuzzle_commonModelA_3->setThreshold(80);
    widgetPuzzle_commonModelA_3->setOSCCommand("/layer:PIECE3/startMedia [65]");
    widgetPuzzle_commonModelA_3->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_3, 2, 0, 1, 1);

    widgetPuzzle_commonModelA_4 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_4->setTitleName("Puzzle Bloc-4");
    widgetPuzzle_commonModelA_4->setThreshold(80);
    widgetPuzzle_commonModelA_4->setOSCCommand("/layer:PIECE4/startMedia [65]");
    widgetPuzzle_commonModelA_4->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_4, 3, 0, 1, 1);

    widgetPuzzle_commonModelA_5 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_5->setTitleName("Puzzle Bloc-5");
    widgetPuzzle_commonModelA_5->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetPuzzle_commonModelA_5->setThreshold(80);
    widgetPuzzle_commonModelA_5->setOSCCommand("/layer:PIECE5/startMedia [65]");
    widgetPuzzle_commonModelA_5->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_5, 4, 0, 1, 1);

    widgetPuzzle_commonModelA_6 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_6->setTitleName("Puzzle Bloc-6");
    widgetPuzzle_commonModelA_6->setThreshold(80);
    widgetPuzzle_commonModelA_6->setOSCCommand("/layer:PIECE6/startMedia [65]");
    widgetPuzzle_commonModelA_6->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_6, 5, 0, 1, 1);

    widgetPuzzle_commonModelA_7 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_7->setTitleName("Puzzle Bloc-7");
    widgetPuzzle_commonModelA_7->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetPuzzle_commonModelA_7->setThreshold(80);
    widgetPuzzle_commonModelA_7->setOSCCommand("/layer:PIECE7/startMedia [65]");
    widgetPuzzle_commonModelA_7->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_7, 6, 0, 1, 1);

    widgetPuzzle_commonModelA_8 = new MyWidgetCommonModelA(this);
    widgetPuzzle_commonModelA_8->setTitleName("Puzzle Bloc-8");
    widgetPuzzle_commonModelA_8->setThreshold(80);
    widgetPuzzle_commonModelA_8->setOSCCommand("/layer:PIECE8/startMedia [65]");
    widgetPuzzle_commonModelA_8->setOSCSendIP(millumin_IP);
    widgetPuzzle_mainLayout->addWidget(widgetPuzzle_commonModelA_8, 7, 0, 1, 1);

}

void MyWidget_10_Puzzle::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_1(int)),
            widgetPuzzle_commonModelA_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_2(int)),
            widgetPuzzle_commonModelA_2, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_3(int)),
            widgetPuzzle_commonModelA_3, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_4(int)),
            widgetPuzzle_commonModelA_4, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_5(int)),
            widgetPuzzle_commonModelA_5, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_6(int)),
            widgetPuzzle_commonModelA_6, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_7(int)),
            widgetPuzzle_commonModelA_7, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_10_cube_8(int)),
            widgetPuzzle_commonModelA_8, SLOT(_getJsonData_clickCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_2, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_3, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_4, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_5, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_6, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_7, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetPuzzle_commonModelA_8, SLOT(_getJsonData_playerCount(int)));

}

void MyWidget_10_Puzzle::_getJsonData_clickCount(int _i1,
                                                 int _i2,
                                                 int _i3,
                                                 int _i4,
                                                 int _i5,
                                                 int _i6,
                                                 int _i7,
                                                 int _i8)
{
  emit this->_sendJsonData_to_widget_10_cube_1(_i1);
  emit this->_sendJsonData_to_widget_10_cube_2(_i2);
  emit this->_sendJsonData_to_widget_10_cube_3(_i3);
  emit this->_sendJsonData_to_widget_10_cube_4(_i4);
  emit this->_sendJsonData_to_widget_10_cube_5(_i5);
  emit this->_sendJsonData_to_widget_10_cube_6(_i6);
  emit this->_sendJsonData_to_widget_10_cube_7(_i7);
    emit this->_sendJsonData_to_widget_10_cube_8(_i8);
}

void MyWidget_10_Puzzle::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);


}
