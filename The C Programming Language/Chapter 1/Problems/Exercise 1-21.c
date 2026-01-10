#include <stdio.h>

#define TABSTOP 4

void flush_blanks(int *col, int *blank_count);

int main(void) {
  int c;
  int col = 0;
  int blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks;
      continue;
    }

    flush_blanks(&col, &blanks);

    if (c == '\n') {
      putchar('\n');
      col = 0;
    } else if (c == '\t') {
      putchar('\t');
      col += TABSTOP - (col % TABSTOP);
    } else if (c == '\r') {
      // Do nothing
    } else {
      putchar(c);
      ++col;
    }
  }

  flush_blanks(&col, &blanks);
  return 0;
}

void flush_blanks(int *col, int *blank_count) {
  int b = *blank_count;
  if (b <= 0) return;

  while (b > 0) {
    int to_next = TABSTOP - (*col % TABSTOP);

    if (b >= to_next && to_next > 1) {
      putchar('\t');
      *col += to_next;
      b -= to_next;
    } else {
      putchar(' ');
      ++(*col);
      --b;
    }
  }

  *blank_count = 0;
}