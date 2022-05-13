#ifndef _RAND_TEST_HPP_
#define _RAND_TEST_HPP_

#include "gtest/gtest.h"
#include "rand.hpp"
#include "testing_mocks.hpp"

TEST(RandTest, RandEval)
{
	Rand* x = new Rand();
	EXPECT_TRUE(x->evaluate() >= 0 && test->evaluate() < 100);
}

TEST(RandTest, RandString)
{
    Rand* x = new Rand();
    EXPECT_TRUE((stod(x->stringify())) >= 0 && (stod(x->stringify()) < 100));
}

#endif