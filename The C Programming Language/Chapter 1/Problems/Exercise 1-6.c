#include <stdio.h>

main() {
  int c;

  while ((c = getchar()) != EOF) {
    printf("%d\n", c != EOF); // print 1
  }

  printf("%d\n", c != EOF); // print 0
}