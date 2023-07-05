#include <stdio.h>

    /*Escrever um programa que leia três matrizes (A, 8 e C) de uma dimensão do tipo vetor com
cinco elementos cada, que sejam do tipo real. Construir uma matriz D, sendo esta o resultado
da junção das três matrizes (A, 8 e C). Desta forma, a matriz D deve ter o triplo de elementos
das matrizes A, 8 e C, ou seja, 15 elementos. Apresentar os elementos da matriz D*/

int main (){
    float A[5], B[5], C[5], D[15];
    int i;

    for(i = 0; i<15; i++){
        if(i<5){
            printf("Digite valores reais: ");
            scanf("%f", &A[i]);
        }else if(i >= 5 && i < 10){
            printf("Digite valores reais: ");
            scanf("%f", &B[i-5]);
        }else{
            printf("Digite valores reais: ");
            scanf("%f", &C[i-10]);
        }
    }

    for(i=0; i<15; i++){
        if(i<5){
            D[i] = A[i];
        }else if(i >= 5 && i < 10){
            D[i] = B[i-5];
        }else{
            D[i] = C[i-10];
        }
    }
    for(i=0; i<15; i++){
        printf("%.1f\n", D[i]);
    }

}