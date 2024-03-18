/*é que nem uma pilha de pratos, o primeiro a entrar é o ultimo a sair
push pra inserir e pop pra tirar*/
/*a) Implemente o TAD Pilha usando vetor dinâmico. Considere uma dimensão inicial para o
vetor no momento da criação da pilha; caso a capacidade da pilha seja atingida, você
pode realocar o vetor, duplicando sua capacidade em virtude de uma nova operação
de empilhamento.
*/
#include "pilha.h"
#include<stdio.h>
int main(){
Pilha *pilha = pilha_cria();
pilha_push(pilha,1);
pilha_push(pilha,2);
pilha_push(pilha,3);
pilha_push(pilha,4);
pilha_push(pilha,5);
pilha_push(pilha,6);
pilha_imprime(pilha);
pilha_libera(pilha);
}