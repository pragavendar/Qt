#include "aftestfixure.h"
void AFTestFixure::SetUp()
{

    std::unique_ptr<IAbstractFactory> factory = std::make_unique<Buttonfactory>();

    facoryButtons.push_back(factory->getButton(OSTYPE::WINDOWS));
    facoryButtons.push_back(factory->getButton(OSTYPE::LINUX));
    facoryButtons.push_back(factory->getButton(OSTYPE::OSX));
    Buttons.push_back(std::make_unique<WinButton>());
    Buttons.push_back(std::make_unique<LinuxButton>());
    Buttons.push_back(std::make_unique<OSXButton>());
}

void AFTestFixure::TearDown()
{
    for(auto &p : facoryButtons){
        delete p;
    }
}
