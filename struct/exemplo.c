/*struct nome{};*/
#include <stdio.h>
#include<stdlib.h>
//apos criar a estrutura coloque os dados que serao usados.
struct aluno{
    char nome[20];
    int idade;
    int mat;
    char email[50];
};//para manipular a estrutura vc cria uma variavel tipo estrutura
int main(){
//a variavel estudante vai receber o tipo sctruct aluno
    struct aluno estudante;//isso significa que a variavel a vai ter um nome, idade, matricula e email
    //assim vc acessa e modifica os dados o . é o operador de acesso
    printf("Digite o nome\n");
    scanf(" %[^\n]s",estudante.nome);
    printf("Digite a idade\n");
    scanf("%d", &estudante.idade);
    printf("Digite a matricula\n");
    scanf("%d", &estudante.mat);
    printf("Digite o email\n");
    scanf(" %[^\n]s", estudante.email);//da um espacinho no scanf pra evitar bugs
    return 0;
}
