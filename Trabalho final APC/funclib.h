/** @atividade: Trabalho Final - APC-2020-00
 *  @arquivo: jogo.c
 *  @programa: Arquivo principal para o jogo.
 *  @aluno/matricula: Juliana Garconi dos Santos - 18/0113801
 */

#include <stdio.h>
#include <ctype.h>
#include "headlib.h"

/* Menu do jogo */
void menu(){
	    
    printf("             *******************************************\n");
    printf("\n");
    printf("                             BEM VINDO");
    printf("\n");
    printf("\n");
    printf("             *******************************************\n");
    printf("\n");
    printf("\n");
    
    printf("Escolha uma opcao:\n");
    printf("\n");
    printf("(1) Criar um personagem.\n");
    printf("(2) Iniciar o jogo.\n");
    printf("(3) Sair.\n");
}

/* --------------------------------------------------------------------------------------------- */

/* Criacao do personagem */
struct Persona{
        char nome[21];
        char raca[10];
        char porte[10];
        char alinhamento[10];
		char profissao[15];
		char meio[10];
        char meta[20];
} pers;

void personagem(){
	int i;
	char aux, auxr, auxa, auxm;

    /* Recebe o nome*/
	printf("\nEi! Quem e voce? Qual o seu nome?\n");
	scanf("%s", pers.nome);
	printf("\nMuito bem %s, sou a Asha, e fui enviada para te ajudar na sua grande missao.\n", pers.nome);
	printf("Mas antes, preciso te conhecer melhor...\n");
	
    /* Define a raca*/
	printf("\nQual a sua raca? Humano, anao ou elfo?\n");
	raca:
		scanf("%s", pers.raca);

		for(i = 0; pers.raca[i] != '\0'; i++){
			pers.raca[i] = tolower(pers.raca[i]);
			auxr = pers.raca[0];
		}
	
		if((auxr != 'h') && (auxr != 'a') && (auxr != 'e')){
			printf("%s??? Nunca vi essa raca por aqui...\n", pers.raca);
            printf("Humano, anao ou elfo?\n");
			goto raca;
		}

    /* Define o porte */
    porte:
        printf("\nVoce eh grande, medio ou pequeno?\n");
        scanf("%s", pers.porte);

		for(i = 0; pers.porte[i] != '\0'; i++){
			pers.porte[i] = tolower(pers.porte[i]);
			aux = pers.porte[0];
		}
	
		if((aux != 'g') && (aux != 'm') && (aux != 'p')){
			goto porte;
		}

        if((aux == 'g') && (auxr == 'a')){
            printf("Anao grande??? Leve o jogo a serio!\n");
            goto porte;
        }

    /* Define a profissao do personagem */
    prof:
		printf("\nQual sua profissao? Guerreiro, mago ou ladino?\n");
        scanf("%s", pers.profissao);

		for(i = 0; pers.profissao[i] != '\0'; i++){
			pers.profissao[i] = tolower(pers.profissao[i]);
			aux = pers.profissao[0];
		}
	
		if((aux != 'g') && (aux != 'm') && (aux != 'l')){
			printf("%s??? Que profissao peculiar...\n", pers.profissao);
			goto prof;
		}


    /* Define o alinhamento do personagem */
    printf("\nEntao, meu caro %s %s, que tipo de pessoa voce eh? Ma, neutra ou boa?\n", pers.raca, pers.profissao);
    alinha:
        scanf("%s", pers.alinhamento);

		for(i = 0; pers.alinhamento[i] != '\0'; i++){
			pers.alinhamento[i] = tolower(pers.alinhamento[i]);
			auxa = pers.alinhamento[0];
		}
	
		if((auxa != 'm') && (auxa != 'n') && (auxa != 'b')){
			printf("%s??? Qual eh, diga a verdade!\n", pers.alinhamento);
            printf("Ma, neutra ou boa?\n");
			goto alinha;
		}

		if((auxa == 'b') && (aux == 'l')){
			printf("Um ladino bom??? Meio contraditorio, nao?\n");
			printf("Voce eh uma pessoa ma ou neutra?\n");
			goto alinha;
		}


    /* Define onde o personagem vive */
	casa:
		printf("\nEm qual meio voce vive? Urbano, rural ou tribal?\n");
		scanf("%s", pers.meio);

		for(i = 0; pers.meio[i] != '\0'; i++){
			pers.meio[i] = tolower(pers.meio[i]);
			auxm = pers.meio[0];
		}

		if((auxm != 'u') && (auxm != 'r') && (auxm != 't')){
			printf("%s??? Nao conheco esse lugar.\n", pers.meio);
			goto casa;
		}

		if((aux == 'l') && (auxm == 't')){
			printf("Voce sabe que nao existem ladinos em meio tribal, neh?\n");
			goto casa;
		}

	/* Define a meta do personagem */
	printf("\nPor fim, %s, me diga qual eh o seu objetivo.\n", pers.nome);
	meta:
		printf("Governar o reino, Ficar rico ou destruir o mal?\n");
		scanf("%s", pers.meta);

		for(i = 0; pers.meta[i] != '\0'; i++){
			pers.meta[i] = tolower(pers.meta[i]);
			aux = pers.meta[0];
		}
	
		if((aux != 'g') && (aux != 'f') && (aux != 'd')){
			printf("%s??? Vamos lah, voce deve ter objetivos melhores!\n", pers.meta);
			goto meta;
		}

		if((aux == 'd') && (auxa == 'm')){
			printf("Isso eh uma especie de autodestruicao???\n");
			goto meta;
		}

	printf("\nAgora que jah nos conhecemos, podemos iniciar sua jornada!\n");	

}

/* --------------------------------------------------------------------------------------------- */