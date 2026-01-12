#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void) {
  unsigned x = 0xFFFF;

  unsigned res = invert(x, 11, 8);
  printf("%x\n", res);
  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  unsigned mask = (~(~0U << n)) << (p - n + 1);
  return x ^ mask;
}