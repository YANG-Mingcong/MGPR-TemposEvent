#include "MainWindow.h"
#include "MyWidget_0_Comete.h"
#include "MyWidgetCommonModelA.h"
#include "MyWidget_1_CheminDansLesAsteroides.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    MyWidget_0_Comete w;
//    MyWidget_1_CheminDansLesAsteroides w;
//    MyWidgetCommonModelA w;
//    MyWidgetDetailOfConstellations w;
    w.show();
    return a.exec();
}
