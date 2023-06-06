/* @atividade: lista4 - questao6 */
/* @programa: receber o raio de uma circunferência e calcula diâmetro,área e perímetro. */
/* @autora: Juliana Garconi dos Santos */

#include <stdio.h>
#include <math.h>

int main()
{
	float raio, diametro, area, perimetro;
	const float PI = 3.14159;

	scanf("%f", &raio);
	diametro = 2 * raio;
	area = PI * pow(raio,2);
	perimetro = 2 * PI * raio;

	printf("%.2f\n", diametro);
	printf("%.2f\n", area);
	printf("%.2f\n", perimetro);

	return 0;
}