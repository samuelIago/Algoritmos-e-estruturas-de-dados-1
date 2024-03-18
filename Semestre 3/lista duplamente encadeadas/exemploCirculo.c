#include<stdio.h>
#include<stdlib.h>
struct ponto {
    int x;
    int y;
};
typedef struct ponto CirculoPonto;

struct circulo_raio
{
    CirculoPonto *info;
    struct  circuloraio *prox;
};
