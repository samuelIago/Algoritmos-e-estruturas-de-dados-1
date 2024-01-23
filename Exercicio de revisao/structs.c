/*Você precisa criar um programa para armazenar informações sobre diferentes tipos de frutas. Crie uma struct chamada "Fruta" com os seguintes campos: nome (string), cor (string), sabor (string) e quantidade (int).

Em seguida, escreva um programa que permita ao usuário cadastrar várias frutas, armazenando-as em um vetor de structs. O programa deve ter as seguintes funcionalidades:

Cadastrar uma nova fruta: Solicitar ao usuário que insira o nome, cor, sabor e quantidade da fruta. Em seguida, adicionar a fruta ao array de structs.

Listar todas as frutas cadastradas: Imprimir na tela todas as informações das frutas cadastradas até o momento.

Buscar fruta por nome: Solicitar ao usuário que insira o nome de uma fruta. O programa deve buscar no array de structs por todas as frutas com esse nome e imprimir suas informações.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Fruta{
    char nome[20];
    char cor[20];
    char sabor[20];
    int quantidade;
};
void cadastrarFruta(struct Fruta *fruta){
    printf("Digite o nome da fruta:\n");
    scanf(" %[^\n]s", fruta->nome);
    printf("Digite a cor da fruta:\n");
    scanf(" %[^\n]s", fruta->cor);
    printf("Digite o sabor da fruta:\n");
    scanf(" %[^\n]s", fruta->sabor);
    printf("Digite a quantidade de frutas:\n");
    scanf("%d",&fruta->quantidade);
}

void listarFrutas(struct Fruta *fruta){
    printf("Nome da fruta: %s\n", fruta->nome);
    printf("Cor da fruta: %s\n", fruta->cor);
    printf("Sabor da fruta: %s\n", fruta->sabor);
    printf("Quantidade da fruta: %d\n", fruta->quantidade);
}
void buscarFrutas(struct Fruta *fruta, int quantFrutas){
    char buscar[20];
    int i;
    printf("Insira o nome da fruta para ser buscada:\n");
    scanf(" %[^\n]s", buscar);
    for(i = 0; i < quantFrutas; i++){
        if(strcmp(buscar,fruta[i].nome)==0){
            printf("Frutas cadastradas:\n");
            listarFrutas(&fruta[i]);
        }
    }
    
}
int main(){
    int quantFrutas = 0;
    int i = 0;
    printf("Insira a quantidade de frutas que serao cadastradas:\n");
    scanf("%d",&quantFrutas);

    struct Fruta *fruta = (struct Fruta*) malloc(quantFrutas * sizeof(struct Fruta)); 
    if(fruta == NULL){
        printf("Deu ruim");
        exit(1);
    }

    for(i = 0; i < quantFrutas; i++){
        printf("Insira os dados da fruta da posicao %d\n",i+1);
        cadastrarFruta(&fruta[i]);
    }
    for (i = 0; i < quantFrutas; i++){
        printf("Mostrando os dados da fruta cadastrada na posicao %d\n", i + 1);
        listarFrutas(&fruta[i]);
    }
    buscarFrutas(fruta,quantFrutas);
    free(fruta);
    return 0;
}