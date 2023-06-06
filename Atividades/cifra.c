/** @atividade: Lista8 - Questao9
 *  @programa: Implementar o ROT13(cifra para criptografia).
 *  @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[101], aux[101], alfa[101] = "abcdefghijklmnopqrstuvwxyz";
    int i, j, cnt = 0;

    /* Recebe a frase */
    scanf("%[^\n]", frase);

    for(i = 0; frase[i] != '\0'; i++){
     // if (96 > frase[i] && frase[i] < 123){
        //aux[i] = frase[i];
        aux[i] = alfa[i] + 1;
        printf("%c", aux[i]);
   //   }

    }
    printf("\n");
    printf("%s", frase);
    return 0;
}