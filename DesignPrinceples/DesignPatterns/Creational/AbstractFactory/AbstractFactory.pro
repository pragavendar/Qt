# create common interface for famlies of related or dependant object with specifing concreate classes
# * the Client class that requires ProductA and ProductB objects doesn't instantiate the ProductA1
# and ProductB1 classes directly. Instead, the Client refers to the AbstractFactory interface
# for creating objects, which makes the Client independent of how the objects are created
#(which concrete classes are instantiated). The Factory1 class implements the AbstractFactory
# interface by instantiating the ProductA1 and ProductB1 classes.The UML sequence diagram
#shows the run-time interactions: The Client object calls createProductA() on the
#Factory1 object, which creates and returns a ProductA1 object. Thereafter,
#the Client calls createProductB() on Factory1, which creates and returns a ProductB1 object
TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

RESOURCES += \
    r_a_f_resorce.qrc

HEADERS += \
    guifactory.h
