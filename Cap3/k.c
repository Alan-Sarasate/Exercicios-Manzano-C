#include <stdio.h>

 /*Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar
(US$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares
disponível com o usuário*/

float dolarParaReal(float dolares, float cotacaoDolar){
    return dolares*cotacaoDolar;
}

int main (){

    printf("R$%.2f\n", dolarParaReal(1, 4.95));
    printf("R$%.2f\n", dolarParaReal(2, 4.95));
    printf("R$%.2f\n", dolarParaReal(3, 4.95));
    printf("R$%.2f\n", dolarParaReal(6, 4.95));

    return 0;
}