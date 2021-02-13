#include "MyWidget_3_Soleils.h"

MyWidget_3_Soleils::MyWidget_3_Soleils(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_3_Soleils::initialVariable()
{

}

void MyWidget_3_Soleils::initialUI()
{
    QGridLayout *widgetSoleils_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetChemin_mainLayout);

    widgetSoleils_mainLayout->setContentsMargins(0,0,0,0);
    widgetSoleils_mainLayout->setSpacing(3);

    widgetSoleils_commonModelB_1 = new MyWidgetCommonModelB(this);
    widgetSoleils_commonModelB_1->setTitleName("Soleils - bloc1");
    widgetSoleils_commonModelB_1->setStyleSheet("QWidget{background:rgb(225,225,225);};");
    widgetSoleils_commonModelB_1->setOSCCommand("/action/launchNextColumn");
    widgetSoleils_mainLayout->addWidget(widgetSoleils_commonModelB_1, 0, 0, 1, 1);

    widgetSoleils_commonModelB_2 = new MyWidgetCommonModelB(this);
    widgetSoleils_commonModelB_2->setTitleName("Soleils - bloc2");
    widgetSoleils_commonModelB_2->setOSCCommand("/action/launchNextColumn");
    widgetSoleils_mainLayout->addWidget(widgetSoleils_commonModelB_2, 1, 0, 1, 1);
}

void MyWidget_3_Soleils::initialConnect()
{

    connect(this, SIGNAL(_sendJsonData_to_widget_3_cube_1(int)),
            widgetSoleils_commonModelB_1, SLOT(_getJsonData_clickCount(int)));
    connect(this, SIGNAL(_sendJsonData_to_widget_3_cube_1(int)),
            widgetSoleils_commonModelB_2, SLOT(_getJsonData_clickCount(int)));



    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetSoleils_commonModelB_1, SLOT(_getJsonData_playerCount(int)));
    connect(this, SIGNAL(_sendJsonData_playerCount(int)),
            widgetSoleils_commonModelB_2, SLOT(_getJsonData_playerCount(int)));
}

void MyWidget_3_Soleils::_getJsonData_clickCount(int _i1,
                                                 int _i2)
{
    emit this->_sendJsonData_to_widget_3_cube_1(_i1);
    emit this->_sendJsonData_to_widget_3_cube_2(_i2);

}

void MyWidget_3_Soleils::_getJsonData_playerCount(int _i)
{
    emit this->_sendJsonData_playerCount(_i);

}
