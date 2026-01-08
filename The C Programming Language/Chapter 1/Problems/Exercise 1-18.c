#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int limit);
int delete_trailing_blank(char line[], int len);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    if (delete_trailing_blank(line, len) > 0)
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

int delete_trailing_blank(char line[], int len) {
  int i = len - 1;
  int has_newline = 0;

  if (i >= 0 && line[i] == '\n') {
    has_newline = 1;
    --i;
  }

  while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
     --i;

  if (i < 0) {
    line[0] = '\0';
    return 0;
  }

  len = i + 1;

  if (has_newline) {
    line[len] = '\n';
    ++len;
  }
  line[len] = '\0';

  return len;
}