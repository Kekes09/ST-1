// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrimeTest, Ispr1) { EXPECT_TRUE(checkPrime(3)); }
TEST(CheckPrimeTest, Ispr2) { EXPECT_FALSE(checkPrime(4)); }
TEST(CheckPrimeTest, Ispr3) { EXPECT_FALSE(checkPrime(28)); }
TEST(CheckPrimeTest, Ispr4) { EXPECT_TRUE(checkPrime(97)); }

TEST(NPrimeTest, NOfpr1) { EXPECT_EQ(nPrime(1), 2); }
TEST(NPrimeTest, NOfpr2) { EXPECT_EQ(nPrime(7), 17); }
TEST(NPrimeTest, NOfpr3) { EXPECT_EQ(nPrime(15), 47); }

TEST(NextPrimeTest, nextpr1) { EXPECT_EQ(nextPrime(10), 11); }
TEST(NextPrimeTest, nextpr2) { EXPECT_EQ(nextPrime(13), 17); }
TEST(NextPrimeTest, nextpr3) { EXPECT_EQ(nextPrime(100), 101); }

TEST(SumPrimeTest, sum1) { EXPECT_EQ(sumPrime(20), 77); }
TEST(SumPrimeTest, sum2) { EXPECT_EQ(sumPrime(3), 2); }
