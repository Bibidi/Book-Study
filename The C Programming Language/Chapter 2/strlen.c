#include <stdio.h>

int str_len(char s[]);

int main(void) {
  printf("%d\n", str_len("haha!"));
}

int str_len(char s[]) {
  int i = 0;

  while (s[i] != '\0')
    ++i;
  return i;
}