#include "disciplina.h"

struct disciplina
{
    char nome[100];
    int codigo;
};

Disciplina *cria_disciplina(char nome[], int codigo)
{
    Disciplina *materia = (Disciplina *)malloc(sizeof(Disciplina));
    if (materia == NULL)
    {
        printf("Erro na alocacao de memoria da disciplina.");
        exit(1);
    }
    strncpy(materia->nome,nome,sizeof(materia->nome)-1);
    materia->nome[sizeof(materia->nome)-1]='\0';//para ter certeza de que o ultimo caractere sera \0 assim ele nao estoura
    materia->codigo = codigo;
    return materia;
}

Disciplina *pedir(){
    int codigo;
    char nome[100];
    printf("Insira o nome da disciplina:\n");
    scanf("%s",nome);
    printf("Insira o codigo da disciplina:\n");
    scanf("%d",&codigo);
    return cria_disciplina(nome,codigo);
    
}


void exclui_disciplina(Disciplina *disciplina)
{
    if (disciplina != NULL)
    {
        free(disciplina);
    }
}