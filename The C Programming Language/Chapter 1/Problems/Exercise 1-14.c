#include <stdio.h>

#define N_DIGIT 10
#define N_ALPHA 26

main() {
  int c, i, j, ndigit[N_DIGIT], nalpha[N_ALPHA], other;

  for (i = 0; i < N_DIGIT; i++)
    ndigit[i] = 0;

  for (i = 0; i < N_ALPHA; i++)
    nalpha[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c >= 'a' && c <= 'z')
      ++nalpha[c - 'a'];
    else if (c >= 'A' && c <= 'Z')
      ++nalpha[c - 'A'];
    else
      ++other;
  }

  for (i = 0; i < N_DIGIT; i++) {
    printf("%d : ", i);
    for (j = 0; j < ndigit[i]; j++)
      putchar('#');
    putchar('\n');
  }

  for (i = 0; i < N_ALPHA; i++) {
    printf("%c : ", ('a' + i));
    for (j = 0; j < nalpha[i]; j++)
      putchar('#');
    putchar('\n');
  }

  printf("other : ");
  for (j = 0; j < other; j++)
    putchar('#');
  putchar('\n');
}