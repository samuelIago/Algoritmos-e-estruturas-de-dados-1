#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
struct lista
{
    int informacao;//a informacao
    Lista *prox_elemento;//o endereco do proximo elemento
};

Lista *cria_lista(void){
    return NULL;
}
//o bom dela é que o tamanho é proporcional com o tamanho da lista, quanto mais elementos maior sera
//e se algum elemento for retirado, menor a lista sera, cada info está sendo armazenada num nó
//cada no esta conectado ao proximo elemento graças ao endereço, ou seja as informações estao encadeadas

Lista *insere_elemento(Lista *lista,int valor){
    Lista *novo_no = (Lista*) malloc(sizeof(lista));
    if (novo_no == NULL){//se o prox elemento for NULL a lista encadeada acabou
        exit(1);
    }
    novo_no->informacao = valor;//esta passado o valor desse elemento
    novo_no->prox_elemento = lista;//esta passando o endereco do proximo elemento, conecta o novo nó a lista
    return novo_no;
}

void imprime_lista(Lista *lista_encadeada){
    Lista *contador;
    for(contador = lista_encadeada; contador != NULL; contador = contador->prox_elemento){
        printf("%d\t",contador->informacao);
    }
}
void lista_null(Lista *lista){
    if (lista == NULL)
    {
        printf("A lista esta vazia\n");

    }else{
        printf("\nA lista nao esta vazia\n");
    }
    
}

Lista *procura_valor(Lista *lista, int v){//nao terminada
    Lista *p;
    for( p = lista; p!= NULL; p=p->prox_elemento){
        if(p->informacao == v){
            printf("Elemento encontrado.");
            return p;
        }
    }
    return NULL;

}
//fazer funcao que libere a memoria