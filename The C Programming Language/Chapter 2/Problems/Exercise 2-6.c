#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void) {
  unsigned x = 0xFFFF;
  unsigned y = 0xBA;

  unsigned res = setbits(x, 11, 8, y);
  printf("%x\n", res);
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  int shift = p - n + 1;
  unsigned ybits = (y & ~(~0U << n)) << shift;
  unsigned mask = (~(~0U << n)) << shift;
  return (x & ~ mask) | ybits;
}