#ifndef _DIV_TEST_HPP_
#define _DIV_TEST_HPP_


#include "gtest/gtest.h"
#include "div.hpp"
#include "testing_mocks.hpp"

TEST(DivTest, TwoPositives)
{
        Base* x = new PosOp();
	Base* y - new PosOp();
	Add* quotient = new Add(x,y);
	EXPECT_DOUBLE_EQ(1.0, quotient->evaluate());
	EXPECT_EQ("(5.6/5.6)", quotient->stringify());
}

TEST(DivTest, EvaluateNeg){
        Base *negten = new Op(-15);
        Base *negtwo = new Op(-2;
        Div *test = new Div(negten, negtwo);
        EXPECT_EQ(test->evaluate(), 7.5);
}

TEST(DivTest, EvaluateString){
        Base *num1 = new Op(15);
        Base *num2 = new Op(3);
        Div *test = new Div(num1, num2);
        EXPECT_EQ(test->evaluate(), 5);
}
#endif