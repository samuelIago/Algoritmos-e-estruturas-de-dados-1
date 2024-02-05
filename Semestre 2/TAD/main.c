#include "aluno.h"
#include<stdlib.h>
//lebrar de usar ctrl s para salvar
//dir lista os arquivos dentro do diretorio
//compilar: gcc -c aluno.c dps gcc -c main.c
//por fim junta, software.exe aluno.o main.o
//              nome do arquivo final, primeiro a tad dps o main
//./software
int main (void){
    Aluno *aluno;

    aluno = recebe_dados();
    imprime(aluno);
    free(aluno);
    

    return 0;
}