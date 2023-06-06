/** @atividade: Trabalho Final - APC-2020-00
 *  @arquivo: jogo.c
 *  @programa: Arquivo principal para o jogo.
 *  @aluno/matricula: Juliana Garconi dos Santos - 18/0113801
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "headlib.h"
#include "funclib.h"

int main(){
    int opt;
    char answ;
    
    /* Menu do jogo */
    menu();

    while(1){
        /* Recebe a opcao de jogo */
        opcoes:
        scanf("%d", &opt);
        
        switch(opt){
            case 1:
                personagem();
                /*introducao();*/
                break;
            case 2:
                printf("Ei! Voce nao pode jogar sem um personagem!\n");
                printf("Volte e crie o seu!\n");
                break;
            case 3:
                printf("Voce tem certeza que quer sair?\n");
                printf("Digite (S) para sim ou (N) para nao.\n");
                saidamenu:
                    scanf("%c", &answ);
                    if(answ == 's' || answ == 'S'){
                        goto final;
                    }
                    else if(answ == 'n' || answ == 'N'){
                        printf("Ótimo, entao escolha uma opcao de jogo!\n");
                        goto opcoes;
                    }
                    else{
                        goto saidamenu;
                    }
                    break;
            default: 
                printf("Ops... Tivemos um problema!\n");
                printf("Escolha uma opcao valida.\n");
                break;
        }
        
        
        
        
        
        
    }
    
    final:
    return 0;
}