#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int limit);
void reverse(char line[]);

int main() {
  char line[MAXLINE];

  while (get_line(line, MAXLINE) > 0) {
    reverse(line);
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

void reverse(char line[]) {
  int start;
  int end;

  end = 0;
  while (line[end] != '\0')
    ++end;
  --end;
  
  if (line[end] == '\n')
    --end;

  for (start = 0; start < end; start++, end--) {
    char temp = line[start];
    line[start] = line[end];
    line[end] = temp;
  }
}