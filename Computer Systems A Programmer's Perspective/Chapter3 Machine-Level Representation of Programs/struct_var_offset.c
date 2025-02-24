#include <stdio.h>
#include <stddef.h>

#define PRINT_OFFSET(struct_name, field) \
  printf("Offset of %-3s in %-5s: %2lu\n", #field, #struct_name, offsetof(struct struct_name, field))

// 구조체 정의
struct P1
{
  short i;
  int c;
  int *j;
  short *d;
};

struct P2
{
  int i[2];
  char c[8];
  short d[4];
  long *j;
};

struct P3
{
  long w[2];
  int *c[2];
};

struct P4
{
  char w[16];
  char *c[2];
};

struct P5
{
  struct P4 a[2];
  struct P1 t;
};

// 각 구조체의 필드 offset 및 크기 출력
void print_struct_info()
{
  printf("==== Struct P1 ====\n");
  PRINT_OFFSET(P1, i);
  PRINT_OFFSET(P1, c);
  PRINT_OFFSET(P1, j);
  PRINT_OFFSET(P1, d);
  printf("Size of P1: %lu bytes\n\n", sizeof(struct P1));

  printf("==== Struct P2 ====\n");
  PRINT_OFFSET(P2, i);
  PRINT_OFFSET(P2, c);
  PRINT_OFFSET(P2, d);
  PRINT_OFFSET(P2, j);
  printf("Size of P2: %lu bytes\n\n", sizeof(struct P2));

  printf("==== Struct P3 ====\n");
  PRINT_OFFSET(P3, w);
  PRINT_OFFSET(P3, c);
  printf("Size of P3: %lu bytes\n\n", sizeof(struct P3));

  printf("==== Struct P4 ====\n");
  PRINT_OFFSET(P4, w);
  PRINT_OFFSET(P4, c);
  printf("Size of P4: %lu bytes\n\n", sizeof(struct P4));

  printf("==== Struct P5 ====\n");
  PRINT_OFFSET(P5, a);
  PRINT_OFFSET(P5, t);
  printf("Size of P5: %lu bytes\n\n", sizeof(struct P5));
}

int main()
{
  print_struct_info();
  return 0;
}

// gcc -std=c11 -Wall -Wextra -O2 struct_var_offset.c -o struct_alignment
// 명령어로 컴파일 하고 실행하면 된다.