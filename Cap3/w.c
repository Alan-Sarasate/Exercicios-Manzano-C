#include <stdio.h>

 /*Elaborar um programa que leia uma medida em pés e apresente o seu valor convertido em
metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 centímetros*/

void pesParaMetro(float valorEmPes){
    float valorEmMetros = 0.3048*valorEmPes;
    printf("\n%.4f pes equivalem a %.4f metros.\n", valorEmPes, valorEmMetros);
}

int main (){

    pesParaMetro(1);
    pesParaMetro(5);
    pesParaMetro(10);

    return 0;
}