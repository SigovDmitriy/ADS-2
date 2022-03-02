// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
if (n == 0) {
    return 1;
} else if (n == 1) {
    return value;
} else if (n % 2 == 0 ) {
    return pown(value * value, n/2);
} else {
    return pown(value * value, n/2)*value;
}
}

uint64_t fact(uint16_t n) {
if (n <= 1) {
  return 1;
} else {
  return n*fact(n-1);
}
}

double calcItem(double x, uint16_t n) {
return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
double exp = 1;
for (int g = 1; g <= count; g++) {
exp += pown(x, g)/fact(g);
}
return exp;
}

double sinn(double x, uint16_t count) {
double sin = 0;
for (int g = count; g > 0; g--) {
sin += pown((-1), g-1)*(pown(x, 2*g-1)/fact(2*g-1));
}
return sin;
}

double cosn(double x, uint16_t count) {
  double cos = 0;
  for (int g = count; g > 0; g--) {
    cos += pown((-1), g-1)*(pown(x, 2*g-2)/fact(2*g-2));
  }
return cos;
}
