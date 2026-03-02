// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t znach) {
  if (znach <= 1) return false;
  if (znach <= 3) return true;
  if (znach % 2 == 0 || znach % 3 == 0) return false;
  
  for (uint64_t i = 5; i * i <= znach; i += 6) {
    if (znach % i == 0 || znach % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;
  if (n == 1) return 2;
  
  uint64_t count = 1; 
  uint64_t num = 3;
  
  while (count < n) {
    if (checkPrime(num)) {
      count++;
    }
    num += 2;
  }
  
  return num - 2;  
}

uint64_t nextPrime(uint64_t znach) {
  uint64_t num = znach + 1;
  if (num <= 2) return 2;
  if (num % 2 == 0) num++;
  while (!checkPrime(num)) {
    num += 2;  
  }
  
  return num;
}

uint64_t sumPrime(uint64_t gran) {
  if (gran <= 2) return 0;
  
  uint64_t sum = 2;
  for (uint64_t i = 3; i < gran; i += 2) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  
  return sum;
}