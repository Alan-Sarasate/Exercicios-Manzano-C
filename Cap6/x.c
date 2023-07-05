#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A de uma dimensão com seis elementos do tipo real.
Construir uma matriz B, em que cada posição de índice ímpar da matriz B deve ser atribuída
com um elemento de índice par existente na matriz A e cada posição de índice par da matriz B
deve ser atribuída com um elemento de índice ímpar existente na matriz A. Apresentar os
elementos das duas matrizes*/

int main (){
    float A[6], B[6];
    int i;

    for(i=0; i<6; i++){
        printf("Digite valores reais: ");
        scanf("%f", &A[i]);
    }

    for(i=0; i<6; i++){
        if(i%2==0) B[i] = A[i+1];
        else B[i] = A[i-1];
    }
    printf("A\t\tB\n");
    for(i=0; i<6; i++){
        printf("%.1f\t\t%.1f\n", A[i], B[i]);
    }

}