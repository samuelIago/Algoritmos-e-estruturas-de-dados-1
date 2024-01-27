/*1. Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e genero. O genero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa deve ler os dados de uma pessoa e imprimir os dados da pessoa*/

#include <stdio.h>

typedef enum genero{
    masculino,
    feminino
}Genero;

typedef struct pessoa
{
    char nome[20];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados(Pessoa *pessoa){
    printf("Informe o nome: \n");
    scanf(" %[^\n]", pessoa->nome);
    printf("Informe a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("Informe o genero:\n 0-Masculino \n 1-Feminino \n");
    scanf("%d", &pessoa->genero_pessoa);
}
//como usar operador ternario

void imprime_pessoa(Pessoa *pessoa){
    printf("Nome: %s\n Idade: %d\n Genero:%s", pessoa->nome,pessoa->idade,pessoa->genero_pessoa==masculino?"Masculino":"Feminino");
    //    se genero_pessoa for masculino(0), imprime masculino se nao":" feminino
    //caso coloque pessoa->genero_pessoa vai imprimir o numero
}

int main(){
    Pessoa *pessoa_;
    get_dados(&pessoa_);
    imprime_pessoa(&pessoa_);
    return 0;
}
