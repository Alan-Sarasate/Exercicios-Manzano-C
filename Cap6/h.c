#include <stdio.h>

    /*Elaborar um programa que leia 20 elementos do tipo real em uma matriz A unidimensional e
construir uma matriz 8 de mesma dimensão com os mesmos elementos armazenados na matriz
A, porém de forma invertida. Ou seja, o primeiro elemento da matriz A passa a ser o último da
matriz 8, o segundo elemento da matriz A passa a ser o penúltimo da matriz 8 e assim por
diante. Apresentar os elementos das matrizes A e 8*/

int main (){
    float A[20], B[20];
    int i;

    for(i = 0; i<20; i++){
        printf("Digite valores reais: ");
        scanf("%f", &A[i]);
    }

    for(i=0; i<20; i++){
        B[19 - i] = A[i];
    }
    for(i=0; i<20; i++){
        printf("%.1f - %.1f\n", A[i], B[i]);
    }

}