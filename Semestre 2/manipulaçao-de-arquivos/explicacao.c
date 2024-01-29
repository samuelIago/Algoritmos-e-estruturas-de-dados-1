/*um arquivo pode ser visto de 2 maneiras:
-modo texto
-modo binário

*Podemos optar por salvar (e recuperar) informações em um dos dois modos

name.c

biblioteca de entrada e saida (stdio.h)

Como abrir:

FILE*fopen(char*nome_arquivo,char*modo);

r-read//apenas pra ler
w-write//para escrever
a-append//algo com texto para adicionarmos mais texto
t-text//indica o modo texto
b-binary//indica o modo binario

Como fechar:
int fclose(FILE*fp);
-Retorna zero se fechado com sucesso

Funções para ler dados:
int fscanf(FILE*fp,char*formato,...);//le um arquivo e recebe a sua estruturacao
int fgetc(FILE*fp);//le um unico caractere por vez
char*fgets(char*s,int n,FILE*fp);//pega uma string

Funções para escrever dados:

*/