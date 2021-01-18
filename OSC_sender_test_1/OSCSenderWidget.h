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
    void sendCommand(QString);

private slots:
    void sendButton_Pressed();

private:
    QTextEdit *OSCSenderWidget_commandTextEdit;
    QPushButton *OSCSenderWidget_sendButton;


};
#endif // OSCSENDERWIDGET_H
