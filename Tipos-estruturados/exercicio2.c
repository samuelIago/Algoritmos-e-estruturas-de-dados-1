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

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define maxAlunos 3


typedef struct aluno{
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
}Aluno;
//eu testei como se as turmas fosse A, B, C, etc

void matricula(int n, Aluno **alunos){
    if(n != 0){
        int i;
        *alunos =(Aluno*) malloc(sizeof(Aluno));
        printf("Essa disciplina tem %d vagas disponiveis. \n", n);
        printf("Insira o seu nome:\n");
        scanf(" %[^\n]",(*alunos)->nome);
        printf("Insira o seu numero de matricula: \n");
        scanf("%d",&(*alunos)->matricula);
        printf("Insira a sua turma: \n");
        scanf(" %c",&(*alunos)->turma);
        printf("Insira as suas 3 notas: \n");
        for(i = 0; i < 3; i++){
            printf("Nota: %d\n", i+1);
        scanf(" %f",&(*alunos)->notas[i]);
        }
        free(alunos);
    }else{
        printf("Essa disciplina esta lotada.\n");
    }
}

/*void lanca_notas(int n, Aluno **alunos);
void imprime_tudo(int n, Aluno **alunos);
void imprime_turma(int n, Aluno **alunos, char turma);
void imprime_turma_aprovados(int n, Aluno **alunos, char turma);*/
int main(){
    int vagas = 2;
    Aluno **estudante = (Aluno**) malloc(vagas * sizeof(Aluno*));
    matricula(vagas,estudante);
    return 0;
}