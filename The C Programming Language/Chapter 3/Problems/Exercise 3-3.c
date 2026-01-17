#include <stdio.h>
#include <ctype.h>

int is_shorthand(char a, char b) {
  if (isdigit(a) && isdigit(b) && a < b) return 1;
  if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z' && a < b) return 1;
  if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z' && a < b) return 1;
  return 0;
}

void expand(const char s[], char t[]) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++) {
    if (s[i] == '-' && i > 0 && s[i + 1] != '\0' && is_shorthand(s[i - 1], s[i + 1])) {
      int start = s[i - 1] + 1;
      int end = s[i + 1];
      while (start <= end)
        t[j++] = start++;
      i++;
    } else {
      t[j++] = s[i];
    }
  }
  t[j] = '\0';
}

int main(void) {
  char s1[] = "abcd, k-a-b-c-d-, hahaa-z0-9A-Z-";
  char s2[1000];

  expand(s1, s2);
  printf("%s\n", s2);
  return 0;
}