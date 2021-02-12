QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    MyObjectDataCatch.cpp \
    MyObjectOSCCommandPool.cpp \
    MyObjectOSCNetCore.cpp \
    MyWidgetCommonModelA.cpp \
    MyWidgetDetailOfConstellations.cpp \
    MyWidget_0_Comete.cpp \
    MyWidget_1_CheminDansLesAsteroides.cpp \
    MyWidget_2_Nebuleuse.cpp \
    MyWidget_3_Soleils.cpp \
    MyWidget_4_TrouNoir.cpp \
    MyWidget_5_Spaceship.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    MainWindow.h \
    MyObjectDataCatch.h \
    MyObjectOSCCommandPool.h \
    MyObjectOSCNetCore.h \
    MyWidgetCommonLib.h \
    MyWidgetCommonModelA.h \
    MyWidgetDetailOfConstellations.h \
    MyWidget_0_Comete.h \
    MyWidget_1_CheminDansLesAsteroides.h \
    MyWidget_2_Nebuleuse.h \
    MyWidget_3_Soleils.h \
    MyWidget_4_TrouNoir.h \
    MyWidget_5_Spaceship.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    MyWidgetDetailOfConstellations.ui

DISTFILES += \
    images/constellations.png
