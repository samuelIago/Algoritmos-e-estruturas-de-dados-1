#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct disciplina Disciplina;
// funcao para cadastrar a disciplina e alocar
Disciplina *cria_disciplina(char nome[], int codigo);
//funcao para excluir a disciplina
void exclui_disciplina(Disciplina *disciplina);
// funcao que imprime a disciplina fiz ela pois assim nao estava funcionando printf(" %s\n",aluno->disciplinas[i]); então fui recomendado a fazer uma funcao
void imprime_disciplina(Disciplina *disciplina);
