#ifndef MYOBJECTOSCCOMMANDPOOL_H
#define MYOBJECTOSCCOMMANDPOOL_H

#include <QObject>

class MyObjectOSCCommandPool : public QObject
{
    Q_OBJECT
public:
    explicit MyObjectOSCCommandPool(QObject *parent = nullptr);

signals:

};

#endif // MYOBJECTOSCCOMMANDPOOL_H
