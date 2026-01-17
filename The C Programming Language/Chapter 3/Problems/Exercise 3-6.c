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

void itoa_w(int n, char s[], int w) {
  unsigned u = n;
  int i;

  if (n < 0) u = -u;

  i = 0;
  do {
    s[i++] = u % 10 + '0';
    w--;
  } while ((u /= 10) > 0);

  if (n < 0) {
    s[i++] = '-';
    w--;
  }

  while (w-- > 0) {
    s[i++] = ' ';
  }
  s[i] = '\0';
  reverse(s);
}

int main(void) {
  char s[1000];
  int n = -12345;
  int w = 16;
  itoa_w(n, s, w);
  printf("%s\n", s);
  return 0;
}