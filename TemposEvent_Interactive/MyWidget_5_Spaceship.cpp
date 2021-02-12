#include "MyWidget_5_Spaceship.h"

MyWidget_5_Spaceship::MyWidget_5_Spaceship(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_5_Spaceship::initialVariable()
{
    widgetSpaceship_OSCNetCore = new MyObjectOSCNetCore();

}

void MyWidget_5_Spaceship::initialUI()
{
    this->setMinimumSize(1280, 60);
    QGridLayout *widgetSpaceship_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetSpaceship_mainLayout);

    widgetSpaceship_mainLayout->setColumnStretch(0, 320);
    widgetSpaceship_mainLayout->setColumnStretch(1, 80);
    widgetSpaceship_mainLayout->setColumnStretch(2, 80);
    widgetSpaceship_mainLayout->setColumnStretch(3, 300);
    widgetSpaceship_mainLayout->setColumnStretch(4, 500);

    widgetSpaceship_mainLayout->setSpacing(3);
    widgetSpaceship_mainLayout->setContentsMargins(0,0,0,0);

    QLabel *_labelSpaceship = new QLabel(this);
    _labelSpaceship->setText("Vaisseaux spatiaux");
    _labelSpaceship->setStyleSheet("font-family:Arial; font: bold; font-size : 14pt;");
    widgetSpaceship_mainLayout->addWidget(_labelSpaceship, 1,0,1,1);

    widgetSpaceship_spbox_clickCount = new QSpinBox(this);
    widgetSpaceship_spbox_clickCount->setMinimumSize(60, 30);
    widgetSpaceship_spbox_clickCount->setRange(0, 65535);
    widgetSpaceship_spbox_clickCount->setValue(0);
    widgetSpaceship_mainLayout->addWidget(widgetSpaceship_spbox_clickCount, 1, 1, 1, 1);

    widgetSpaceship_spbox_playerCount = new QSpinBox(this);
    widgetSpaceship_spbox_playerCount->setMinimumSize(60,30);
    widgetSpaceship_spbox_playerCount->setRange(0, 65535);
    widgetSpaceship_spbox_playerCount->setValue(0);
    widgetSpaceship_mainLayout->addWidget(widgetSpaceship_spbox_playerCount, 1, 2, 1, 1);

    QGridLayout *widgetSpaceship_conditionLayout = new QGridLayout();
    widgetSpaceship_mainLayout->addLayout(widgetSpaceship_conditionLayout, 1, 3, 1, 1);

        widgetSpaceship_conditionLayout->setColumnStretch(0,1);
        widgetSpaceship_conditionLayout->setColumnStretch(1,1);
        widgetSpaceship_conditionLayout->setColumnStretch(2,2);

        QString _labelConditionStyle = "font: bold; font-size : 14pt;";

        QLabel *_labelCondition_1 = new QLabel(this);
        _labelCondition_1->setText("Now is Step: ");
        _labelCondition_1->setStyleSheet(_labelConditionStyle);
        widgetSpaceship_conditionLayout->addWidget(_labelCondition_1, 0,0);

        widgetSpaceship_spbox_conditionStepCount = new QSpinBox(this);
        widgetSpaceship_spbox_conditionStepCount->setMinimumSize(60,30);
        widgetSpaceship_spbox_conditionStepCount->setRange(0, 3);
        widgetSpaceship_spbox_conditionStepCount->setValue(0);
        widgetSpaceship_conditionLayout->addWidget(widgetSpaceship_spbox_conditionStepCount, 0,1);

        QLabel *_labelCondition_2 = new QLabel(this);
        _labelCondition_2->setText(" / 3 step,>25%, >50, >75%");
        _labelCondition_2->setStyleSheet(_labelConditionStyle);
        widgetSpaceship_conditionLayout->addWidget(_labelCondition_2, 0, 2);

        QLabel *_labelCondition_3 = new QLabel(this);
        _labelCondition_3->setText("Every change of step will send OSC Command");
        widgetSpaceship_conditionLayout->addWidget(_labelCondition_3, 1, 0, 1, 3);

        _labelCondition_errorMsg = new QLabel(this);
        _labelCondition_errorMsg->setText("Status: ");
        widgetSpaceship_conditionLayout->addWidget(_labelCondition_errorMsg, 2, 0, 1, 3);

    widgetSpaceship_txtEdit_oscCommand = new QTextEdit(this);
    widgetSpaceship_txtEdit_oscCommand->setText("/action/launchnextcolumn");
    widgetSpaceship_txtEdit_oscCommand->setMinimumSize(300, 55);
    widgetSpaceship_txtEdit_oscCommand->setFixedHeight(55);

    widgetSpaceship_mainLayout->addWidget(widgetSpaceship_txtEdit_oscCommand, 1,4,1,1);

}

void MyWidget_5_Spaceship::initialConnect()
{
    //UI connect
    connect(widgetSpaceship_spbox_clickCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetSpaceship_on_spbox_clickCount_change(int)));

    connect(widgetSpaceship_spbox_playerCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetSpaceship_on_spbox_playerCount_change(int)));

    connect(widgetSpaceship_spbox_conditionStepCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetSpaceship_on_spbox_conditionStepCount_change(int)));

    //OSCNetCore
    connect(this, SIGNAL(widgetSpaceship_sendOSCCommand(QString, int, bool)),
            widgetSpaceship_OSCNetCore, SLOT(sendDatagram(QString, int, bool)));

}

void MyWidget_5_Spaceship::widgetSpaceship_conditionCheck(qint32 _clickCount, qint32 _playerCount)
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
            _error_msg = tr("Status : %1 %").arg(_ratioClickOfPlayer);

            int _ratioRangeMin;
            _ratioRangeMin = ((int)(_ratioClickOfPlayer / 25)) * 25;

            _error_msg += tr(" between %1 % ~ %2 %").arg(_ratioRangeMin*25)
                                                    .arg(_ratioRangeMin*25 + 25 );

            if(_ratioRangeMin > widgetSpaceship_spbox_conditionStepCount->value() * 25)
            {
                widgetSpaceship_spbox_conditionStepCount->setValue(_ratioRangeMin / 25);

            }
        }
    }
    _labelCondition_errorMsg->setText(_error_msg);

}

void MyWidget_5_Spaceship::widgetSpaceship_on_spbox_clickCount_change(int _clickCount)
{
    this->widgetSpaceship_conditionCheck(_clickCount, widgetSpaceship_spbox_playerCount->value());
}

void MyWidget_5_Spaceship::widgetSpaceship_on_spbox_playerCount_change(int _playerCount)
{
    this->widgetSpaceship_conditionCheck(widgetSpaceship_spbox_clickCount->value(), _playerCount);
}

void MyWidget_5_Spaceship::widgetSpaceship_on_spbox_conditionStepCount_change(int _inStepValue)
{

    QString _oscCommand = widgetSpaceship_txtEdit_oscCommand->toPlainText();

    emit this->widgetSpaceship_sendOSCCommand(_oscCommand,
                                           5000,
                                           false);


}
