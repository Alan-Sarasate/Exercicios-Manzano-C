#include <stdio.h>
#include <math.h>

 /*Elaborar um programa que calcule uma raiz de base qualquer com índice qualquer*/

void radiciacao(int base, int indice){
    float result = pow(base, (float)1/indice);
    printf("\n%.1f\n", result);
}

int main (){

    radiciacao(16, 2);
    radiciacao(9, 2);
    radiciacao(25, 2);

    return 0;
}