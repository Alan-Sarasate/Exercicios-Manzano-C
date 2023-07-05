#include <stdio.h>

    /*Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir
uma matriz 8 de mesmo tipo, observando a seguinte lei de formação: "todo elemento da matriz
8 deve ser o quadrado do elemento da matriz A correspondente". Apresentar os elementos das
matrizes A e 8*/

int main (){
   int A[15], B[15], i;

    for (i = 0; i < 15; i++){
        printf("Digite o %dº valor de A: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        B[i] = A[i]*A[i];
    }

    for(i = 0; i < 15; i++){
        printf("%d\n", B[i]);
    }
    
    return 0;
}