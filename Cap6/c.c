#include <stdio.h>

    /*Escrever um programa que leia duas matrizes (denominadas A e 8) do tipo vetor com
20 elementos reais. Construir uma matriz C, sendo cada elemento da matriz C a subtração de
um elemento correspondente da matriz A com um elemento correspondente da matriz 8, ou
seja, a operação de processamento deve estar baseada na operação C[I] +- A[I] - 8[1]. Ao final,
apresentar os elementos da matriz C*/

int main (){
   float A[20], B[20], C[20];
   int i;

    for (i = 0; i < 20; i++){
        printf("Digite o %dº valor de A: ", i+1);
        scanf("%f", &A[i]);
        printf("Digite o %dº valor de B: ", i+1);
        scanf("%f", &B[i]);
    }
    printf("\n");

    for(i = 0; i < 20; i++){
        C[i] = A[i] - B[i];
    }

    for(i = 0; i < 20; i++){
        printf("%.1f\n", C[i]);
    }
    
    return 0;
}