#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros positivos.
Construir uma matriz B de mesmo tipo e dimensão, em que cada elemento da matriz B deve ser
o valor negativo do elemento correspondente da matriz A. Desta forma, se em A[1] estiver
armazenado o elemento 8, deve estar em 8[1] o valor -8 e assim por diante. Apresentar os
elementos da matriz B*/

int main (){
    int i, A[10], B[10];

    for(i = 0; i<10; i++){
        printf("Digite valores inteiros positivos: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<10; i++){
        B[i] = -(A[i]);
    }

    for(i=0; i<10; i++){
        printf("%d\n", B[i]);
    }

}