#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros. Construir
uma matriz B de mesmo tipo, em que cada elemento deve ser a metade exata de cada um dos
elementos existentes da matriz A. Apresentar os elementos das matrizes A e B*/

int main (){
    int i, A[10], B[10];

    for(i = 0; i<10; i++){
        printf("Digite valores inteiros positivos: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<10; i++){
        B[i] = A[i]/2;
    }

    for(i=0; i<10; i++){
        printf("%d\n", B[i]);
    }

}