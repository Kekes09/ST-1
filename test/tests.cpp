#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrimeTest, TwoIsPrime) { EXPECT_TRUE(checkPrime(2)); }
TEST(CheckPrimeTest, OneIsNotPrime) { EXPECT_FALSE(checkPrime(1)); }
TEST(CheckPrimeTest, CompositeNumber) { EXPECT_FALSE(checkPrime(15)); }
TEST(CheckPrimeTest, LargePrime) { EXPECT_TRUE(checkPrime(7919)); }

TEST(NPrimeTest, FirstPrime) { EXPECT_EQ(nPrime(1), 2); }
TEST(NPrimeTest, FifthPrime) { EXPECT_EQ(nPrime(5), 11); }
TEST(NPrimeTest, TenthPrime) { EXPECT_EQ(nPrime(10), 29); }

TEST(NextPrimeTest, AfterFour) { EXPECT_EQ(nextPrime(4), 5); }
TEST(NextPrimeTest, AfterPrime) { EXPECT_EQ(nextPrime(11), 13); }
TEST(NextPrimeTest, FromZero) { EXPECT_EQ(nextPrime(0), 2); }

TEST(SumPrimeTest, SumUpTo10) { EXPECT_EQ(sumPrime(10), 17); }
TEST(SumPrimeTest, EmptyRange) { EXPECT_EQ(sumPrime(2), 0); }