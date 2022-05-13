#ifndef _ADD_TEST_HPP_
#define _ADD_TEST_HPP_

#include "gtest/gtest.h"
#include "add.hpp"
#include "testing_mocks.hpp"

TEST(AddTest, TwoPositives)
{
	Base* x = new PosOp();
	Base* y = new PosOp();
	Add* sum = new Add(x,y);
	EXPECT_DOUBLE_EQ(11.2, sum->evaluate());
	EXPECT_EQ("(5.6+5.6)", sum->stringify());
}

TEST(AddTest, TwoNegs)
{
        Base* x = new PosOp();
        Base* y = new PosOp();
        Add* sum = new Add(x,y);
        EXPECT_DOUBLE_EQ(-4.55, sum->evaluate());
        EXPECT_EQ("(-4 + -0.55)", sum->stringify());
}

TEST(AddTest, OnePosOneNeg)
{
        Base* x = new PosOp();
        Base* y = new PosOp();
        Add* sum = new Add(x,y);
        EXPECT_DOUBLE_EQ(5.20, sum->evaluate());
        EXPECT_EQ("(5.40 + - 0.20)", sum->stringify());
}
#endif