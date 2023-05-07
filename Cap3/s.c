#include <stdio.h>

 /*Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas
variáveis A e B. Calcular e apresentar os resultados das quatro operações aritméticas básicas*/

void operacoesBasicas(float A, float B){
    printf("\nOperacoes basicas entre %.1f e %.1f:\nsoma: %.1f\nsubtracao: %.1f\nmultilpicacao: %.1f\ndivisao: %.1f\n", A, B, A+B, A-B, A*B, A/B);
}

int main (){

    operacoesBasicas(12.3, 4.56);
    operacoesBasicas(13.1, 6.5676);

    return 0;
}