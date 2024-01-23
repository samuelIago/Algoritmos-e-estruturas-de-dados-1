/*num vetor normal int vetor[3]
seu tamanho está estático, com a alocacao dinamica usamos as funçoes mallor(),calloc(),realloc(), lembre de usar free()
EX: De como fazer o mesmo vetor mas dinamico:*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vetor = malloc(3*sizeof(int));//vai retornar a quantidade de bytes que uma variavel usa, int, float, char etc
    if(vetor == NULL)//não foi possivel alocar a memória
    {
        printf("Significa que o pc n tem memoria o suficiente");
        exit(1);
    }else{
        printf("Deu bom");
    }
    free(vetor);
    return 0;
}