#include <stdio.h>
#include <ctype.h>

double atof(char s[]) {
  double val, power, epower;
  int i, sign, esign, exp;

  for (i = 0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
  
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }
  if (s[i] != 'e' && s[i] != 'E') return sign * val / power;

  i++;
  esign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;

  for (exp = 0; isdigit(s[i]); i++)
    exp = 10 * exp + (s[i] - '0');

  for (epower = 1.0; exp > 0; exp--)
    epower = (esign > 0) ? epower * 10 : epower / 10;

  return sign * val / power * epower;
}

int main(void) {
  char s[] = "123.45e-6";
  printf("%f\n", atof(s));
  return 0;
}