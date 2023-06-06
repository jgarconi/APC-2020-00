/* @atividade: lista4 - questao4 */
/* @programa: recebe um valor tipo float e o retorna com 3 formatacoes diferentes */
/* @autora: Juliana Garconi dos Santos */

#include <stdio.h>

int main()
{
	float num;
	
	scanf("%f", &num);
	printf("%.4f\n", num);
	printf("%.2f\n", num);
	printf("%0.f\n", num);
	
	return 0;
}