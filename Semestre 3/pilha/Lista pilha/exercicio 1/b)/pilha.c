#define N 5
#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>
struct pilha
{
    int n;//quantidade de elementos
    float *proxelemento;//o vetor vai armazenar os dados da pilha
};

Pilha *pilha_cria(void){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if (p == NULL)
    {
        printf("Erro na alocacao de memoria");
        exit(1);
    }
    p->proxelemento = (float*)malloc(N*sizeof(float));
    if (p->proxelemento == NULL)
    {
        exit(1);
    }
    p->n = 0;
    return p;
}

void pilha_push(Pilha *p, float v){
    if (p->n == N)
    {
        printf("Numero maximo da pilha alcancado\n");
         p->proxelemento = (float*)realloc(p->proxelemento,(N*2)*sizeof(float));
    }

    p->proxelemento[p->n] = v;//significa que esta acessando o topo da pilha
    p->n++;//apos acessar ele sera incrementado, logo nao sera mais o topo pois tera outro
    
}

int pilha_vazia(Pilha *p){
    return(p->n == 0);//se estiver 0 significa que a pilha esta vazia
}

float pilha_pop(Pilha *p){
    float v;
    if (pilha_vazia(p))
    {
        printf("Pilha vazia\n");
        exit(1);
    }
    //retira o elemento do topo
    v = p->proxelemento[p->n-1];//v vai receber o valor da ultima posicao ou seja o topo da pilha
    p->n--;//e esse espaço sera excluido pois a pilha foi removida
    return v;
}
void pilha_libera(Pilha *p){
    free(p);
}
void pilha_imprime(Pilha *p){
    for (int i = p->n-1; i >= 0; i--)
    {
        printf("%.2f ", p->proxelemento[i]);
    }
    printf("\n");
}