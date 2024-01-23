/*Escreva um programa que implementa uma struct Produto com os campos nome, preco e tipo. O tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef union Tipo{
    char ALIMENTO [10];
    char BEBIDA [10];
    char ELETRONICO [10];
}tipo;

typedef struct produto{
    char nome[20];
    float preco;
    tipo Tipo;
}Produto;

void Dados(Produto *p){
    int i;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\n Infome o preco: \t");
    scanf("%f", &p->preco);
    printf("\n Insira o tipo do produto, digite 0 para alimento, 1 para bebida e 2 para eletronico \t");
    scanf("%d", &i);
    if (i == 0)
    {
        printf("voce escolheu um alimento\n");
        strcpy(p->Tipo.ALIMENTO, "Alimento");
    }
    else if(i == 1){
        printf("voce escolheu uma bebida\n");
        strcpy(p->Tipo.BEBIDA, "Bebida");
    }
    else if(i == 2){
        printf("voce escolheu um eletronico\n");
        strcpy(p->Tipo.ELETRONICO, "Eletronico");
    }
}

int main(){
    Produto *produto = malloc(sizeof(Produto));
    Dados(produto);
    printf("Nome: %s\n", produto->nome);
    printf("Idade: %.2f\n", produto->preco);
    printf("Tipo: %s\n", produto->Tipo.ALIMENTO);
    free(produto);
    return 0;
}