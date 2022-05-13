#ifndef _SUB_TEST_HPP_
#define _SUB_TEST_HPP_

#include "gtest/gtest.h"
#include "sub.hpp"
#include "testing_mocks.hpp"

TEST(SubTest, TwoPositives)
{
	Base* x = new PosOp();
	Base* y = new OneOp();
	Sub* ans = new Sub(x,y);
	EXPECT_DOUBLE_EQ(4.6, ans->evaluate());
	EXPECT_EQ("(5.6-1.0)", ans->stringify());
}

TEST(SubTest, TwoNeg)
{
        Base* x = new PosOp();
        Base* y = new OneOp();
        Sub* ans = new Sub(x,y);
        EXPECT_DOUBLE_EQ(3.0, ans->evaluate());
        EXPECT_EQ("(-1.7 - - 4.7)", ans->stringify());
}

TEST(SubTest, TwoNeg2)
{
        Base* x = new PosOp();
        Base* y = new OneOp();
        Sub* ans = new Sub(x,y);
        EXPECT_DOUBLE_EQ(-2.5, ans->evaluate());
        EXPECT_EQ("(-4.0 - - 1.5)", ans->stringify());
}
#endif