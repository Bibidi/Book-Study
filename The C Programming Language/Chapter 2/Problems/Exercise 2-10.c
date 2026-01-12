#include <stdio.h>

/*
int lower(int c) {
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}
*/

int lower(int c) {
  return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

int main(void) {
  char s[] = "ABCD EFGH\n";
  for (int i = 0; s[i] != '\0'; i++) {
    s[i] = lower(s[i]);
  }
  printf("%s", s);
  return 0;
}