#include "aluno.h"
#include "disciplina.h"
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
        exit(1);
    }
    strncpy(aluno->nome,nome,sizeof(aluno->nome)-1);//talvez isso seja outro erro pois ao copiar nao estava deixando espaço extra
    aluno->nome[sizeof(aluno->nome)-1]='\0';//para ter certeza de que o ultimo caractere sera \0 assim ele nao estoura
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;//para que o num_disciplinas inicie em 0
    return aluno;
}

void matricula_disciplina(Aluno*aluno, Disciplina*disciplina){
    if (aluno->num_disciplinas < 10)
    {//ou seja sera inserido disciplina na struct disciplinas de um numero definido e que sera incremetado apos cada disciplina colocada
        aluno->disciplinas[aluno->num_disciplinas] = disciplina;
        aluno->num_disciplinas ++;
        printf("Disciplina cadastrada com sucesso.");
    }else
    {
        printf("Numero maximo de disciplinas alcancado.");
        exit(1);
    }
    
    
}
void pedeDados(Aluno *aluno){
    printf("Digite seu nome:\n");
    scanf("%s",aluno->nome);
    printf("Digite a sua matricula\n");
    scanf("%d",&(aluno->matricula));
}

void exclui_aluno(Aluno *aluno)
{
    free(aluno);
}