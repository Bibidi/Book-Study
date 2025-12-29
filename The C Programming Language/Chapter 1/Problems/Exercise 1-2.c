#include <stdio.h>

int main() {
  printf("Hello\cWorld\n");
  // Result: HellocWorld

  printf("Hello World\n\n");
  // Result: Hello World
}

/*
For an invalid secape sequence, the C standard says that the behavior is
implementation-defined or undefined.

In my case, when an invalid escape sequence appears between characters, my C program removes
only the backslash.
However, when an invalid escape sequence appears at the end of the string, the entire invalid
sequecne is dropped.
*/