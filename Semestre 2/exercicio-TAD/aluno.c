#include "aluno.h"

struct aluno
{
    char nome[100];
    int matricula;
    Disciplina *disciplinas[10];
    int num_disciplinas;
};

Aluno *cria_aluno(char *nome, int matricula)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Erro na alocacao de memoria do aluno.");
    }
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    return aluno;
}
//refazer matriculaDisciplina
void imprime_alunos(Aluno *aluno)
{
    if (aluno == NULL)
    {
        printf("Aluno nao existe.\n");
        return;
    }
    int i;
    printf("Nome do aluno: %s\n", aluno->nome);
    printf("Numero de matricula: %d\n", aluno->matricula);
    printf("Numero de disciplinas em que o aluno esta: %d\n", aluno->num_disciplinas);

    //refazer o loop para que imprima as info
}

void exclui_aluno(Aluno *aluno)
{
    free(aluno);
}