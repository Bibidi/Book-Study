#include <stdio.h>

main() {
  int c;

  char pc = 's';
  while ((c = getchar()) != EOF) {
    if (pc != ' ' || c != ' ')
      putchar(c);
    pc = c;
  }
}