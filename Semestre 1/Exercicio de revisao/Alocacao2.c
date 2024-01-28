/*02. Escreva uma função que receba duas strings como entrada e retorne uma nova string que seja a concatenação das duas. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//cria uma funcao vetor
char *fundirStrings(char string1[], char string2[]){
    //cria um ponteiro do tipo char
    char *juncao = (char*) malloc(40 * sizeof(char)); 
    if (juncao == NULL){
        exit(1);
    }
    strcpy(juncao,string1);//copia o que está armazenado na string 1 no ponteiro
    strcat(juncao,string2);//depois junta oque estava no ponteiro mais oque está armazenado na string2

    return(juncao);
}

int main(){
    char nome[20];
    char sobrenome[20];
    printf("Insira o seu nome:\n");
    scanf(" %[^\n]s",nome);
    printf("Insira o seu sobrenome:\n");
    scanf(" %[^\n]s",sobrenome);
    char *nomeCompleto = fundirStrings(nome,sobrenome);
    printf("Nome completo %s: \n", nomeCompleto);
    free(nomeCompleto);
    return(0);
}
