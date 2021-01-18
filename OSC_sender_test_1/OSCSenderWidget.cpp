#include "OSCSenderWidget.h"
/**
 * @brief OSCSenderWidget::OSCSenderWidget
 * @param parent
 * @author YANG Mingcong
 * @date 2021-JAN-17
 * @version 0.1.1 Alpha
 */

OSCSenderWidget::OSCSenderWidget(QWidget *parent)
    : QWidget(parent)
{
    OSCSenderWidget_OSCNetCore = new OSCNetCore();

    QHBoxLayout *OSCSenderWidget_mainLayout = new QHBoxLayout(this);
    this->setLayout(OSCSenderWidget_mainLayout);
    this->setWindowTitle("TEMPO - OSC Sender");
    this->setMinimumSize(640, 360);

    QWidget *OSCSenderWidget_leftWidget = new QWidget(this);
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_leftWidget);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_leftWidget,7);

    QVBoxLayout *OSCSenderWidget_mainLeftLayout = new QVBoxLayout(OSCSenderWidget_leftWidget);
    OSCSenderWidget_leftWidget->setLayout(OSCSenderWidget_mainLeftLayout);
    OSCSenderWidget_mainLeftLayout->setContentsMargins(0,0,0,0);

    QLabel *OSCSenderWidget_label_1 = new QLabel(OSCSenderWidget_leftWidget);
    OSCSenderWidget_label_1->setText("Input OSC Command here: \nEntrez la commande OSC ici:");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_label_1);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_label_1, 1);

    QWidget *OSCSenderWidget_statusWidget = new QWidget(OSCSenderWidget_leftWidget);
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_statusWidget);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_statusWidget,1);
    OSCSenderWidget_statusWidget->setContentsMargins(0,0,0,0);

    QGridLayout *OSCSenderWidget_statusWidgetLayout = new QGridLayout();
    OSCSenderWidget_statusWidget->setLayout(OSCSenderWidget_statusWidgetLayout);
    OSCSenderWidget_statusWidgetLayout->setContentsMargins(0,0,0,0);

        QLabel *OSCSenderWidget_label_cbx = new QLabel(OSCSenderWidget_statusWidget);
        OSCSenderWidget_label_cbx->setText("Select Profile: ");
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_label_cbx, 0, 0);

        QComboBox *OSCSenderWidget_cbxProfile = new QComboBox(OSCSenderWidget_statusWidget);
        OSCSenderWidget_cbxProfile->addItem("General OSC Message");
        OSCSenderWidget_cbxProfile->addItem("General OSC Bundle");
        OSCSenderWidget_cbxProfile->addItem("Millumin Example");
        OSCSenderWidget_cbxProfile->addItem("vvvv 00_Examples_1-1");
        OSCSenderWidget_cbxProfile->addItem("vvvv 00_Examples_1-2");
        OSCSenderWidget_cbxProfile->addItem("vvvv 00_Examples_1-3");
        OSCSenderWidget_cbxProfile->addItem("vvvv 01_Examples_1-2");
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_cbxProfile, 0, 1);

        QLabel *OSCSenderWidget_label_port = new QLabel(OSCSenderWidget_statusWidget);
        OSCSenderWidget_label_port->setText("Output port: ");
        OSCSenderWidget_label_port->setAlignment(Qt::AlignRight);
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_label_port, 1, 1);

        QSpinBox *OSCSenderWidget_spbPort = new QSpinBox(OSCSenderWidget_statusWidget);
        OSCSenderWidget_spbPort->setRange(1,65535);
        OSCSenderWidget_spbPort->setValue(5000);
        OSCSenderWidget_spbPort->setDisplayIntegerBase(10000);
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_spbPort, 1, 2);





    OSCSenderWidget_commandTextEdit = new QTextEdit(OSCSenderWidget_leftWidget);
    OSCSenderWidget_commandTextEdit->setText("/action/launchOrStopColumn [1]\n/layer:Layer/media/speed [0.5]");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_commandTextEdit);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_commandTextEdit,4);

    OSCSenderWidget_sendButton = new QPushButton(OSCSenderWidget_leftWidget);
    OSCSenderWidget_sendButton->setText("Push to Send / Pousser pour envoyer");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_sendButton);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_sendButton,1);


    QLabel *OSCSenderWidget_label_2 = new QLabel(OSCSenderWidget_leftWidget);
    OSCSenderWidget_label_2->setText("Status: Broadcasting -> 255.255.255.255, out port 5000");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_label_2);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_label_2,1);

    QLabel *OSCSenderWidget_label_3 = new QLabel(this);
    OSCSenderWidget_label_3->setText("Attention:\n1:Multiple-line OSC Command Supported!\n\n2:Two OSC formats are supported:\nA:Separate parameters with spaces \n  -e.g:\n    /action/launchOrStopColumn 1\n    /selectedLayer/import \"path to file\" 7\n\nB:Separate parameters with commas  \n  -e.g:\n    /action/launchOrStopColumn [1]\n    /selectedLayer/import [\"path to file\",7]\n\n3:Do not use spaces and commas in layer names or file names!\n\n4: Use dots instead of commas for decimals!!!\n\n Any problem, contact YANG Mingcong");
    OSCSenderWidget_label_3->setWordWrap(true);
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_label_3);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_label_3, 5);

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






