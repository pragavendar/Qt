include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_abstractfacory.h \
    aftestfixure.h

SOURCES += \
        main.cpp \
    aftestfixure.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/AbstractFactory/release/ -lAbstractFactory
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/AbstractFactory/debug/ -lAbstractFactory
else:unix: LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/AbstractFactory/ -lAbstractFactory

INCLUDEPATH += $$PWD/../../../../DesignPatterns/Creational/AbstractFactory
DEPENDPATH += $$PWD/../../../../DesignPatterns/Creational/AbstractFactory
