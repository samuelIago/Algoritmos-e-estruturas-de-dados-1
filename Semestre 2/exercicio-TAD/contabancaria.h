// o cabecalho é para documentar as funcoes
typedef struct contabancaria ContaBancaria;
// a funcao Criaconta vai cadastrar um usuario, usando os parametros titular, numeor e saldo
ContaBancaria *Criaconta(char titular[30], int numero, float saldo);
// funcao para mostrar os dados cadastrados
void imprime(ContaBancaria *Conta);
// funcao para depositar o dinheiro
void Deposita(ContaBancaria *Conta, float valor);
// funcao para sacar um determinado dinheiro
void Saca(ContaBancaria *Conta, float valor);
// funcao que transfere dinheiro da origem para o destino
void Transfere(ContaBancaria *origem, ContaBancaria *destino, float valor);
// funcao para excluir as contas
void ExcluiConta(ContaBancaria *conta);
// funcao para retornar o saldo
float Saldo(ContaBancaria *conta);