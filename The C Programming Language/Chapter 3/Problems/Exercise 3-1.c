#include <stdio.h>

/*
  The original version returns some occurrence of x (not necessarily the first)
  because it stops as soon as it finds a match, whereas my version returns the
  leftmost occurrence.

  My version performs only one comparison inside the loop and does the equality
  check once after the loop, which can reduce the number of comparisons per
  iteration.
*/
int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n;
  while (low < high) {
    mid = (low + high) / 2;
    if (x > v[mid])
      low = mid + 1;
    else
      high = mid;
  }

  return (high < n && v[high] == x) ? high : -1;
}

int main(void) {
  int x = 1200;
  int v[] = {1, 3, 5, 6, 7, 11, 100, 1200, 1500};
  int n = 9;

  printf("%d\n", binsearch(x, v, n));
}