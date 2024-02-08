typedef struct aluno Aluno;
//Funcao para criar o aluno e alocar
Aluno *cria_aluno(char nome[], int matricula);
//funcao que matricula as disciplinas do aluno
void matricula_disciplina(Aluno *aluno, Disciplina *disciplina);
//funcao que exclui o aluno
void exclui_aluno(Aluno *aluno);
//funcao para imprimir os dados do aluno
void imprime_alunos(Aluno *aluno);
