#include "MyWidget_0_Comete.h"

MyWidget_0_Comete::MyWidget_0_Comete(QWidget *parent) : QWidget(parent)
{
    this->initialVariable();
    this->initialUI();
    this->initialConnect();
}

void MyWidget_0_Comete::initialVariable()
{
    widgetComete_OSCNetCore = new MyObjectOSCNetCore();
}

void MyWidget_0_Comete::initialUI()
{
    this->setMinimumSize(1280, 90);
    QGridLayout *widgetComete_mainLayout = new QGridLayout(this);
//    this->setLayout(widgetComete_mainLayout);

    widgetComete_mainLayout->setColumnStretch(0, 320);
    widgetComete_mainLayout->setColumnStretch(1, 80);
    widgetComete_mainLayout->setColumnStretch(2, 80);
    widgetComete_mainLayout->setColumnStretch(3, 300);
    widgetComete_mainLayout->setColumnStretch(4, 500);

    widgetComete_mainLayout->setRowStretch(0, 30);
    widgetComete_mainLayout->setRowStretch(1, 60);

    widgetComete_mainLayout->setSpacing(3);
    widgetComete_mainLayout->setContentsMargins(0,0,0,0);

        QString _titleStyle = "background-color: gray; color: white; font: bold; font-size : 17pt; font-family: Arial";

        QLabel *_titleLabel_name = new QLabel(this);
        _titleLabel_name->setText("Name");
        _titleLabel_name->setMaximumHeight(50);
        _titleLabel_name->setStyleSheet(_titleStyle);

        QLabel *_titleLabel_click = new QLabel(this);
        _titleLabel_click->setText("Click");
        _titleLabel_click->setStyleSheet(_titleStyle);

        QLabel *_titleLabel_playing = new QLabel(this);
        _titleLabel_playing->setText("Player");
        _titleLabel_playing->setStyleSheet(_titleStyle);

        QLabel *_titleLabel_condition = new QLabel(this);
        _titleLabel_condition->setText("Condition");
        _titleLabel_condition->setStyleSheet(_titleStyle);

        QLabel *_titleLabel_OSCCommand = new QLabel(this);
        _titleLabel_OSCCommand->setText("OSC Command");
        _titleLabel_OSCCommand->setStyleSheet(_titleStyle);

        widgetComete_mainLayout->addWidget(_titleLabel_name, 0,0,1,1);
        widgetComete_mainLayout->addWidget(_titleLabel_click, 0,1,1,1);
        widgetComete_mainLayout->addWidget(_titleLabel_playing, 0,2,1,1);
        widgetComete_mainLayout->addWidget(_titleLabel_condition, 0,3,1,1);
        widgetComete_mainLayout->addWidget(_titleLabel_OSCCommand, 0,4,1,1);




    QLabel *_labelComete = new QLabel(this);
    _labelComete->setText("Comete");
    _labelComete->setStyleSheet("font-family:Arial; font: bold; font-size : 14pt;");
    widgetComete_mainLayout->addWidget(_labelComete, 1,0,1,1);

    widgetComete_spbox_clickCount = new QSpinBox(this);
    widgetComete_spbox_clickCount->setMinimumSize(60, 30);
    widgetComete_spbox_clickCount->setRange(0, 65535);
    widgetComete_spbox_clickCount->setValue(0);
    widgetComete_mainLayout->addWidget(widgetComete_spbox_clickCount, 1, 1, 1, 1);

    widgetComete_spbox_playerCount = new QSpinBox(this);
    widgetComete_spbox_playerCount->setMinimumSize(60,30);
    widgetComete_spbox_playerCount->setRange(0, 65535);
    widgetComete_spbox_playerCount->setValue(0);
    widgetComete_mainLayout->addWidget(widgetComete_spbox_playerCount, 1, 2, 1, 1);

    QGridLayout *widgetComete_conditionLayout = new QGridLayout();
    widgetComete_mainLayout->addLayout(widgetComete_conditionLayout, 1, 3, 1, 1);

        widgetComete_conditionLayout->setColumnStretch(0,1);
        widgetComete_conditionLayout->setColumnStretch(1,1);
        widgetComete_conditionLayout->setColumnStretch(2,2);

        QString _labelConditionStyle = "font: bold; font-size : 20pt;";

        QLabel *_labelCondition_1 = new QLabel(this);
        _labelCondition_1->setText("Now is Step: ");
        _labelCondition_1->setStyleSheet(_labelConditionStyle);
        widgetComete_conditionLayout->addWidget(_labelCondition_1, 0,0);

        widgetComete_spbox_conditionStepCount = new QSpinBox(this);
        widgetComete_spbox_conditionStepCount->setMinimumSize(60,30);
        widgetComete_spbox_conditionStepCount->setRange(0, 65535);
        widgetComete_spbox_conditionStepCount->setValue(0);
        widgetComete_conditionLayout->addWidget(widgetComete_spbox_conditionStepCount, 0,1);

        QLabel *_labelCondition_2 = new QLabel(this);
        _labelCondition_2->setText(" /  25 ");
        _labelCondition_2->setStyleSheet(_labelConditionStyle);
        widgetComete_conditionLayout->addWidget(_labelCondition_2, 0, 2);

        QLabel *_labelCondition_3 = new QLabel(this);
        _labelCondition_3->setText("Every change of step will send OSC Command");
        widgetComete_conditionLayout->addWidget(_labelCondition_3, 1, 0, 1, 3);

        _labelCondition_errorMsg = new QLabel(this);
        _labelCondition_errorMsg->setText("Status: ");
        widgetComete_conditionLayout->addWidget(_labelCondition_errorMsg, 2, 0, 1, 3);

    widgetComete_txtEdit_oscCommand = new QTextEdit(this);
    widgetComete_txtEdit_oscCommand->setText("/layer:craquelures/startMedia\n/TemposWait/ms 3000\n/layer:craquelures/pauseMedia");
    widgetComete_txtEdit_oscCommand->setMinimumSize(300, 60);
    widgetComete_txtEdit_oscCommand->setFixedHeight(60);

    widgetComete_mainLayout->addWidget(widgetComete_txtEdit_oscCommand, 1,4,1,1);

}

void MyWidget_0_Comete::initialConnect()
{
    //UI connect
    connect(widgetComete_spbox_clickCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetComete_on_spbox_clickCount_change(int)));

    connect(widgetComete_spbox_playerCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetComete_on_spbox_playerCount_change(int)));

    connect(widgetComete_spbox_conditionStepCount, SIGNAL(valueChanged(int)),
            this, SLOT(widgetComete_on_spbox_conditionStepCount_change(int)));

    //OSCNetCore
    connect(this, SIGNAL(widgetComete_sendOSCCommand(QString, int, bool)),
            widgetComete_OSCNetCore, SLOT(sendDatagram(QString, int, bool)));

}

void MyWidget_0_Comete::widgetComete_conditionCheck(qint32 _clickCount, qint32 _playerCount)
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
            _ratioRangeMin = ((int)(_ratioClickOfPlayer / 4)) * 4;

            _error_msg += tr(" between %1 % ~ %2 %").arg(_ratioRangeMin)
                                                    .arg(_ratioRangeMin + 4 );

            if(_ratioRangeMin > widgetComete_spbox_conditionStepCount->value() * 4)
            {
                widgetComete_spbox_conditionStepCount->setValue(_ratioRangeMin / 4);

            }
        }
    }
    _labelCondition_errorMsg->setText(_error_msg);
}

void MyWidget_0_Comete::widgetComete_on_spbox_clickCount_change(int _clickCount)
{
    this->widgetComete_conditionCheck(_clickCount, widgetComete_spbox_playerCount->value());
}

void MyWidget_0_Comete::widgetComete_on_spbox_playerCount_change(int _playerCount)
{
    this->widgetComete_conditionCheck(widgetComete_spbox_clickCount->value(), _playerCount);
}

void MyWidget_0_Comete::widgetComete_on_spbox_conditionStepCount_change(int _conditionStepCount)
{

    QString _oscCommand = widgetComete_txtEdit_oscCommand->toPlainText();
    emit this->widgetComete_sendOSCCommand(_oscCommand,
                                           5000,
                                           false);
}

void MyWidget_0_Comete::_getJsonData_clickCount(int _i)
{
    widgetComete_spbox_clickCount->setValue(_i);
}

void MyWidget_0_Comete::_getJsonData_playerCount(int _i)
{
    widgetComete_spbox_playerCount->setValue(_i);
}






