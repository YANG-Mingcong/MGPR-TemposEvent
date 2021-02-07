#ifndef MYWIDGETCOMMONLIB_H
#define MYWIDGETCOMMONLIB_H

#include <QGridLayout>
#include <QLabel>
#include <QSpinBox>
#include <QLine>
#include <QTextEdit>
#include <MyObjectOSCNetCore.h>
#include <MyObjectOSCCommandPool.h>
#include <QThread>
#include <MyWidgetCommonModelA.h>

#define _PORT_OF_MILLUMIN_ 5000;
#define _PORT_OF_VVVV_ 4500;
class MyWidgetCommonLib
{
public:
    MyWidgetCommonLib();

    MyObjectOSCNetCore *myGloble_OSCNetCore;
    MyObjectOSCCommandPool *myGloble_OSCCommandPool;


};

#endif // MYWIDGETCOMMONLIB_H
