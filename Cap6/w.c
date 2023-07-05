#include <stdio.h>

    /*Elaborar um programa que leia duas matrizes A e B de uma dimensão do tipo vetor com dez
elementos inteiros cada. Construir uma matriz C de mesmo tipo e dimensão que seja formada
pelo quadrado da soma dos elementos correspondentes nas matrizes A e B. Apresentar os
elementos da matriz C*/

int main (){
    int A[10], B[10], C[10], i;

    for(i=0; i<20; i++){
        if(i<10){
            printf("Digite valores inteiros para A: ");
            scanf("%d", &A[i]);
        }else{
            printf("Digite valores inteiros para B: ");
            scanf("%d", &B[i-10]);
        }
    }

    for(i=0; i<10; i++){
        C[i] = (A[i]+B[i])*(A[i]+B[i]);
    }

    for(i=0; i<10; i++){
        printf("(%d + %d) * (%d + %d) = %d\n", A[i], B[i], A[i], B[i], C[i]);
    }

    

    

}