/*TAD: Tipo abstrato de dados, é feito de modulos estamos definindo um novo tipo que n tem na linguagem C

é um novo tipo (struct) + conjunto de operacoes
*/
// esse é a TAD
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
// esse é o novo tipo, o TAD Aluno
struct aluno
{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno *recebe_dados(void)
{
    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno));
    if (estudante == NULL)
    {
        printf("Falha ao alocar a memoria\n");
        exit(1);
    }
    printf("Insira o nome do aluno: \n");
    scanf(" %[^\n]s", estudante->nome);
    printf("Insira a matricula: \n");
    scanf("%d", &estudante->matricula);
    printf("Insira o IRA: \n");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime(Aluno *aluno)
{
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("IRA: %.2f", aluno->IRA);
}

