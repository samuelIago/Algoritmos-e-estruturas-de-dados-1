typedef struct ingresso Ingresso;//mudando o nome da struct ingresso so para Ingresso
void preenche(Ingresso *i);// funcao que pega os dados inseridos no teclado e os armazena no Ingresso
void imprime(Ingresso *i);// funcao que imprime os dados armazenados
void altera_preco(Ingresso *i, float valor);//funcao que altera o preco do ingresso escolhido e o troca pelo valor colocado
void imprime_menor_maior_preco(int n, Ingresso *vet);//funcao que vai mostrar qual ingresso que é o mais caro e qual é o mais barato
