/*Questão 2) Escreva um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes informações: matrícula (inteiro), nome (80 caracteres), turma (caractere), três notas (reais em um vetor) e uma média (real). Seu programa deve levar em consideração que é ofertado um número máximo de vagas para a disciplina. Sabendo dessas informações, faça o que se pede nos itens a seguir:
a) Implemente uma função que recebe os dados de um aluno e o matricula na disciplina, caso haja vaga disponível. Protótipo: void matricula(int n,Aluno** alunos);
b) Implemente uma função que lança as notas e calcula a média dos alunos da disciplina. Protótipo: void lanca_notas(int n, Aluno** alunos);
c) Implemente uma função que imprime os dados de todos os alunos da disciplina. Protótipo: void imprime_tudo(int n, Aluno** alunos);
d) Implemente uma função que imprime os dados de todos os alunos de uma turma. Protótipo: void imprime_turma(int n, Aluno** alunos, char turma);
e) Implemente uma função que imprime os alunos aprovados de uma determinada turma. Para ser aprovado, o aluno deve ter média maior que ou igual a 7,0. Protótipo: void imprime_turma_aprovados(int n, Aluno**alunos, char turma);
                            Sugestões:
i) Use um vetor de ponteiros para estrutura;
ii) Use uma constante simbólica para representar o número
máximo de alunos.
Iii) Antes de manipular o vetor de ponteiros, inicialize cada um de seus elementos com NULL
(você pode escrever uma função para isso).
OBS.: Os exercícios apresentados sugerem a implementação de diferentes funções. Sendo assim, o programador
deve escrever um programa (função main) para testar sua implementação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define maxAlunos 3

typedef struct aluno
{
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
} Aluno;
// eu testei como se as turmas fosse A, B, C, etc

void matricula(int n, Aluno **alunos)
{
    int i;
    alunos[n] = (Aluno *)malloc(sizeof(Aluno));
    printf("Cadastre o aluno: %d \n", n+1);
    printf("Insira o seu nome:\n");
    scanf(" %[^\n]", (alunos)[n]->nome);
    printf("Insira o seu numero de matricula: \n");
    scanf("%d", &(alunos)[n]->matricula);
    printf("Insira a sua turma: \n");
    scanf(" %c", &(alunos)[n]->turma);
    printf("Insira as suas 3 notas: \n");
    for (i = 0; i < 3; i++){
        printf("Nota: %d\n", i + 1);
        scanf(" %f", &(alunos)[n]->notas[i]);
    }
}

void lanca_notas(int n, Aluno **alunos)
{
    int i = 0, j = 0;
    float somaNotas = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < 3; j++){
            somaNotas += (*alunos[i]).notas[j];
        }
        (*alunos[i]).media = somaNotas / 3.0;
        printf("Media do aluno: \n");
        printf("%.2f\n", (*alunos[i]).media);
        somaNotas = 0;
    }
    
}

/*
void imprime_tudo(int n, Aluno **alunos);
void imprime_turma(int n, Aluno **alunos, char turma);
void imprime_turma_aprovados(int n, Aluno **alunos, char turma);*/
int main()
{
    int alunosMat;
    int i;
    printf("Insira quantos alunos serao matriculados:\n");
    scanf("%d", &alunosMat);

    Aluno **estudante = (Aluno **)malloc(alunosMat * sizeof(Aluno *));
    if (alunosMat <= maxAlunos)
    {
        for (i = 0; i < alunosMat; i++){
            matricula(i, estudante);
            lanca_notas(alunosMat, estudante);//aqui tem que ser alunosMat
        }
    }
    else
    {
        printf("limite de estudantes ultrapassado.");
    }
    
    // assosiar a variavel vagas ao tamanho do vetor
    for (i = 0; i < alunosMat; i++)
    {
        free(estudante[i]);
    }
    free(estudante);
    return 0;
}
