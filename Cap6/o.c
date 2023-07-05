#include <stdio.h>

    /*Escrever um programa que leia 25 elementos (valores reais) para temperaturas em graus
Celsius e armazene esses valores em uma matriz A de uma dimensão do tipo vetor. Construir
uma matriz B de mesmo tipo e dimensão, em que cada elemento da matriz B deve ser a
conversão da temperatura em graus Fahrenheit do elemento correspondente da matriz A.
Apresentar os elementos das matrizes A e B*/

int main (){
    int i;
    float A[25], B[25];

    for(i = 0; i<25; i++){
        printf("Digite as temperaturas em graus Celsius: ");
        scanf("%f", &A[i]);
    }

    for(i=0; i<25; i++){
        B[i] = (A[i]*1.8)+32;
    }

    for(i=0; i<25; i++){
        printf("%.1f graus Celsius eqiuvalem e %.1f graus Farenheit\n", A[i], B[i]);
    }

}