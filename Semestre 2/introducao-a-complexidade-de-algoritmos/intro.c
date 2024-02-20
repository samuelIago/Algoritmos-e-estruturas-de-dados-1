/*algoritmo é uma sequencia de informacoes finitas que aplica elas em um tempo finito com uma quant de esforço finita.

Todo algoritmo tem uma entrada, uma sequencia n de passos e uma saida.
menor complexidade: menor tempo
maior eficiencia: ocupa o menor espaço.

                Definição de um algoritmo bom
Corretude: para toda entrada que ele devia aceitar ele vai produzir uma saida(se ele recebe inteiros nao importa qual inteiro ele deve produzir uma saida correta).

Simplicidade: codigo limpo.
é aquele codigo facil de ser entendido, de implementar e de se manter.

Eficiencia:
tempo: quanto tempo leva pra produzir a saida correta.
espaço: quanto espaço é necessario para executar o algoritmo.(Complexidade de espaço).


Complexidade de espaço:
o espaco requerido por um alg tem dois aspectos.
uma parte fixa que é independente das caracteristicas de entradas/saidas

uma parte variavel que é dependente da instancia do problema sendo resolvido

espaco constante: c, espaco variavel:s espaco requerido:S
S=c+s.
EXP:
float abc(int a,int b,int c){
    return a+b+c.
}
S=12(cada int sao 4bytes) +0(nenhuma outra funcao é chamada).
S=12 bytes.
conte as variaveis para fazer a complexidade.


Complexidade de tempo:
é o numero de operacoes primitivas executadas(somas, atribuicoes, comparacoes etc).
linhas diferentes requerem tempos diferentes.
o tempo total é a soma dos tempos de cada linha do algoritmo.

pode tentar simplificar as expressoes
cn sao as contantes, c3 ate c5 estao dentro de um loop por isso se repetem(n-1)vezes
(c3+c4+c5)*(n-1)+c1+c2+c6
vira
a*(n-1)+b
*/