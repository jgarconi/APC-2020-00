#include <stdio.h>

int main(void) {
  int idade, A, M, D;

  scanf("%d", &idade);

  A = (idade / 365);
  M = (idade % 365) / 30;
  D = (idade % 365) % 30;

  printf("%d\n", A);
  printf("%d\n", M);
  printf("%d\n", D);
  return 0;
}