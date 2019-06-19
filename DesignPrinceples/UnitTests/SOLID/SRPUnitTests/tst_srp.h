#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(SRP, SRP1)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));

    EXPECT_EQ(1, 2);
    ASSERT_THAT(1, Eq(1));
}
