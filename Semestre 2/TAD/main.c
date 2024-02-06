#include "aluno.h"
#include <stdlib.h>
// lebrar de usar ctrl s para salvar
// dir lista os arquivos dentro do diretorio
// compilar: gcc -c aluno.c dps gcc -c main.c
// por fim junta, software.exe aluno.o main.o
//               nome do arquivo final, primeiro a tad dps o main
//./software
int main(void)
{
    int qtd = 0;
    Aluno **aluno = cadastra_alunos(&qtd);
    imprime_tudo(aluno, qtd);
    libera_dados(aluno, qtd);
    return 0;
}