#include <stdio.h>

int any(const char s[], const char t[]) {
  for (int i = 0; s[i] != '\0'; ++i) {
    for (int j = 0; t[j] != '\0'; ++j) {
      if (s[i] == t[j])
        return i;
    }
  }

  return -1;
}

int main(void) {
  char s[] = "fjwk enfl zndk lfjk ldsj frhe ugbu ontb";
  char t[] = "ab";
  
  int p = any(s, t);
  if (p >= 0) printf("%d, %c\n", p, s[p]);
  else printf("%d\n", p);

  return 0;
}