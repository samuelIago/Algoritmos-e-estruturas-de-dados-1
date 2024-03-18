/*3) Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:*/
#include<stdio.h>
#include<stdlib.h>
typedef struct lista
{
    int informacao;
    struct lista*proxElemento;//é oque vai conectar os nos da lista

}Lista;

void *criaLista(){
    return NULL;
}

Lista *adicionaElemento(Lista*l,int v){
    Lista *novoElemento = (Lista*)malloc(sizeof(Lista));
    if (novoElemento == NULL){
        printf("Erro na alocacao");
        exit(1);
    }
    novoElemento->proxElemento = l;//é o ponteiro para o ultimo dado da lista(nesse caso)
    novoElemento->informacao = v;//v é o conteudo salvo no no atual
    return novoElemento;//retornando esse novo no criado
}

void lista_imprime(Lista*l){
    Lista *auxiliar;/*l é ponteiro do ultimo nó criado, 
    ele vai repetir enquando o l nao apontar para NULL e apos executar
     a variavel auxiliar vai receber o endereço do proximo no ate que a auxiliar aponte para NULL 
     e entao o loop vai ser encerrado porque auxiliva vai ser NULL logo nao vai rodar mais.*/
    for (auxiliar = l; auxiliar != NULL ; auxiliar = auxiliar->proxElemento)
    {
        printf("%.1d\t",auxiliar->informacao);
    }
    
}
Lista *retira_elemento(Lista*l,int alvo){//isso é para retirar apenas um elemento
    Lista *aux = l;
    Lista *anterior;
    while (aux != NULL)//caso o elemento que queira ser excluido nao esteja na lista ele nao vai usa o loop
    {
        if (aux->informacao == alvo)
        {
            break;
        }
        anterior = aux;
        aux = aux->proxElemento;    
    }
    
    if (aux == NULL)
    {
        printf("Valor nao encontrado");
        return l;
    }
    
    if (aux == l)//isso é caso o elemento a ser eliminado esteja no inicio
    {
        l = l->proxElemento;
        free(aux);
        return l;
    }


    anterior->proxElemento = aux->proxElemento;
    free(aux);
    return l;

}

Lista* retira_n(Lista* l, int n){
    Lista *aux = l;
    short cont = 0;
    while (aux != NULL)
    {
        if (aux->informacao == n)
        {
            cont++;
        }
        aux=aux->proxElemento;
    }

    for (int i = 0; i < cont; i++)
    {
        l = retira_elemento(l,n);
    }
    
    return l;
}


int main(){
    Lista * l = criaLista();//aqui esta criando o nó
    
    l = adicionaElemento(l,1);
    
    l = adicionaElemento(l,2);
    
    l = adicionaElemento(l,3);

    l = adicionaElemento(l,2);

    l = adicionaElemento(l,3);

    l = adicionaElemento(l,1);

    lista_imprime(l);
    l = retira_n(l,2);
    lista_imprime(l);
    
}
