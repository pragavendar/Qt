#ifndef AFTESTFIXURE_H
#define AFTESTFIXURE_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "guifactory.h"
#include <memory>

using namespace std;
class AFTestFixure : public ::testing::Test
{
protected:
    std::vector<IButton* > facoryButtons ;
    std::vector<std::unique_ptr<IButton> >Buttons;
    virtual void SetUp();
    virtual void TearDown();
};

#endif // AFTESTFIXURE_H
