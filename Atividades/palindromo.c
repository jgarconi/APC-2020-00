/** @atividade: Lista8 - Questao5
 *  @programa: Receber uma palavra e dizer se eh ou nao um palindromo.
 *  @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>

int main(){
    char palavra[101];
    int i, n;

    scanf("%s", palavra);

    for(i = 0; palavra[i] != '\0'; i++){
    }

    for(n = i-1; n >= 0; n--){
        if(palavra[i] != palavra[i-1])
        {
            printf("nao eh palindromo\n");
            return 0;
        }
    }
    printf("eh palindromo\n");

    return 0;
}
	
