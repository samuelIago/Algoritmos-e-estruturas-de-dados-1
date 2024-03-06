#include<stdlib.h>
#include<stdio.h>
struct lista2
{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};
//inserção no início
typedef struct lista2 Lista2;
Lista2 *lst2_insere(Lista2* l, int v){
    Lista2 *novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info=v;
    novo->prox=l;
    novo->ant =NULL;
    //verifica se alista nao esta vazia
    if (l != NULL)
    {
        l->ant =novo;
        return novo;
    }
    
}
/*Função de busca*/

Lista2 *lst2_busca(Lista2*l,int v){
    Lista2 *p;
    for (p = l; p!= NULL; p=p->prox)
    {
        if (p->info == v)
        {
            return p;
        }
        return NULL;
        
    }
    
}
/*Função que imprime inversamente*/
void *lst2_imprime(Lista2 *l){
    Lista2 *p =l;
    if(p) do
    {
        printf("%d\n",p->info);
        p=p->ant;
    } while (p!=l);//enquanto o p nao for o primeiro
    
}
//funcao para remover um elemento
Lista2 *lst2_retira(Lista2*l,int v){
    Lista2 *p = lst2_busca(l,v);

    if (p==NULL)
    {
        return l;
    }
    if (l==p)//se o l for o primeiro elemento da lista
    {
        l = p->prox;//a lista vai passar para o prox elemento, eliminandoo anterior, 
    }else
    {
        p->ant->prox = p->prox;
    }
    if(p->prox!=NULL){
        p->prox->ant = p->ant;//ja que o primeiro foi removido, o prox.ant(como acessa ele) vai receber p.ant
        free(p);
        return l;//vai retornar essa nova lista
    }
    
    
    
}