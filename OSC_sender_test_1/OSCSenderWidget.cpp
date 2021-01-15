#include "OSCSenderWidget.h"
/**
 * @brief OSCSenderWidget::OSCSenderWidget
 * @param parent
 * @author YANG Mingcong
 * @date 2021-JAN-14
 * @version 0.0.1
 */

OSCSenderWidget::OSCSenderWidget(QWidget *parent)
    : QWidget(parent)
{
    OSCSenderWidget_OSCNetCore = new OSCNetCore();



    QVBoxLayout *OSCSenderWidget_mainLayout = new QVBoxLayout(this);
    this->setLayout(OSCSenderWidget_mainLayout);
    this->setWindowTitle("TEMPO - OSC Sender");
    this->setMinimumSize(400, 300);

    QLabel *OSCSenderWidget_label_1 = new QLabel();
    OSCSenderWidget_label_1->setText("Input OSC Command here: \nEntrez la commande OSC ici:");
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_label_1);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_label_1, 1);

    OSCSenderWidget_commandTextEdit = new QTextEdit(this);
    OSCSenderWidget_commandTextEdit->setText("/action/launchOrStopColumn 1");
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_commandTextEdit);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_commandTextEdit,4);

    OSCSenderWidget_sendButton = new QPushButton(this);
    OSCSenderWidget_sendButton->setText("Push to Send / Pousser pour envoyer");
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_sendButton);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_sendButton,1);

    connect(OSCSenderWidget_sendButton, SIGNAL(pressed()),
            this, SLOT(sendButton_Pressed()));

    connect(this, SIGNAL(sendCommand(QString)),
            OSCSenderWidget_OSCNetCore, SLOT(sendDatagram(QString)));
}

OSCSenderWidget::~OSCSenderWidget()
{
}

void OSCSenderWidget::sendButton_Pressed()
{
    emit this->sendCommand(OSCSenderWidget_commandTextEdit->toPlainText());
}






