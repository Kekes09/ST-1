// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTest, CheckPrimeSmallNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(PrimeTest, CheckPrimeMediumNumbers) {
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(17));
    EXPECT_TRUE(checkPrime(19));
    EXPECT_TRUE(checkPrime(23));
    EXPECT_TRUE(checkPrime(29));
    EXPECT_TRUE(checkPrime(31));
    EXPECT_TRUE(checkPrime(37));
    EXPECT_FALSE(checkPrime(21));
    EXPECT_FALSE(checkPrime(25));
    EXPECT_FALSE(checkPrime(27));
    EXPECT_FALSE(checkPrime(33));
    EXPECT_FALSE(checkPrime(35));
    EXPECT_FALSE(checkPrime(39));
}

TEST(PrimeTest, CheckPrimeLargeNumbers) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_TRUE(checkPrime(101));
    EXPECT_TRUE(checkPrime(103));
    EXPECT_TRUE(checkPrime(107));
    EXPECT_TRUE(checkPrime(109));
    EXPECT_TRUE(checkPrime(113));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(102));
    EXPECT_FALSE(checkPrime(104));
    EXPECT_FALSE(checkPrime(105));
    EXPECT_FALSE(checkPrime(106));
    EXPECT_FALSE(checkPrime(108));
    EXPECT_FALSE(checkPrime(110));
    EXPECT_FALSE(checkPrime(111));
    EXPECT_FALSE(checkPrime(112));
}

TEST(PrimeTest, CheckPrimeVeryLargeNumbers) {
    EXPECT_TRUE(checkPrime(997));
    EXPECT_TRUE(checkPrime(1009));
    EXPECT_TRUE(checkPrime(1013));
    EXPECT_TRUE(checkPrime(7919));
    EXPECT_TRUE(checkPrime(104729));
    EXPECT_FALSE(checkPrime(1000));
    EXPECT_FALSE(checkPrime(10000));
    EXPECT_FALSE(checkPrime(7918));
    EXPECT_FALSE(checkPrime(7917));
    EXPECT_FALSE(checkPrime(104728));
}

TEST(PrimeTest, NthPrimeSmallValues) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
    EXPECT_EQ(nPrime(9), 23);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(PrimeTest, NthPrimeMediumValues) {
    EXPECT_EQ(nPrime(11), 31);
    EXPECT_EQ(nPrime(12), 37);
    EXPECT_EQ(nPrime(13), 41);
    EXPECT_EQ(nPrime(14), 43);
    EXPECT_EQ(nPrime(15), 47);
    EXPECT_EQ(nPrime(16), 53);
    EXPECT_EQ(nPrime(17), 59);
    EXPECT_EQ(nPrime(18), 61);
    EXPECT_EQ(nPrime(19), 67);
    EXPECT_EQ(nPrime(20), 71);
}

TEST(PrimeTest, NthPrimeLargeValues) {
    EXPECT_EQ(nPrime(25), 97);
    EXPECT_EQ(nPrime(30), 113);
    EXPECT_EQ(nPrime(40), 173);
    EXPECT_EQ(nPrime(50), 229);
    EXPECT_EQ(nPrime(100), 541);
}

TEST(PrimeTest, NthPrimeSpecialCases) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(PrimeTest, NextPrimeSmallNumbers) {
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(9), 11);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(PrimeTest, NextPrimeMediumNumbers) {
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(12), 13);
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(15), 17);
    EXPECT_EQ(nextPrime(16), 17);
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(18), 19);
    EXPECT_EQ(nextPrime(19), 23);
    EXPECT_EQ(nextPrime(20), 23);
    EXPECT_EQ(nextPrime(21), 23);
    EXPECT_EQ(nextPrime(22), 23);
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(24), 29);
    EXPECT_EQ(nextPrime(25), 29);
}

TEST(PrimeTest, NextPrimeLargeNumbers) {
    EXPECT_EQ(nextPrime(97), 101);
    EXPECT_EQ(nextPrime(98), 101);
    EXPECT_EQ(nextPrime(99), 101);
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(101), 103);
    EXPECT_EQ(nextPrime(102), 103);
    EXPECT_EQ(nextPrime(103), 107);
    EXPECT_EQ(nextPrime(104), 107);
    EXPECT_EQ(nextPrime(105), 107);
    EXPECT_EQ(nextPrime(106), 107);
    EXPECT_EQ(nextPrime(107), 109);
    EXPECT_EQ(nextPrime(108), 109);
    EXPECT_EQ(nextPrime(109), 113);
}

TEST(PrimeTest, SumPrimeLargeBounds) {
    EXPECT_EQ(sumPrime(50), 328);
    EXPECT_EQ(sumPrime(100), 1060);
}

TEST(PrimeTest, SumPrimeVeryLargeBounds) {
    EXPECT_EQ(sumPrime(2000000), 142913828922ULL);
}