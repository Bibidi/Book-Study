#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

void print_fahr_to_celsius(float lower, float upper, float step);

int main() {
  print_fahr_to_celsius(LOWER, UPPER, STEP);
  return 0;
}

void print_fahr_to_celsius(float lower, float upper, float step) {
  float fahr;
  for (fahr = lower; fahr <= upper; fahr += step) {
    printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}