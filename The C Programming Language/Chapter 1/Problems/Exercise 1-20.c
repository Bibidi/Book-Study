#include <stdio.h>

#define TABSTOP 4

int main(void) {
  int c, i;

  i = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      int remain_space = TABSTOP - (i % TABSTOP);
      i = i + remain_space;
      while (remain_space > 0) {
        putchar(' ');
        --remain_space;
      }
    } else if (c == '\r') {
      // ignore
    } else if (c == '\n') {
      putchar('\n');
      i = 0;
    } else {
      putchar(c);
      ++i;
    }
  }

  return 0;
}