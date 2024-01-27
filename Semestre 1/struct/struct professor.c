#include <stdio.h>
#include <stdlib.h>
struct professor{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

//              aqui é o tipo      aqui é o nome
void colocarDados(struct professor *Professor){
    printf("Digite o nome\n");
    scanf(" %[^\n]s", Professor->nome);
    printf("Digite a idade\n");
    scanf("%d", &Professor->idade);
    printf("Digite a matricula\n");
    scanf("%d", &Professor->matricula);
    printf("Digite o email\n");
    scanf(" %[^\n]s", Professor->email); // da um espacinho no scanf pra evitar bugs
}
void mostrarDados(struct professor *Professor){
    printf("Nome: %s\n Idade: %d\n Matricula: %d\n Email: %s\n", Professor->nome, Professor->idade, Professor->matricula, Professor->email);
}
int main(){
    struct professor *Professor = (struct professor *)malloc(sizeof(struct professor));
    if (Professor == NULL){
        exit(1);
    }
    colocarDados(Professor);
    mostrarDados(Professor);
    free(Professor);
    return 0;
}
