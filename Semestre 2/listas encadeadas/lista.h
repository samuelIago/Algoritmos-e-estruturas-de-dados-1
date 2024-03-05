typedef struct lista Lista;
/*
    Função que inicia a lista atribuindo NULL
*/
Lista  *cria_lista(void);
/*
    Função que insere elemento inteiro na lista
    Argumentos:
    Lista *lista;
    int valor: valor inteiro a ser inserido.
    Retorno:
    Nova lista
*/
Lista *insere_elemento(Lista *lista, int valor);
/*
    Função que imprime os dados da lista encadeada
*/
void imprime_lista(Lista *lista_encadeada);
/*
    Função que checa se a lista esta vazia
*/
void lista_null(Lista *lista);
/*
    Funcao que procura um valor pro usuario
*/
Lista *procura_valor(Lista *lista, int v);