#include <stdio.h>

 /*Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
do quadrado da diferença do primeiro valor (variável A) em relação ao segundo valor (variável B)*/

int somaDosQuadrados(int A, int B, int C){
    return A*A + B*B + C*C;
}

int main (){

    printf("%d\n", somaDosQuadrados(1, 2, 3));
    printf("%d\n", somaDosQuadrados(2, 4, 6));
    printf("%d\n", somaDosQuadrados(3, 6, 9));

    return 0;
}