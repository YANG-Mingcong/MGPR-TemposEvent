#include "MyWidget_8_Desert.h"

MyWidget_8_Desert::MyWidget_8_Desert(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_8_Desert::initialVariable()
{

}

void MyWidget_8_Desert::initialUI()
{
    QGridLayout *widgetDesert_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetChemin_mainLayout);

    widgetDesert_mainLayout->setContentsMargins(0,0,0,0);
    widgetDesert_mainLayout->setSpacing(3);

    widgetDesert_commonModelA_1 = new MyWidgetCommonModelA(this);
    widgetDesert_commonModelA_1->setTitleName("Desert - bloc1");
    widgetDesert_commonModelA_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetDesert_commonModelA_1->setThreshold(80);
    widgetDesert_commonModelA_1->setOSCCommand("/layer:flareL_x/startMedia [1]");
    widgetDesert_mainLayout->addWidget(widgetDesert_commonModelA_1, 0, 0, 1, 1);

    widgetDesert_commonModelA_2 = new MyWidgetCommonModelA(this);
    widgetDesert_commonModelA_2->setTitleName("Desert - bloc2");
    widgetDesert_commonModelA_2->setThreshold(80);
    widgetDesert_commonModelA_2->setOSCCommand("/layer:flareL_x/startMedia [2]");
    widgetDesert_mainLayout->addWidget(widgetDesert_commonModelA_2, 1, 0, 1, 1);
}

void MyWidget_8_Desert::initialConnect()
{
    connect(this, SIGNAL(_sendJsonData_to_widget_8_cube_1(int)),
            widgetDesert_commonModelA_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_8_cube_2(int)),
            widgetDesert_commonModelA_2, SLOT(_getJsonData_clickCount(int)));


    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetDesert_commonModelA_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetDesert_commonModelA_2, SLOT(_getJsonData_playerCount(int)));
}

void MyWidget_8_Desert::_getJsonData_clickCount(int _i1, int _i2)
{
    emit this->_sendJsonData_to_widget_8_cube_1(_i1);
    emit this->_sendJsonData_to_widget_8_cube_2(_i2);
//    qDebug() << "Desert get JSON" << _i1 << " and " <<_i2;
}

void MyWidget_8_Desert::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);

}
