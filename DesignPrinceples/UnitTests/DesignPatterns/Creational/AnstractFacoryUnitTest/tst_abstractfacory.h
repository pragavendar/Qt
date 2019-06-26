#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "guifactory.h"
#include "aftestfixure.h"

using namespace testing;

TEST(AbstractFacory, Button)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}
TEST_F(AFTestFixure,ButtonsTest){
    //Arrangement
    //act
    //assertion
    for (int i =0;i < 3 ;i++) {
        std::string cmp1 = Buttons.at(i)->print();
        std:string cmp2 = facoryButtons.at(i)->print();
        EXPECT_STREQ(cmp1.c_str(),cmp2.c_str());
    }

}
