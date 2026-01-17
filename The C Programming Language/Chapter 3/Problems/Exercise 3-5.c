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

char digit(int x) {
  return x < 10 ? x + '0' : 'A' + (x - 10);
}

void itoa_w(int n, char s[], int b) {
  if (b < 2 || b > 36) {
    s[0] = '\0';
    return;
  }

  unsigned u = n;
  int i;

  if (n < 0) u = -u;

  i = 0;
  do {
    s[i++] = digit(u % b);
  } while ((u /= b) > 0);

  if (n < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

int main(void) {
  char s[1000];
  int n = -255;
  int b = 16;
  itoa_w(n, s, b);
  printf("%s\n", s);
  return 0;
}