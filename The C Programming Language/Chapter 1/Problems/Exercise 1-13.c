#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN  1
#define OUT 0

main() {
  int c, i, j, n_word_len[MAX_WORD_LENGTH], state, cur_word_len, max_word_height;

  state = OUT;
  cur_word_len = 0;
  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    n_word_len[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN)
        ++n_word_len[cur_word_len];
      cur_word_len = 0;
      state = OUT;
    } else {
      ++cur_word_len;
      state = IN;
    }
  }

  if (cur_word_len > 0)
    ++n_word_len[cur_word_len];

  // print horizontally
  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    printf("%2d : ", i);
    for (j = 0; j < n_word_len[i]; j++)
      putchar('#');
    putchar('\n');
  }
  printf("\n\n");

  // print vertically
  max_word_height = 0;
  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    if (n_word_len[i] > max_word_height)
      max_word_height = n_word_len[i];
  }

  for (j = max_word_height; j > 0; j--) {
    for (i = 0; i < MAX_WORD_LENGTH; i++) {
      if (n_word_len[i] >= j)
        printf("  #");
      else
        printf("   ");
    }
    putchar('\n');
  }
  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    printf("%3d", i);
  }
}