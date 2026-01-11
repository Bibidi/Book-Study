#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("signed char defined - MIN: %hhd, MAX: %hhd\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char defined - MIN: %hhu, MAX: %hhu\n", (unsigned char) 0, UCHAR_MAX);

  unsigned char uchar_max = ~(unsigned char)0;
  signed char char_max = uchar_max >> 1;
  signed char char_min = -char_max - 1;
  printf("signed char calculated - MIN: %hhd, MAX: %hhd\n", char_min, char_max);
  printf("unsigned char calculated - MIN: %hhu, MAX: %hhu\n\n", (unsigned char) 0, uchar_max);

  printf("signed short defined - MIN: %hd, MAX: %hd\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned short defined - MIN: %hu, MAX: %hu\n", (unsigned short) 0, USHRT_MAX);
  
  unsigned short ushrt_max = ~(unsigned short)0;
  short short_max = ushrt_max >> 1;
  short short_min = -short_max - 1;
  printf("signed short calculated - MIN: %hd, MAX: %hd\n", short_min, short_max);
  printf("unsigned short calculated - MIN: %hu, MAX: %hu\n\n", (unsigned short) 0, ushrt_max);

  printf("signed int defined - MIN: %d, MAX: %d\n", INT_MIN, INT_MAX);
  printf("unsigned int defined - MIN: %u, MAX: %u\n", 0U, UINT_MAX);

  unsigned int uint_max = ~0U;
  int int_max = uint_max >> 1;
  int int_min = -int_max - 1;
  printf("signed int calculated - MIN: %d, MAX: %d\n", int_min, int_max);
  printf("unsigned int calculated - MIN: %u, MAX: %u\n\n", 0U, uint_max);

  printf("signed long defined - MIN: %ld, MAX: %ld\n", LONG_MIN, LONG_MAX);
  printf("unsigned long defined - MIN: %lu, MAX: %lu\n", 0LU, ULONG_MAX);

  unsigned long ulong_max = ~0LU;
  long long_max = ulong_max >> 1;
  long long_min = -long_max - 1L;
  printf("signed long calculated - MIN: %ld, MAX: %ld\n", long_min, long_max);
  printf("unsigned long calculated - MIN: %lu, MAX: %lu\n\n", 0LU, ulong_max);


  printf("float defined - MIN: %f, MAX: %f\n", FLT_MIN, FLT_MAX);

  printf("double defined - MIN: %f, MAX: %f\n", DBL_MIN, DBL_MAX);
  return 0;
}