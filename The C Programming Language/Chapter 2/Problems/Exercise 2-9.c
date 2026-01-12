#include <stdio.h>

/*
int bitcount(unsigned x) {
  int b; 
  for (b = 0; x != 0; x >>= 1)
    if (x & 01) 
      b++; 
  return b; 
  }
*/

/*
   In two's complement, subtracting 1 from a nonzero integer flips all the trailing
  0-bits to 1-bits and turn the rightmost 1-bit into 0. All bits to the left of that
  rightmost 1-bit remain unchaged. Therefore, x & (x - 1) clears exactly the
  rightmost 1-bit of x and leaves all other bits unchaged.
*/
int bitcount(unsigned x) {
  int b;

  for (b = 0; x != 0; x &= (x - 1)) {
    b++;
  }
  return b;
}

int main(void) {
  unsigned x = 0xFFFA;
  printf("%d\n", bitcount(x));
  return 0;
}