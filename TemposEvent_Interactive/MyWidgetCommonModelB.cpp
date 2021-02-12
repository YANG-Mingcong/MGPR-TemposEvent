#include "MyWidgetCommonModelB.h"

MyWidgetCommonModelB::MyWidgetCommonModelB(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidgetCommonModelB::setTitleName(QString _inTitleName)
{
    _labelCommonModelB->setText(_inTitleName);
}

void MyWidgetCommonModelB::setOSCCommand(QString _in_QString)
{
    widgetCommonModelB_txtEdit_oscCommand->setText(_in_QString);

}

void MyWidgetCommonModelB::setThreshold(int _in_ConditionThreshold)
{
    widgetCommonModelB_conitionThreshold = _in_ConditionThreshold;
    _labelCondition_2->setText(tr(" %  / Thrd: %1 %").arg(_in_ConditionThreshold));
//    widgetCommonModelB_spbox_conditionStepCount->setValue(_in_ConditionThreshold);
}

void MyWidgetCommonModelB::setOSCSendPort(qint32 _in_Port)
{
    widgetCommonModelB_OSCSendPort = _in_Port;
}

void MyWidgetCommonModelB::setOSCSendIP(QString _in_IP_String)
{
    widgetCommonModelB_OSCSendIP = _in_IP_String;
    emit this->widgetCommonModelB_OSCNetCore_changeSendIP(_in_IP_String);
}

void MyWidgetCommonModelB::setOSCisOnlySendOnce(bool _sendOnce)
{
    widgetCommonModelB_is_OSCOnlySendOnce = _sendOnce;
}

void MyWidgetCommonModelB::initialVariable()
{
    widgetCommonModelB_OSCNetCore = new MyObjectOSCNetCore();
    widgetCommonModelB_OSCSendPort = 5000;
    widgetCommonModelB_conitionThreshold = 60;
    widgetCommonModelB_OSCSendIP = "169.254.160.141";

    widgetCommonModelB_is_OSCSend = false;
    widgetCommonModelB_is_OSCOnlySendOnce = true;
    widgetCommonModelB_OSCCommandWithoutArg = "/Common/ModelB/WithFloat Arg";
}

void MyWidgetCommonModelB::initialUI()
{
    this->setMinimumSize(1280, 60);
    QGridLayout *widgetCommonModelB_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetCommonModelB_mainLayout);

    widgetCommonModelB_mainLayout->setColumnStretch(0, 320);
    widgetCommonModelB_mainLayout->setColumnStretch(1, 80);
    widgetCommonModelB_mainLayout->setColumnStretch(2, 80);
    widgetCommonModelB_mainLayout->setColumnStretch(3, 300);
    widgetCommonModelB_mainLayout->setColumnStretch(4, 500);

    widgetCommonModelB_mainLayout->setSpacing(0);
    widgetCommonModelB_mainLayout->setContentsMargins(0,0,0,0);


    _labelCommonModelB = new QLabel(this);
    _labelCommonModelB->setText("CommonModelB");
    QFont _labelCommomModelB_Name_font = _labelCommonModelB->font();
    _labelCommomModelB_Name_font.setBold(true);
    _labelCommomModelB_Name_font.setPointSize(15);
    _labelCommonModelB->setFont(_labelCommomModelB_Name_font);
    widgetCommonModelB_mainLayout->addWidget(_labelCommonModelB, 0,0,1,1);

    widgetCommonModelB_spbox_clickCount = new QSpinBox(this);
    widgetCommonModelB_spbox_clickCount->setMinimumSize(60, 30);
    widgetCommonModelB_spbox_clickCount->setRange(0, 65535);
    widgetCommonModelB_spbox_clickCount->setValue(0);
    widgetCommonModelB_mainLayout->addWidget(widgetCommonModelB_spbox_clickCount, 0, 1, 1, 1);

    widgetCommonModelB_spbox_playerCount = new QSpinBox(this);
    widgetCommonModelB_spbox_playerCount->setMinimumSize(60,30);
    widgetCommonModelB_spbox_playerCount->setRange(0, 65535);
    widgetCommonModelB_spbox_playerCount->setValue(0);
    widgetCommonModelB_mainLayout->addWidget(widgetCommonModelB_spbox_playerCount, 0, 2, 1, 1);

    QGridLayout *widgetCommonModelB_conditionLayout = new QGridLayout();
    widgetCommonModelB_mainLayout->addLayout(widgetCommonModelB_conditionLayout, 0, 3, 1, 1);

        widgetCommonModelB_conditionLayout->setColumnStretch(0,1);
        widgetCommonModelB_conditionLayout->setColumnStretch(1,1);
        widgetCommonModelB_conditionLayout->setColumnStretch(2,2);

        QString _labelConditionStyle = "font: bold; font-size : 15pt;";

        QLabel *_labelCondition_1 = new QLabel(this);
        _labelCondition_1->setText("Now is : ");
        _labelCondition_1->setStyleSheet(_labelConditionStyle);
        widgetCommonModelB_conditionLayout->addWidget(_labelCondition_1, 0,0);

        widgetCommonModelB_spbox_conditionStepCount = new QDoubleSpinBox(this);
        widgetCommonModelB_spbox_conditionStepCount->setMinimumSize(60,30);
        widgetCommonModelB_spbox_conditionStepCount->setRange(0.0f, 100.0f);
        widgetCommonModelB_spbox_conditionStepCount->setValue(0);
        widgetCommonModelB_conditionLayout->addWidget(widgetCommonModelB_spbox_conditionStepCount, 0,1);

        _labelCondition_2 = new QLabel(this);
        _labelCondition_2->setText(" % ");
        _labelCondition_2->setStyleSheet(_labelConditionStyle);
        widgetCommonModelB_conditionLayout->addWidget(_labelCondition_2, 0, 2);

//        QLabel *_labelCondition_3 = new QLabel(this);
//        _labelCondition_3->setText("Every change of step will send OSC Command");
//        widgetCommonModelB_conditionLayout->addWidget(_labelCondition_3, 1, 0, 1, 3);

        _labelCondition_errorMsg = new QLabel(this);
        _labelCondition_errorMsg->setText("Status: ");
        widgetCommonModelB_conditionLayout->addWidget(_labelCondition_errorMsg, 1, 0, 1, 3);

    widgetCommonModelB_txtEdit_oscCommand = new QTextEdit(this);
    widgetCommonModelB_txtEdit_oscCommand->setText("/CommonB");
    widgetCommonModelB_txtEdit_oscCommand->setMinimumSize(300, 55);
    widgetCommonModelB_txtEdit_oscCommand->setFixedHeight(55);

    widgetCommonModelB_mainLayout->addWidget(widgetCommonModelB_txtEdit_oscCommand, 0,4,1,1);

}

void MyWidgetCommonModelB::initialConnect()
{
    //UI connect
    connect(widgetCommonModelB_spbox_clickCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelB_on_spbox_clickCount_change(int)));

    connect(widgetCommonModelB_spbox_playerCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelB_on_spbox_playerCount_change(int)));

    connect(widgetCommonModelB_spbox_conditionStepCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetCommonModelB_on_spbox_conditionStepCount_change(int)));

    //OSCNetCore
    connect(this, SIGNAL(widgetCommonModelB_sendOSCCommand(QString, int, bool)),
            widgetCommonModelB_OSCNetCore, SLOT(sendDatagram(QString, int, bool)));

    connect(this, SIGNAL(widgetCommonModelB_OSCNetCore_changeSendIP(QString)),
            widgetCommonModelB_OSCNetCore, SLOT(changeSendToIP(QString)));

}

void MyWidgetCommonModelB::widgetCommonModelB_conditionCheck(qint32 _clickCount, qint32 _playerCount)
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


//            if(_ratioClickOfPlayer < widgetCommonModelB_conitionThreshold)
//            {
//                _error_msg += tr(" less than %1 %").arg(widgetCommonModelB_conitionThreshold);

//            }
//            else
//            {
                _error_msg = tr("Status : Ratio is %1 %, Send OSC Command").arg(_ratioClickOfPlayer);

//            }
                widgetCommonModelB_spbox_conditionStepCount->setValue(_ratioClickOfPlayer/float(widgetCommonModelB_conitionThreshold/100.0f));


//            if(_ratioRangeMin != widgetCommonModelB_spbox_conditionStepCount->value())
//            {
//                widgetCommonModelB_spbox_conditionStepCount->setValue(_ratioRangeMin);
//            }

        }
    }
    _labelCondition_errorMsg->setText(_error_msg);
}

void MyWidgetCommonModelB::widgetCommonModelB_on_spbox_clickCount_change(int _clickCount)
{
    this->widgetCommonModelB_conditionCheck(_clickCount, widgetCommonModelB_spbox_playerCount->value());
}

void MyWidgetCommonModelB::widgetCommonModelB_on_spbox_playerCount_change(int _playerCount)
{
    this->widgetCommonModelB_conditionCheck(widgetCommonModelB_spbox_clickCount->value(), _playerCount);
}

void MyWidgetCommonModelB::widgetCommonModelB_on_spbox_conditionStepCount_change(int _conditionStepCount)
{

//    if(_conditionStepCount >= widgetCommonModelB_conitionThreshold &&(!widgetCommonModelB_is_OSCSend))
//    {
        QString _oscCommand = widgetCommonModelB_txtEdit_oscCommand->toPlainText();
        if(!_oscCommand.contains(QRegExp("^-?\\d*\\.?\\d+$")))
        {
            _oscCommand = widgetCommonModelB_OSCCommandWithoutArg.append(_conditionStepCount);
            widgetCommonModelB_txtEdit_oscCommand->setText(_oscCommand);
        }
        emit this->widgetCommonModelB_sendOSCCommand(_oscCommand,
                                               widgetCommonModelB_OSCSendPort,
                                               true);
        qDebug() << "Send: "  <<_oscCommand << " to  " << widgetCommonModelB_OSCSendIP;
//        if(widgetCommonModelB_is_OSCOnlySendOnce)
//        {
//            widgetCommonModelB_is_OSCSend = true;
//        }
//    }
}
