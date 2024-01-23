/*. Escreva um programa que implementa uma struct Produto com os campos nome, preco e tipo. O tipo deve ser armazenado como um enum que armazena um dos tipos: ALIMENTO, BEBIDA ou ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/

#include <stdio.h>
#include <stdlib.h>

typedef enum Tipo{
    ALIMENTO,//0
    BEBIDA,//1
    ELETRONICO,//2
} tipo;

typedef struct produto{
    char nome[20];
    float preco;
    tipo Tipo;
} Produto;

void Dados(Produto *p){
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\n Infome o preco: \t");
    scanf("%f", &p->preco);
    printf("\n Insira o tipo do produto, digite 0 para alimento, 1 para bebida e 2 para eletronico \t");
    scanf("%d", &p->Tipo);
}

void imprime_produto(Produto *p){
    printf("Nome: %s\n", p->nome);
    printf("Idade: %.2f\n", p->preco);
    if (p->Tipo == 0){
        printf("Produto: Alimento");
    }else if(p->Tipo == 1){
        printf("Produto: Bebida");
    }else if(p->Tipo == 2){
        printf("Produto: eletronico");
    }
    
}

int main()
{
    Produto *produto;
    Dados(&produto);
    imprime_produto(&produto);
    return 0;
}