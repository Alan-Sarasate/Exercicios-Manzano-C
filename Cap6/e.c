#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir
uma matriz 8 de mesmo tipo, e cada elemento da matriz 8 deve ser o resultado da fatorial
correspondente de cada elemento da matriz A. Apresentar as matrizes A e 8*/

int main (){
   int A[15], B[15], i;

    for (i = 0; i < 15; i++){
        printf("Digite o %dº valor de A: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        int fatorial = 1, aux = A[i];
        while(aux > 1){
            fatorial *= aux;
            aux--;
        }
        B[i] = fatorial;
    }

    for(i = 0; i < 15; i++){
        printf("%d! e igual a %d\n", A[i], B[i]);
    }
    
    return 0;
}