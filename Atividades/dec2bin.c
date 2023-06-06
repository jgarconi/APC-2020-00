/**
 * @atividade: Lista12 - Questao2
 * @programa: Usar a recursividade para determinar a quant. de 
 *            digitos para conversao de decmial para binario.
 * @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>

unsigned long long int digitos(int n){
  unsigned long long int div;
  if(n == 0 || n == 1){
    return 1;
  }
  else{
    return 1 + digitos(n / 2);
  }
}

int main(){
  unsigned long long int n;
 
  /* Recebe o numero a ser convertido */
  scanf("%llu", &n);

  /* Retorna a quant. de digitos da conversao */
  printf("Quantidade necessaria para escrever %llu: %llu\n", n, digitos(n));

  return 0;
}