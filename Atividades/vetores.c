#include <stdio.h>

int main() {
  int i, j;
  int vet[3][3];

  for(i = 0; i < 3; i++){ //linhas
    for(j = 0; j < 3; j++){ //colunas
      scanf("%d", i);
      printf("d", vet[i][j] );
    }
    printf("\n");
  }
  return 0;
}