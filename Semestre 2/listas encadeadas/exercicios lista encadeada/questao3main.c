/*3) Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:*/
#include<stdio.h>
#include<stdlib.h>
typedef struct lista
{
    float informacao;
    struct lista*proxElemento;//é oque vai conectar os nos da lista

}Lista;

void *criaLista(){
    return NULL;
}

Lista *adicionaElemento(Lista*l,float v){
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
        printf("%.1f\t",auxiliar->informacao);
    }
    
}

Lista* contatena(Lista* l1, Lista* l2){
    Lista *aux = l1;
    while (aux->proxElemento != NULL)
    {
        aux = aux->proxElemento;//enquanto o proximo nó apontado nao for null a variavel auxiliar vai receber o endereço do proximo nó
    }
    aux->proxElemento = l2;
    /*auxiliar parou no ultimo nó antes do NULL e entao igualou a lista 2*/
    return l1;
    //como comecou no l1 deve retornar o l1 ja que a aux agora esta apontando para um nó antes da lista 2 que é o ultimo da lista 1 fundindo as duas listas
}

int main(){
    Lista *l1 = criaLista();//aqui esta criando o nó
    Lista *l2 = criaLista();
    l1 = adicionaElemento(l1,1);
    l1 = adicionaElemento(l1,2);
    l1 = adicionaElemento(l1,3);
    l2 = adicionaElemento(l2,3);
    l2 = adicionaElemento(l2,2);
    l2 = adicionaElemento(l2,1);
    Lista *l = contatena(l1,l2);
    lista_imprime(l);

}
