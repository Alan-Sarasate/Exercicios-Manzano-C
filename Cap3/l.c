#include <stdio.h>

 /*Elaborar um programa que apresente o valor da conversão em dólar (US$) de um valor lido em real
(R$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais dispo-
nível com o usuário.*/

float realParaDolar(float reais, float cotacaoDolar){
    return reais/cotacaoDolar;
}

int main (){

    printf("US$%.2f\n", realParaDolar(10, 4.95));
    printf("US$%.2f\n", realParaDolar(20, 4.95));
    printf("US$%.2f\n", realParaDolar(30, 4.95));
    printf("US$%.2f\n", realParaDolar(60, 4.95));

    return 0;
}