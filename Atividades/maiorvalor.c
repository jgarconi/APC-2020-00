/**
 * @atividade: Lista10 - Questao1
 * @programa: Construir uma funcao que le o maior
 *            valor entre 3 valores. 
 * @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>

/* Insira a funcao maior_valor aqui */
int maior_valor(n1, n2, n3){

  if(n1 > n2 && n1 > n3){
    return n1;
  }
  else if(n2 > n1 && n2 > n3){
    return n2;
  }
  else{
    return n3;
  }
}

int main()
{
	int n1, n2, n3;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("%d\n", maior_valor(n1, n2, n3));
	
	return 0;
}