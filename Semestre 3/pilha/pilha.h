typedef struct pilha Pilha;
//cria a pilha iniciando como void
Pilha *pilha_cria(void);
//funcao que insere elementos na pilha
void pilha_push(Pilha *p, float v);
//funcao que retira elementos da pilha
float pilha_pop(Pilha *p);
//funcao para verificar se a pilha esta vazia
int pilha_vazia(Pilha *p);
//funcao para liberar a pilha
void pilha_libera(Pilha *p);
//funcao para imprimir os valores da pilha
void pilha_imprime(Pilha *p);