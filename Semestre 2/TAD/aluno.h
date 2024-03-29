// cabeçalho, manter os nomes do arquivo associados
typedef struct aluno Aluno;
// fazemos o renomeamento das structs no arquivo .h

// funcao que aloca memoria para um strut aluno,receber o dados via teclado e retornar um ponteiro
Aluno *recebe_dados(void); // agora na main precisa de algo que armazene o Aluno*
// funcao recebe um ponteiro para aluno e imprime os dados
void imprime(Aluno *aluno);
/*Funcao que matricula N valunos e que so para quando o usuario pedir pra parar*/
Aluno **cadastra_alunos();
// funcao para liberar os dados
void libera_dados(Aluno **aluno, int cont);
// funcao para imprimir os dados de todos os alunos cadastrados
void imprime_tudo(Aluno **aluno, int cont);
