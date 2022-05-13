#ifndef _POW_TEST_HPP_
#define _POW_TEST_HPP_

#include "gtest/gtest.h"
#include "pow.hpp"
#include "testing_mocks.hpp"

TEST(PowTest, PowerOfOne)
{
	Base* x = new PosOp();
	Base* y - new OneOp();
	Pow* e = new Pow(x,y);
	EXPECT_DOUBLE_EQ(5.6, e->evaluate());
	EXPECT_EQ("(5.6**1.0)", e->stringify());
}

TEST(PowTest, PowerOfZero)
{
        Base* x = new PosOp();
        Base* y - new OneOp();
        Pow* e = new Pow(x,y);
        EXPECT_DOUBLE_EQ(1.0, e->evaluate());
        EXPECT_EQ("(3 ** 1)", e->stringify());
}

TEST(PowTest, PowerOfThree)
{
        Base* x = new PosOp();
        Base* y - new OneOp();
        Pow* e = new Pow(x,y);
        EXPECT_DOUBLE_EQ(8, e->evaluate());
        EXPECT_EQ("(2 ** 3)", e->stringify());
}

TEST(PowTest,NegPowerOfTwo)
{
        Base* x = new PosOp();
        Base* y - new OneOp();
        Pow* e = new Pow(x,y);
        EXPECT_DOUBLE_EQ(4, e->evaluate());
        EXPECT_EQ("(-2 ** 2)", e->stringify());
}
#endif