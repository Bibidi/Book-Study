#include <stdio.h>
#define MAXLINE (1000 + 1)
#define MINIMUM_LENGTH 80

int get_line(char line[], int limit);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    int visible;
    if (line[len - 1] == '\n')
      visible = len - 1;
    else
      visible = len;

    if (visible > MINIMUM_LENGTH)
      printf("%s", line);
  }

  return 0;
}

int get_line(char line[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  
  if (c == '\n') {
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';

  return i;
}