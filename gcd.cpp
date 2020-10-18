#include "gcd.h"

int GCD::gcd(int a, int b)
{
  int c = 0;
  while (b)
  {
    c = a % b;
    a = b;
    b = c;
  }
  return a < 0 ? -a : a;
}
