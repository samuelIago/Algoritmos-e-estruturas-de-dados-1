#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct disciplina Disciplina;
// funcao para cadastrar a disciplina e alocar
Disciplina *cria_disciplina(char nome[], int codigo);
//funcao para excluir a disciplina
void exclui_disciplina(Disciplina *disciplina);
//funcao que solicita os dados da disciplia(joan me recomendou fazer algo do tipo, pois o erro é que nao estava chamando)
Disciplina *pedir();

