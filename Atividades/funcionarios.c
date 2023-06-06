/**
 * @atividade: Lista11 - Questao6
 * @programa: Com o uso de struct, indicar qual funcionario recebe mais.
 * @autora: Juliana Garconi dos Santos
 */

#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[100];
  float salario;
  char CPF[15];
  char cidade[100];
  char bairro[100];
  int numero;
  int dia;
  char mes[15];
  int ano;
} empregados;

empregados trab[1000];

int main(){
    int n, i;
    char func[100], funccpf[15], funccid[100], funcbai[100], funcmes[20];
    float maior = 0;
    int num = 0, d = 0, a = 0;

    /* Le a quantidade de funcionarios */
    scanf("%d", &n);

    /* Le o nome, o salario e o CPF dos n funcionaros */
    for (i = 0; i < n; i++){
        scanf("%s %f %s", trab[i].nome, &trab[i].salario, trab[i].CPF);
        scanf("%s %[^\n] %d", trab[i].cidade, trab[i].bairro, &trab[i].numero);
        scanf("%d %s %d", &trab[i].dia, trab[i].mes, &trab[i].ano);
    }

    /* Inicializa o valor das variaveis apenas uma vez */
    maior = trab[0].salario;
    num = trab[0].numero;
    d = trab[0].dia;
    a = trab[0].ano;

    /* A cada iteracao, decide qual eh o maior e menor salario */
    for (i = 0; i < n; i++){
      if(trab[i].salario >= maior){
        maior = trab[i].salario;
        num = trab[i].numero;
        d = trab[i].dia;
        a = trab[i].ano;
        strcpy(func, trab[i].nome);
        strcpy(funccpf, trab[i].CPF);
        strcpy(funccid, trab[i].cidade);
        strcpy(funcbai, trab[i].bairro);
        strcpy(funcmes, trab[i].mes);
        }
    }
    
    /* Na saida, imprime conforme o padrao exigido */    
    printf("%s %.2f %s\n", func, maior, funccpf);
    printf("%s %s %d\n", funccid, funcbai, num);
    printf("%d %s %d\n", d, funcmes, a);
   
    return 0;
}