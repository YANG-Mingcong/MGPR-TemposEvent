#include "MyWidgetCommonModelA.h"

MyWidgetCommonModelA::MyWidgetCommonModelA(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidgetCommonModelA::setTitleName(QString _inTitleName)
{
    _labelCommonModelA->setText(_inTitleName);
}

void MyWidgetCommonModelA::setOSCCommand(QString _in_QString)
{
    widgetCommonModelA_txtEdit_oscCommand->setText(_in_QString);
}

void MyWidgetCommonModelA::setThreshold(int _in_ConditionThreshold)
{
    widgetCommonModelA_conitionThreshold = _in_ConditionThreshold;
    _labelCondition_2->setText(tr(" %  / Thrd: %1 %").arg(_in_ConditionThreshold));
//    widgetCommonModelA_spbox_conditionStepCount->setValue(_in_ConditionThreshold);
}

void MyWidgetCommonModelA::setOSCSendPort(qint32 _in_Port)
{
    widgetCommonModelA_OSCSendPort = _in_Port;
}

void MyWidgetCommonModelA::setOSCSendIP(QString _in_IP_String)
{
    widgetCommonModelA_OSCSendIP = _in_IP_String;
    emit this->widgetCommonModelA_OSCNetCore_changeSendIP(_in_IP_String);
}

void MyWidgetCommonModelA::setOSCisOnlySendOnce(bool _sendOnce)
{
    widgetCommonModelA_is_OSCOnlySendOnce = _sendOnce;
}

void MyWidgetCommonModelA::initialVariable()
{
    widgetCommonModelA_OSCNetCore = new MyObjectOSCNetCore();
    widgetCommonModelA_OSCSendPort = 5000;
    widgetCommonModelA_conitionThreshold = 60;
    widgetCommonModelA_OSCSendIP = "169.254.160.141";

    widgetCommonModelA_is_OSCSend = false;
    widgetCommonModelA_is_OSCOnlySendOnce = true;
}

void MyWidgetCommonModelA::initialUI()
{
    this->setMinimumSize(1280, 60);
    QGridLayout *widgetCommonModelA_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetCommonModelA_mainLayout);

    widgetCommonModelA_mainLayout->setColumnStretch(0, 320);
    widgetCommonModelA_mainLayout->setColumnStretch(1, 80);
    widgetCommonModelA_mainLayout->setColumnStretch(2, 80);
    widgetCommonModelA_mainLayout->setColumnStretch(3, 300);
    widgetCommonModelA_mainLayout->setColumnStretch(4, 500);

    widgetCommonModelA_mainLayout->setSpacing(0);
    widgetCommonModelA_mainLayout->setContentsMargins(0,0,0,0);


    _labelCommonModelA = new QLabel(this);
    _labelCommonModelA->setText("CommonModelA");
    QFont _labelCommomModelA_Name_font = _labelCommonModelA->font();
    _labelCommomModelA_Name_font.setBold(true);
    _labelCommomModelA_Name_font.setPointSize(15);
    _labelCommomModelA_Name_font.setFamily("Arial");
    _labelCommonModelA->setFont(_labelCommomModelA_Name_font);
    widgetCommonModelA_mainLayout->addWidget(_labelCommonModelA, 0,0,1,1);

    widgetCommonModelA_spbox_clickCount = new QSpinBox(this);
    widgetCommonModelA_spbox_clickCount->setMinimumSize(60, 30);
    widgetCommonModelA_spbox_clickCount->setRange(0, 65535);
    widgetCommonModelA_spbox_clickCount->setValue(0);
    widgetCommonModelA_mainLayout->addWidget(widgetCommonModelA_spbox_clickCount, 0, 1, 1, 1);

    widgetCommonModelA_spbox_playerCount = new QSpinBox(this);
    widgetCommonModelA_spbox_playerCount->setMinimumSize(60,30);
    widgetCommonModelA_spbox_playerCount->setRange(0, 65535);
    widgetCommonModelA_spbox_playerCount->setValue(0);
    widgetCommonModelA_mainLayout->addWidget(widgetCommonModelA_spbox_playerCount, 0, 2, 1, 1);

    QGridLayout *widgetCommonModelA_conditionLayout = new QGridLayout();
    widgetCommonModelA_mainLayout->addLayout(widgetCommonModelA_conditionLayout, 0, 3, 1, 1);

        widgetCommonModelA_conditionLayout->setColumnStretch(0,1);
        widgetCommonModelA_conditionLayout->setColumnStretch(1,1);
        widgetCommonModelA_conditionLayout->setColumnStretch(2,2);

        QString _labelConditionStyle = "font-family:Arial; font: bold; font-size : 15pt;";

        QLabel *_labelCondition_1 = new QLabel(this);
        _labelCondition_1->setText("Now is : ");
        _labelCondition_1->setStyleSheet(_labelConditionStyle);
        widgetCommonModelA_conditionLayout->addWidget(_labelCondition_1, 0,0);

        widgetCommonModelA_spbox_conditionStepCount = new QSpinBox(this);
        widgetCommonModelA_spbox_conditionStepCount->setMinimumSize(60,30);
        widgetCommonModelA_spbox_conditionStepCount->setRange(0, 100);
        widgetCommonModelA_spbox_conditionStepCount->setValue(0);
        widgetCommonModelA_conditionLayout->addWidget(widgetCommonModelA_spbox_conditionStepCount, 0,1);

        _labelCondition_2 = new QLabel(this);
        _labelCondition_2->setText(" % ");
        _labelCondition_2->setStyleSheet(_labelConditionStyle);
        widgetCommonModelA_conditionLayout->addWidget(_labelCondition_2, 0, 2);

//        QLabel *_labelCondition_3 = new QLabel(this);
//        _labelCondition_3->setText("Every change of step will send OSC Command");
//        widgetCommonModelA_conditionLayout->addWidget(_labelCondition_3, 1, 0, 1, 3);

        _labelCondition_errorMsg = new QLabel(this);
        _labelCondition_errorMsg->setText("Status: ");
        widgetCommonModelA_conditionLayout->addWidget(_labelCondition_errorMsg, 1, 0, 1, 3);

    widgetCommonModelA_txtEdit_oscCommand = new QTextEdit(this);
    widgetCommonModelA_txtEdit_oscCommand->setText("/Millumin/Craquelure/startorPauseMedia 1");
    widgetCommonModelA_txtEdit_oscCommand->setMinimumSize(300, 55);
    widgetCommonModelA_txtEdit_oscCommand->setFixedHeight(55);

    widgetCommonModelA_mainLayout->addWidget(widgetCommonModelA_txtEdit_oscCommand, 0,4,1,1);

}

void MyWidgetCommonModelA::initialConnect()
{
    //UI connect
    connect(widgetCommonModelA_spbox_clickCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelA_on_spbox_clickCount_change(int)));

    connect(widgetCommonModelA_spbox_playerCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelA_on_spbox_playerCount_change(int)));

    connect(widgetCommonModelA_spbox_conditionStepCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelA_on_spbox_conditionStepCount_change(int)));

    //OSCNetCore
    connect(this, SIGNAL(widgetCommonModelA_sendOSCCommand(QString, int, bool)),
            widgetCommonModelA_OSCNetCore, SLOT(sendDatagram(QString, int, bool)));

    connect(this, SIGNAL(widgetCommonModelA_OSCNetCore_changeSendIP(QString)),
            widgetCommonModelA_OSCNetCore, SLOT(changeSendToIP(QString)));

}

void MyWidgetCommonModelA::widgetCommonModelA_conditionCheck(qint32 _clickCount, qint32 _playerCount)
{
    QString _error_msg;
    if(_clickCount > _playerCount)
    {
        _error_msg = "Error : clickCount > playerCount is impossible";
    }
    else
    {
        if(_playerCount < 25)
        {
            _error_msg = "Error : playerCount < 25";
        }
        else
        {
            float _ratioClickOfPlayer;
            _ratioClickOfPlayer = (float)_clickCount * 100 / (float)_playerCount;
            _error_msg = tr("Status : Ratio is %1 %").arg(_ratioClickOfPlayer);

            int _ratioRangeMin;
            _ratioRangeMin = (int)_ratioClickOfPlayer;


            if(_ratioClickOfPlayer < widgetCommonModelA_conitionThreshold)
            {
                _error_msg += tr(" less than %1 %").arg(widgetCommonModelA_conitionThreshold);

            }
            else
            {
                _error_msg = tr("Status : Ratio is %1 %, Send OSC Command").arg(_ratioClickOfPlayer);

            }


            if(_ratioRangeMin != widgetCommonModelA_spbox_conditionStepCount->value())
            {
                widgetCommonModelA_spbox_conditionStepCount->setValue(_ratioRangeMin);
            }

        }
    }
    _labelCondition_errorMsg->setText(_error_msg);
}

void MyWidgetCommonModelA::widgetCommonModelA_on_spbox_clickCount_change(int _clickCount)
{
    this->widgetCommonModelA_conditionCheck(_clickCount, widgetCommonModelA_spbox_playerCount->value());
}

void MyWidgetCommonModelA::widgetCommonModelA_on_spbox_playerCount_change(int _playerCount)
{
    this->widgetCommonModelA_conditionCheck(widgetCommonModelA_spbox_clickCount->value(), _playerCount);
}

void MyWidgetCommonModelA::widgetCommonModelA_on_spbox_conditionStepCount_change(int _conditionStepCount)
{

    if(_conditionStepCount >= widgetCommonModelA_conitionThreshold &&(!widgetCommonModelA_is_OSCSend))
    {
        QString _oscCommand = widgetCommonModelA_txtEdit_oscCommand->toPlainText();

        emit this->widgetCommonModelA_sendOSCCommand(_oscCommand,
                                               widgetCommonModelA_OSCSendPort,
                                               true);
        qDebug() << "Send: "  <<_oscCommand << " to  " << widgetCommonModelA_OSCSendIP << "in Port : " << widgetCommonModelA_OSCSendPort;
        if(widgetCommonModelA_is_OSCOnlySendOnce)
        {
            widgetCommonModelA_is_OSCSend = true;
        }
    }
}

void MyWidgetCommonModelA::_getJsonData_clickCount(int _i)
{
    widgetCommonModelA_spbox_clickCount->setValue(_i);
}

void MyWidgetCommonModelA::_getJsonData_playerCount(int _i)
{
    widgetCommonModelA_spbox_playerCount->setValue(_i);
}





