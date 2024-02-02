/*Questão 2) Escreva um programa em C que preencha um vetor de 10 inteiros com informações vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem como a média dos elementos do vetor, como ilustrado a seguir. */
#include<stdio.h>
int main(){
FILE *entrada = fopen("entrada_q2.txt", "rt");
FILE *saida = fopen("saida_q2.txt", "wt");

if (entrada == NULL || saida == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquivo aberto!\n");
}
int vetor[10];
int count;
float media = 0;
for(count = 0; count < 10; count++){
    fscanf(entrada,"%d",&vetor[count]);
}

int maior = 0;
int menor = 0;
int soma = 0;
for (count = 0; count < 10; count++){
    if(vetor[count] > vetor[maior] ){
        maior = count;
    }else if(vetor[count] < vetor[menor]){
        menor = count;
    }
    soma += vetor[count];
}
media = soma/10.0;

fprintf(saida,"Menor elemento: %d\n", vetor[menor]);
fprintf(saida, "Maior elemento: %d\n", vetor[maior]);
fprintf(saida, "Media %.2f\n", media);
fclose(entrada);
fclose(saida);
return 0;
}