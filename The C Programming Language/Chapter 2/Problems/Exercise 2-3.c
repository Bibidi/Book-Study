#include <stdio.h>
#include <string.h>
#include <ctype.h>

long htoi(char s[]);

int main(void) {
  printf("%ld\n", htoi("0xFFFF"));
}

long htoi(char s[]) {
  int i = 0;
  if (s[0] == '0' && tolower((unsigned char) s[1]) == 'x') {
    i = 2;
  }

  long res = 0;
  while (s[i] != '\0') {
    unsigned char uc = (unsigned char) s[i];
    long num;
    if (isdigit(uc)) num = uc - '0';
    else num = tolower(uc) - 'a' + 10;

    res = 16 * res + num;
    ++i;
  }

  return res;
}