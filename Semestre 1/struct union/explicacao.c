#include<stdio.h>


union dados
{
    int meu_int;
    float meu_float;
};
//numa struct armazena todas as variaveis, ja a union apenas uma.
//util para quando vc quer armazenar apenas uma das variaveis