#include <stdio.h>
#include <limits.h>

unsigned rightrot(unsigned x, int n);

int main(void) {
  unsigned x = 0xABCD;

  unsigned res = rightrot(x, 8);
  printf("%x\n", res);
  return 0;
}

unsigned rightrot(unsigned x, int n) {
  unsigned W = sizeof(unsigned) * CHAR_BIT;
  unsigned r = (unsigned) n % W;
  if (r == 0) return x;
  return (x >> r) | (x << (W - r));
}