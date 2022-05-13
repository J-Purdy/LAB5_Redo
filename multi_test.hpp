#ifndef _MULTI_TEST_HPP_
#define _MULTI_TEST_HPP_

#include "gtest/gtest.h"
#include "mult.hpp"
#include "testing_mocks.hpp"

TEST(MultTest, TwoPositives)
{
	Base* x = new PosOp();
	Base* y - new PosOp();
	Add* sum = new Add(x,y);
	EXPECT_DOUBLE_EQ(31.36, sum->evaluate());
	EXPECT_EQ("(5.6*5.6)", sum->stringify());
}

TEST(MultTest, EvaluateNeg){
        Base *num1 = new Op(-6);
        Base *num2 = new Op(2);
        Base *test = new Mult(num1, num2);
        EXPECT_EQ(test->evaluate(), -12);
}

TEST(MultTest, EvaluateZero){
        Base *num1 = new Op(2);
        Base *num2 = new Op(0);
        Base *test = new Mult(num1, num2);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, String){
        Base *num1 = new Op(7);
        Base *num2 = new Op(2);
        Base *test = new Mult(num1, num2);
        EXPECT_EQ(test->stringify(),"(7*2)");
}
#endif