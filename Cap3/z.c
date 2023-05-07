#include <stdio.h>
#include <math.h>

 /*Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
do quadrado da divisão do primeiro valor (variável A) em relação ao segundo valor (variável B)*/

void quadradoDaDivisao(int A, int B){
    float div = A/(float)B;

    printf("\n%f\n", pow(div, 2));
}

int main (){

    quadradoDaDivisao(8, 4);
    quadradoDaDivisao(9, 1);
    quadradoDaDivisao(-4, 4);

    return 0;
}