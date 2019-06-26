#ifndef GUIFACTORY_H
#define GUIFACTORY_H
/*The method createButton on the GUIFactory interface returns objects of type Button.
 * What implementation of Button is returned depends on which implementation of
 * GUIFactory is handling the method call*/

/*
 *It should render a button in either a Windows style or Mac OS X style depending on which kind of
 *factory was used. Note that the Application has no idea what kind of GUIFactory it is given or
 *even what kind of Button that factory creates.
 *
 */
#include <iostream>

enum OSTYPE{
    WINDOWS,
    OSX,
    LINUX
};

class IButton{
public:
    virtual std::string print() = 0;
    virtual ~IButton(){}
};

class WinButton : public IButton{
public:
    inline std::string print()override {
        std::cout  <<  "Windows Button" << std::endl;
        return std::string("Windows");
    }
};

class OSXButton : public IButton{
public:
    std::string print() override{
        std::cout  <<  "OSX Button" << std::endl;
        return std::string("OSX");
    }
};

class LinuxButton : public IButton{
public:
    inline std::string print() override{
        std::cout  <<  "Linux Button" << std::endl;
        return std::string("Linux");
    }
};

class IAbstractFactory{
public:
    inline virtual IButton *getButton(OSTYPE  type) = 0;
    virtual ~IAbstractFactory(){}
};

class Buttonfactory : public IAbstractFactory{
   public:
    IButton *getButton(OSTYPE type) override{
        switch (type) {
        case OSTYPE::WINDOWS:
            return new WinButton();
        case OSTYPE::OSX:
            return new OSXButton();
        case OSTYPE::LINUX:
            return new LinuxButton();
        default:
            return new WinButton();

        }
    }
};

#endif // GUIFACTORY_H
