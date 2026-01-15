#include <stdio.h>

void escape(char s[], const char t[]) {
  int i, j, c;
  i = j = 0;
  while ((c = t[i++]) != '\0') {
    switch (c) {
      case '\n':
        s[j++] = '\\';
        s[j++] = 'n';
        break;
      case '\t':
        s[j++] = '\\';
        s[j++] = 't';
        break;
      default:
        s[j++] = c;
        break;
    }
  }
  s[j] = '\0';
}

int main(void) {
  char t[] = "adsflnewkl\tsdfnklwef\nfejfihaha dd\nsdf\nsdfhha";
  char s[1000];

  printf("%s\n", t);
  escape(s, t);
  printf("%s\n", s);
  return 0;
}