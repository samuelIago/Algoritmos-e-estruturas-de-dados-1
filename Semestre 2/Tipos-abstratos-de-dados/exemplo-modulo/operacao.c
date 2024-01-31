// exemplo uso de modulos
#include<stdlib.h>
#include "operacao.h"

float soma(float num1, float num2, float resultado){ 
    resultado = num1+num2;
    return resultado;
}
float subtracao(float num1, float num2, float resultado){
    resultado = num1 - num2;
    return resultado;
}
float divisao(float num1, float num2, float resultado){
    resultado = num1/num2;
    return resultado;
}
float multiplicacao(float num1, float num2, float resultado){
    resultado = num1 * num2;
    return resultado;
}