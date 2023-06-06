/**
 * @atividade: Lista10 - Questao8
 * @programa: Criacao de uma funcao que fornece o peso ideal
 *            com base na altura e sexo de uma pessoa.
 * @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int matriz[LINHAS][COLUNAS];
int i, j, n = 0;

/* Insira a funcao LeMatriz() aqui */
int LeMatriz(int n){
  for(i = 0; i < LINHAS; i++){
    for(j = 0; j < COLUNAS; j++){
      scanf("%d", &n);
    }
  }
  return n;
}

/* Insira a funcao ImprimeMatriz() aqui */
int ImprimeMatriz(int n){
  for(i = 0; i < LINHAS; i++){
    for(j = 0; j < COLUNAS; j++){
      printf("%d ", n);
    }
    printf("\n");
  }
  return n;
}

int main()
{
	int LeMatriz(int n);
	int printf("%d", ImprimeMatriz(n));
	
	return 0;
}