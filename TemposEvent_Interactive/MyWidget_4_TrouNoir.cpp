#include "MyWidget_4_TrouNoir.h"

MyWidget_4_TrouNoir::MyWidget_4_TrouNoir(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_4_TrouNoir::initialVariable()
{
    widgetTrouNoir_OSCNetCore = new MyObjectOSCNetCore();
    widgetTrouNoir_OSCSendPort = 5000;
    widgetTrouNoir_conitionThreshold = 80;
    widgetTrouNoir_OSCFloat = 0.0f;

}

void MyWidget_4_TrouNoir::initialUI()
{
    this->setMinimumSize(1280, 60);
    QGridLayout *widgetTrouNoir_mainLayout = new QGridLayout(this);
    this->setStyleSheet("QWidget{background:rgb(225,225,225);};");
//    this->setLayout(widgetTrouNoir_mainLayout);

    widgetTrouNoir_mainLayout->setColumnStretch(0, 320);
    widgetTrouNoir_mainLayout->setColumnStretch(1, 80);
    widgetTrouNoir_mainLayout->setColumnStretch(2, 80);
    widgetTrouNoir_mainLayout->setColumnStretch(3, 300);
    widgetTrouNoir_mainLayout->setColumnStretch(4, 500);

    widgetTrouNoir_mainLayout->setSpacing(0);
    widgetTrouNoir_mainLayout->setContentsMargins(0,0,0,0);


    _labelCommonModelA = new QLabel(this);
    _labelCommonModelA->setText("Trou Noir");
    QFont _labelCommomModelA_Name_font = _labelCommonModelA->font();
    _labelCommomModelA_Name_font.setBold(true);
    _labelCommomModelA_Name_font.setPointSize(15);
    _labelCommonModelA->setFont(_labelCommomModelA_Name_font);
    widgetTrouNoir_mainLayout->addWidget(_labelCommonModelA, 0,0,1,1);

    widgetTrouNoir_spbox_clickCount = new QSpinBox(this);
    widgetTrouNoir_spbox_clickCount->setMinimumSize(60, 30);
    widgetTrouNoir_spbox_clickCount->setRange(0, 65535);
    widgetTrouNoir_spbox_clickCount->setValue(0);
    widgetTrouNoir_mainLayout->addWidget(widgetTrouNoir_spbox_clickCount, 0, 1, 1, 1);

    widgetTrouNoir_spbox_playerCount = new QSpinBox(this);
    widgetTrouNoir_spbox_playerCount->setMinimumSize(60,30);
    widgetTrouNoir_spbox_playerCount->setRange(0, 65535);
    widgetTrouNoir_spbox_playerCount->setValue(0);
    widgetTrouNoir_mainLayout->addWidget(widgetTrouNoir_spbox_playerCount, 0, 2, 1, 1);

    QGridLayout *widgetTrouNoir_conditionLayout = new QGridLayout();
    widgetTrouNoir_mainLayout->addLayout(widgetTrouNoir_conditionLayout, 0, 3, 1, 1);

        widgetTrouNoir_conditionLayout->setColumnStretch(0,1);
        widgetTrouNoir_conditionLayout->setColumnStretch(1,1);
        widgetTrouNoir_conditionLayout->setColumnStretch(2,2);

        QString _labelConditionStyle = "font: bold; font-size : 15pt;";

        QLabel *_labelCondition_1 = new QLabel(this);
        _labelCondition_1->setText("Now is : ");
        _labelCondition_1->setStyleSheet(_labelConditionStyle);
        widgetTrouNoir_conditionLayout->addWidget(_labelCondition_1, 0,0);

        widgetTrouNoir_spbox_conditionStepCount = new QDoubleSpinBox(this);
        widgetTrouNoir_spbox_conditionStepCount->setMinimumSize(60,30);
        widgetTrouNoir_spbox_conditionStepCount->setRange(0.0f, 100.0f);
        widgetTrouNoir_spbox_conditionStepCount->setValue(0);
        widgetTrouNoir_conditionLayout->addWidget(widgetTrouNoir_spbox_conditionStepCount, 0,1);

        _labelCondition_2 = new QLabel(this);
        _labelCondition_2->setText(" % ");
        _labelCondition_2->setStyleSheet(_labelConditionStyle);
        widgetTrouNoir_conditionLayout->addWidget(_labelCondition_2, 0, 2);

//        QLabel *_labelCondition_3 = new QLabel(this);
//        _labelCondition_3->setText("Every change of step will send OSC Command");
//        widgetTrouNoir_conditionLayout->addWidget(_labelCondition_3, 1, 0, 1, 3);

        _labelCondition_errorMsg = new QLabel(this);
        _labelCondition_errorMsg->setText("Status: ");
        widgetTrouNoir_conditionLayout->addWidget(_labelCondition_errorMsg, 1, 0, 1, 3);

    widgetTrouNoir_txtEdit_oscCommand = new QTextEdit(this);
    widgetTrouNoir_txtEdit_oscCommand->setText("/vvvv/TrouNoir/float 0");
    widgetTrouNoir_txtEdit_oscCommand->setMinimumSize(300, 55);
    widgetTrouNoir_txtEdit_oscCommand->setFixedHeight(55);

    widgetTrouNoir_mainLayout->addWidget(widgetTrouNoir_txtEdit_oscCommand, 0,4,1,1);


}

void MyWidget_4_TrouNoir::initialConnect()
{
    //UI connect
    connect(widgetTrouNoir_spbox_clickCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetTrouNoir_on_spbox_clickCount_change(int)));

    connect(widgetTrouNoir_spbox_playerCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetTrouNoir_on_spbox_playerCount_change(int)));

    connect(widgetTrouNoir_spbox_conditionStepCount, SIGNAL(valueChanged(double)),
            this, SLOT(widgetTrouNoir_on_spbox_conditionStepCount_change(double)));

    //OSCNetCore
    connect(this, SIGNAL(widgetTrouNoir_sendOSCCommand(QString, int, bool)),
            widgetTrouNoir_OSCNetCore, SLOT(sendDatagram(QString, int, bool)));

}

void MyWidget_4_TrouNoir::widgetTrouNoir_conditionCheck(qint32 _clickCount, qint32 _playerCount)
{
    QString _error_msg;
    if(_clickCount > _playerCount)
    {
        _error_msg = "Error : clickCount > playerCount is impossible";
    }
    else
    {
        if(_playerCount < 5)
        {
            _error_msg = "Error : playerCount < 5";
        }
        else
        {
            float _ratioClickOfPlayer;
            _ratioClickOfPlayer = (float)_clickCount * 100 / (float)_playerCount;
            _error_msg = tr("Status : Ratio is %1 %").arg(_ratioClickOfPlayer);

            int _ratioRangeMin;
            _ratioRangeMin = (int)_ratioClickOfPlayer;


//            if(_ratioClickOfPlayer < widgetTrouNoir_conitionThreshold)
//            {
//                _error_msg += tr(" less than %1 %").arg(widgetTrouNoir_conitionThreshold);

//            }
//            else
//            {
                _error_msg = tr("Status : Ratio is %1 %, Send OSC Command").arg(_ratioClickOfPlayer);

//            }
            widgetTrouNoir_spbox_conditionStepCount->setValue(_ratioClickOfPlayer/0.8f);


//            if(_ratioRangeMin != widgetTrouNoir_spbox_conditionStepCount->value())
//            {
//                widgetTrouNoir_spbox_conditionStepCount->setValue(_ratioRangeMin);
//            }

        }
    }
    _labelCondition_errorMsg->setText(_error_msg);

}

void MyWidget_4_TrouNoir::widgetTrouNoir_on_spbox_clickCount_change(int _clickCount)
{
    this->widgetTrouNoir_conditionCheck(_clickCount, widgetTrouNoir_spbox_playerCount->value());

}

void MyWidget_4_TrouNoir::widgetTrouNoir_on_spbox_playerCount_change(int _playerCount)
{
    this->widgetTrouNoir_conditionCheck(widgetTrouNoir_spbox_clickCount->value(), _playerCount);
}

void MyWidget_4_TrouNoir::widgetTrouNoir_on_spbox_conditionStepCount_change(double _conditionStepCount)
{

    if(1||_conditionStepCount >= widgetTrouNoir_conitionThreshold)
    {
        QString _oscCommand = widgetTrouNoir_txtEdit_oscCommand->toPlainText();
        if(!_oscCommand.contains(QRegExp("^-?\\d*\\.?\\d+$")))
        {
            _oscCommand = tr("/vvvv/TrouNoir/float %1").arg(_conditionStepCount);
            widgetTrouNoir_txtEdit_oscCommand->setText(_oscCommand);
        }
        emit this->widgetTrouNoir_sendOSCCommand(_oscCommand,
                                               widgetTrouNoir_OSCSendPort,
                                               true);
    }
}


