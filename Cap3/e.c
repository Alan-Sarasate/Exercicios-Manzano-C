#include <stdio.h>

    /*Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a
fórmula PRESTAÇÃO+-- VALOR+ (VALOR* (TAXA/100) * TEMPO)*/

float calcularAtraso(float valorDaParcela, float taxa, int tempoEmDias){
    return valorDaParcela + (valorDaParcela*(taxa/100)*tempoEmDias);
}

int main (){

    printf("R$%.2f\n", calcularAtraso(1000, 5, 23));
    printf("R$%.2f\n", calcularAtraso(400, 7, 2));
    printf("R$%.2f\n", calcularAtraso(123, 5, 45));

    return 0;
}