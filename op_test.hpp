#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include <string>
using namespace std;


TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
	Op* test = new Op(0);
	EXPECT_EQ(test->evaluate(), 0);

}

TEST(OpTest, OpEvaluateNeg){
	Op* test = new Op(-3);
	EXPECT_EQ(test->evaluate(), -3);

}

TEST(OpTest, OpEvaluateBigNeg){
        Op* test = new Op(-40);
        EXPECT_EQ(test->evaluate(), -40);

}

TEST(OpTest, OpStringNonZero){
	Op* test = new Op(2.5);
	string NonZero = "2.5";
	EXPECT_EQ(test->stringify(), NonZero);
}

TEST(OpTest, OpStringNeg){
	Op* test = new Op(-29);
	string Neg = "-29";
	EXPECT_EQ(test->stringify(), Neg);
}

TEST(OpTest, OpStringZero){
	Op* test = new Op(0);
	string Zero = "0";
	EXPECT_EQ(test->stringify(), Zero);
}

#endif //__OP_TEST_HPP__