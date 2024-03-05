/*estruturas dinamicas sao estruturas de dados flexiveis.

                                LISTAS ENCADEADAS

no vetor os elementos sao sequenciais, nas listas encadeadas os elementos nao sao sempre sequenciais.
por causa disso além da informação precisa informar o endereço desejado do proximo elemento.
exp: 1(116)2(112)
    comeca em 1 ai o endereço de 2 é o endereco 116, o 2 vai informar o endereço de 3 que é 112

                                IMPLEMENTACAO
    struct lista{
        int info;
        struct lista*prox;

    };
    typedef struct lista Lista
*/
