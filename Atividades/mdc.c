/**
 * @atividade: Lista12 - Questao6
 * @programa: Usar a recursividade para retornar o mdc
 *            de dois numeros conforme a formula.    
 * @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>

long int mdc(long int a, long int b){

  if(b == 0){
    return a;
  }
  else{
    return mdc(b, a % b);
  }
}

int main(){
  long int a, b;

  /* Recebe o numero */
  scanf("%ld %ld", &a, &b);

  /* Retorna o numero da posicao desejada */
  printf("mdc(%ld, %ld) = %ld\n", a, b, mdc(a, b));

  return 0;
}