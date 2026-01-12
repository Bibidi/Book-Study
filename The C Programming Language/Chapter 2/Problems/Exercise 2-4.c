#include <stdio.h>

void squeeze(char s[], const char t[]) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; ++i) {
    int ok = 1;
    for (int k = 0; t[k] != '\0'; ++k) {
      if (s[i] == t[k]) {
        ok = 0;
        break;
      }
    }

    if (ok) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

int main(void) {
  char s[] = "bacdbacbdacdbcabcabacbdbc";
  char t[] = "ab";

  squeeze(s, t);

  printf("%s\n", s);
  return 0;
}