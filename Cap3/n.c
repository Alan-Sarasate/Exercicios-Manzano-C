#include <stdio.h>

 /*Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A,
B e C) e apresente como resultado final o valor do quadrado da soma dos três valores lidos*/

int quadradoDaSoma(int A, int B, int C){
    return (A+B+C)*(A+B+C);
}

int main (){

    printf("%d\n", quadradoDaSoma(1, 2, 3));
    printf("%d\n", quadradoDaSoma(2, 4, 6));
    printf("%d\n", quadradoDaSoma(3, 6, 9));

    return 0;
}