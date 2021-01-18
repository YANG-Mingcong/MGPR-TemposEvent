#include "OSCSenderWidget.h"
/**
 * @brief OSCSenderWidget::OSCSenderWidget
 * @param parent
 * @author YANG Mingcong
 * @date 2021-JAN-18
 * @version 0.1.1 Alpha
 */

OSCSenderWidget::OSCSenderWidget(QWidget *parent)
    : QWidget(parent)
{
    this->OSCSenderWidget_dataInitial();

    OSCSenderWidget_OSCNetCore = new OSCNetCore();

    QHBoxLayout *OSCSenderWidget_mainLayout = new QHBoxLayout(this);
    this->setLayout(OSCSenderWidget_mainLayout);
    this->setWindowTitle("TEMPO - OSC Sender - for Millumin & vvvv (V0.1.1_Alpha)");
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
        for (qint16 i = 0; OSCSenderWidget_data_cbxName->size() > i; i++ )
        {
            OSCSenderWidget_cbxProfile->addItem(OSCSenderWidget_data_cbxName->at(i));
        }
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_cbxProfile, 0, 1);

        QLabel *OSCSenderWidget_label_port = new QLabel(OSCSenderWidget_statusWidget);
        OSCSenderWidget_label_port->setText("Output port: ");
        OSCSenderWidget_label_port->setAlignment(Qt::AlignRight);
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_label_port, 1, 1);

        OSCSenderWidget_spbPort = new QSpinBox(OSCSenderWidget_statusWidget);
        OSCSenderWidget_spbPort->setRange(1,65535);
        OSCSenderWidget_spbPort->setValue(5000);
        OSCSenderWidget_statusWidgetLayout->addWidget(OSCSenderWidget_spbPort, 1, 2);


    OSCSenderWidget_commandTextEdit = new QTextEdit(OSCSenderWidget_leftWidget);
    OSCSenderWidget_commandTextEdit->setText("/action/launchOrStopColumn [1]");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_commandTextEdit);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_commandTextEdit,4);

    OSCSenderWidget_sendButton = new QPushButton(OSCSenderWidget_leftWidget);
    OSCSenderWidget_sendButton->setText("Push to Send / Pousser pour envoyer");
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_sendButton);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_sendButton,1);


    OSCSenderWidget_label_2 = new QLabel(OSCSenderWidget_leftWidget);
    OSCSenderWidget_label_2->setText(tr("Status: Broadcasting, Mode: Message, out port %1")
                                     .arg(OSCSenderWidget_data_ports->at(_cbxProfile_index).toInt()));
    OSCSenderWidget_mainLeftLayout->addWidget(OSCSenderWidget_label_2);
    OSCSenderWidget_mainLeftLayout->setStretchFactor(OSCSenderWidget_label_2,1);

    QLabel *OSCSenderWidget_label_3 = new QLabel(this);
    OSCSenderWidget_label_3->setText("Attention:\n1:Multiple-line OSC Command Supported!\n\n2:Two OSC formats are supported:\nA:Separate parameters with spaces \n  -e.g:\n    /action/launchOrStopColumn 1\n    /selectedLayer/import \"path to file\" 7\n\nB:Separate parameters with commas  \n  -e.g:\n    /action/launchOrStopColumn [1]\n    /selectedLayer/import [\"path to file\",7]\n\n3:Do not use spaces and commas in layer names or file names!\n\n4: Use dots instead of commas for decimals!!!\n\n Any problem, contact YANG Mingcong");
    OSCSenderWidget_label_3->setWordWrap(true);
    OSCSenderWidget_mainLayout->addWidget(OSCSenderWidget_label_3);
    OSCSenderWidget_mainLayout->setStretchFactor(OSCSenderWidget_label_3, 5);

    connect(OSCSenderWidget_sendButton, SIGNAL(pressed()),
            this, SLOT(sendButton_Pressed()));

    connect(OSCSenderWidget_cbxProfile, SIGNAL(currentIndexChanged(int)),
            this, SLOT(on_cbxProfile_indexChanged(int)));

    connect(OSCSenderWidget_spbPort, SIGNAL(valueChanged(int)),
            this, SLOT(on_spbPort_valueChanged(int)));

    connect(OSCSenderWidget_spbPort, QOverload<int>::of(&QSpinBox::valueChanged),
        [=](int i){ _sendPort = i; });

    connect(this, SIGNAL(sendCommand(QString,int,bool)),
            OSCSenderWidget_OSCNetCore, SLOT(sendDatagram(QString,int,bool)));

}

OSCSenderWidget::~OSCSenderWidget()
{
}

void OSCSenderWidget::sendButton_Pressed()
{
    emit this->sendCommand(OSCSenderWidget_commandTextEdit->toPlainText(), OSCSenderWidget_spbPort->value(), _sentModeBundle);
}

void OSCSenderWidget::OSCSenderWidget_dataInitial()
{
    OSCSenderWidget_data_cbxName = new QStringList();

    OSCSenderWidget_data_cbxName->append("General OSC Message");        //index 0
    OSCSenderWidget_data_cbxName->append("General OSC Bundle");         //index 1
    OSCSenderWidget_data_cbxName->append("Millumin Example");           //index 2
    OSCSenderWidget_data_cbxName->append("vvvv 00_Examples_1-1");       //index 3
    OSCSenderWidget_data_cbxName->append("vvvv 00_Examples_1-2");       //index 4
    OSCSenderWidget_data_cbxName->append("vvvv 00_Examples_1-3");       //index 5
    OSCSenderWidget_data_cbxName->append("vvvv 01_Examples_2");       //index 6

    OSCSenderWidget_data_oscType = new QStringList();
    OSCSenderWidget_data_oscType->append("Message");
    OSCSenderWidget_data_oscType->append("Bundle");
    OSCSenderWidget_data_oscType->append("Message");
    OSCSenderWidget_data_oscType->append("Bundle");
    OSCSenderWidget_data_oscType->append("Bundle");
    OSCSenderWidget_data_oscType->append("Bundle");
    OSCSenderWidget_data_oscType->append("Bundle");

    OSCSenderWidget_data_ports = new QStringList();
    OSCSenderWidget_data_ports->append("5000");
    OSCSenderWidget_data_ports->append("4450");
    OSCSenderWidget_data_ports->append("5000");
    OSCSenderWidget_data_ports->append("55551");
    OSCSenderWidget_data_ports->append("55552");
    OSCSenderWidget_data_ports->append("55553");
    OSCSenderWidget_data_ports->append("4450");

    OSCSenderWidget_data_oscCommand = new QStringList();
    OSCSenderWidget_data_oscCommand->append("");
    OSCSenderWidget_data_oscCommand->append("");
    OSCSenderWidget_data_oscCommand->append("/action/launchOrStopColumn [1]\n/layer:Layer/media/time [\"00:00:10.400\"]");
    OSCSenderWidget_data_oscCommand->append("/vvvv 18.03");
    OSCSenderWidget_data_oscCommand->append("/vvvv/vector 21.3 12.5 17.2");
    OSCSenderWidget_data_oscCommand->append("/vvvv/vector 18.3 1.35 33.2\n/vvvv/date 2021.01.18-20:11:30");
    OSCSenderWidget_data_oscCommand->append("/right/id 3\n/right/color |0.5165,0.8876,0.5543,0.9943|\n/right/info 0.502 0.374 MGPR_TEMPO");

    _cbxProfile_index = 0; //as default
    _sentModeBundle = false;
    _sendPort = 5000;
}

void OSCSenderWidget::on_cbxProfile_indexChanged(int _i)
{
    _cbxProfile_index = _i;

    OSCSenderWidget_commandTextEdit->setText(OSCSenderWidget_data_oscCommand->at(_i));

    _sendPort = OSCSenderWidget_data_ports->at(_i).toInt();
    OSCSenderWidget_spbPort->setValue(_sendPort);

    if("Bundle" == OSCSenderWidget_data_oscType->at(_i))
    {
        _sentModeBundle = true;
        OSCSenderWidget_label_2->setText(tr("Status: Broadcasting, Mode: Bundle, out port %1")
                                         .arg(OSCSenderWidget_data_ports->at(_i).toInt()));
    }
    else
    {
        _sentModeBundle = false;
        OSCSenderWidget_label_2->setText(tr("Status: Broadcasting, Mode: Message, out port %1")
                                         .arg(OSCSenderWidget_data_ports->at(_i).toInt()));
    }



}

void OSCSenderWidget::on_spbPort_valueChanged(int _p)
{
    _sendPort = _p;
    if(_sentModeBundle)
    {
        OSCSenderWidget_label_2->setText(tr("Status: Broadcasting, Mode: Bundle, out port %1")
                                         .arg(_p));
    }
    else
    {
        OSCSenderWidget_label_2->setText(tr("Status: Broadcasting, Mode: Message, out port %1")
                                         .arg(_p));
    }

}


