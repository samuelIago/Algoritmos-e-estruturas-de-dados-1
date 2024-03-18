/*é que nem uma pilha de pratos, o primeiro a entrar é o ultimo a sair
push pra inserir e pop pra tirar*/
#include "pilha.h"
#include<stdio.h>
int main(){
Pilha *pilha = pilha_cria();
pilha_push(pilha,1);
pilha_push(pilha,2);
pilha_push(pilha,3);
pilha_push(pilha,4);
pilha_imprime(pilha);
pilha_libera(pilha);
}