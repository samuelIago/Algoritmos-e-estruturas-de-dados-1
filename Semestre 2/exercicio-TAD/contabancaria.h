// o cabecalho é para documentar as funcoes
typedef struct contabancaria ContaBancaria;
//a funcao Criaconta vai cadastrar um usuario, usando os parametros titular, numeor e saldo
ContaBancaria *Criaconta(char titular[30], int numero, float saldo);
//funcao para mostrar os dados cadastrados
void imprime(ContaBancaria *Conta);