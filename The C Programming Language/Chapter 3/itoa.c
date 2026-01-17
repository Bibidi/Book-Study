#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
  int l = 0;
  int r = strlen(s) - 1;

  while (l < r) {
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;
    l++;
    r--;
  }
}

void i_toa(int n, char s[]) {
  int i, sign;

  if ((sign = n) < 0)
    n = -n;

  i = 0;
  do {
    s[i++] = (n % 10) + '0';
  } while ((n /= 10) > 0);

  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

int main(void) {
  char s[1000];
  int n = 12367890;
  i_toa(n, s);
  printf("%s\n", s);
  return 0;
}