#include <stdio.h>
#include <math.h>

 /*Elaborar um programa que leia dois valores numéricos inteiros, os quais devem representar a
base e o expoente de uma potência, calcule a potência e apresente o resultado obtido*/

void Potenciacao(int base, int expoente){
    int result = pow(base, expoente);
    printf("\n%d elevado a %d e igual a %d\n", base, expoente, result);
}

int main (){

    Potenciacao(5, 2);
    Potenciacao(3, 2);
    Potenciacao(5, 3);

    return 0;
}