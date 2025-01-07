#ifndef OSCSENDERWIDGET_H
#define OSCSENDERWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <OSCNetCore.h>
#include <QString>
#include <QComboBox>
#include <QSpinBox>


QT_BEGIN_NAMESPACE
class OSCNetCore;
QT_END_NAMESPACE

class OSCSenderWidget : public QWidget
{
    Q_OBJECT

public:
    OSCSenderWidget(QWidget *parent = nullptr);
    ~OSCSenderWidget();

    OSCNetCore *OSCSenderWidget_OSCNetCore;

signals:
    void sendCommand(QString, int, bool);

private slots:
    void sendButton_Pressed();
    void on_cbxProfile_indexChanged(int);
    void on_spbPort_valueChanged(int);


private:
    QTextEdit *OSCSenderWidget_commandTextEdit;
    QSpinBox *OSCSenderWidget_spbPort;
    QLabel *OSCSenderWidget_label_2;
    QPushButton *OSCSenderWidget_sendButton;
    QStringList *OSCSenderWidget_data_cbxName;
    QStringList *OSCSenderWidget_data_ports;
    QStringList *OSCSenderWidget_data_oscCommand;
    QStringList *OSCSenderWidget_data_oscType;
    qint16 _cbxProfile_index;
    qint32 _sendPort;
    bool _sentModeBundle;

    void OSCSenderWidget_dataInitial();


};
#endif // OSCSENDERWIDGET_H
