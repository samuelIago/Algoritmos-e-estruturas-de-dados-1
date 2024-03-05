#include "lista.h"
#include <stdio.h>
int main(void){
    int valor;
    //criando uma lista encadeada
    Lista *lista_encadeada = cria_lista();
    //inserindo o valor 3 na lista
    lista_null(lista_encadeada);
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 1);
    imprime_lista(lista_encadeada);
    lista_null(lista_encadeada);
    printf("Insira um elemento");
    scanf("%d",&valor);
    procura_valor(lista_encadeada,valor);
    return 0;
}