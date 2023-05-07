#include <stdio.h>

    /*Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utili-
zando a fórmula VOLUME+-- COMPRIMENTO* LARGURA* ALTURA*/

float volumeRetangulo(float comprimento, float largura, int altura){
    return comprimento*largura*altura;
}

int main (){

    printf("%.1f metros cubicos\n", volumeRetangulo(5, 5, 5));
    printf("%.1f metros cubicos\n", volumeRetangulo(4, 7, 2));
    printf("%.1f metros cubicos\n", volumeRetangulo(12, 5, 4));

    return 0;
}