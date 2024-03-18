#include "questao1.h"
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

 /*(1)*/int maiores(Lista* l, int n){
    Lista *p;
    int contador = 0;
    for( p = l; p!= NULL; p=p->prox_elemento){
        if(p->informacao > n){
            contador++;
        }
    }
    return contador;
 }

/*(2)*/Lista* ultimo(Lista* l){
    Lista *p;
    int ultimo;
    for( p = l; p!= NULL; p=p->prox_elemento){
        if(p->prox_elemento == NULL){
            ultimo = p->informacao;
        }
    }
    printf("Ultimo valor da lista: %d",ultimo);
}


//fazer funcao que libere a memoria