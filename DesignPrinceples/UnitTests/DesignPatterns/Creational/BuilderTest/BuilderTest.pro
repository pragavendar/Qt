include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_bilder.h

SOURCES += \
        main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/Builder/release/ -lBuilder
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/Builder/debug/ -lBuilder
else:unix:!macx: LIBS += -L$$OUT_PWD/../../../../DesignPatterns/Creational/Builder/ -lBuilder

INCLUDEPATH += $$PWD/../../../../DesignPatterns/Creational/Builder
DEPENDPATH += $$PWD/../../../../DesignPatterns/Creational/Builder
