#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int main(void) {
  int x = 1200;
  int v[] = {1, 3, 5, 6, 7, 11, 100, 1200, 1500};
  int n = 9;

  printf("%d\n", binsearch(x, v, n));
}