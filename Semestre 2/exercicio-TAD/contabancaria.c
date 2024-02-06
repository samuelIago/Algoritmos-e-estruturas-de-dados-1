#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contabancaria.h"

// é nesse aquivo que se coloca as funcoes, oque elas fazem e seus parametros
struct contabancaria
{
    char titular[30];
    int numero;
    float saldo;
};

ContaBancaria *Criaconta(char titular[30],int numero,float saldo){
    ContaBancaria *Conta = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    if (Conta == NULL)
    {
        printf("Falha ao alocar a memoria\n");
        exit(1);
    }
    strcpy(Conta->titular,titular);
    Conta->numero = numero;
    Conta->saldo = saldo;
    return Conta;
}
void imprime(ContaBancaria *Conta){
    printf("Titular: %s\n",Conta->titular);
    printf("Numero: %d\n",Conta->numero);
    printf("Saldo: %.2f\n",Conta->saldo);
}