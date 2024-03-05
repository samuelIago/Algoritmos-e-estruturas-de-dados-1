/*1) Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l, int n);
2) Implemente uma função que tenha como valor de retorno o ponteiro para o
último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo(Lista* l);
3) Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:
Essa função deve obedecer ao protótipo: Lista* contatena(Lista* l1, Lista* l2);
4) Considere listas de valores inteiros e implemente uma função que receba como
parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao
protótipo: Lista* retira_n(Lista* l, int n);
*/
#include "questao1.h"
#include <stdio.h>
int main(void){
    int valor;
    int maior;
    //criando uma lista encadeada
    Lista *lista_encadeada = cria_lista();
    //inserindo o valor 3 na lista
    lista_null(lista_encadeada);
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 1);
    imprime_lista(lista_encadeada);
    lista_null(lista_encadeada);
    printf("Insira um elemento\n");
    scanf("%d",&valor);
    //(1)
    maior = maiores(lista_encadeada,valor);
    printf("Existem %d valores maiores que %d\n",maior,valor);
   //(2)
    ultimo(lista_encadeada);
    return 0;
}