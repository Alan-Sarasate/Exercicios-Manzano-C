#include <stdio.h>

    /*Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir
uma matriz 8 de mesma dimensão com os elementos da matriz A multiplicados por 3.
O elemento 8[1] deve ser implicado pelo elemento A[1] * 3, o elemento 8[2] implicado pelo
elemento A[2] * 3 e assim por diante, até 8. Apresentar a matriz 8*/

int main (){
   int A[8], B[8], i;

    for (i = 0; i < 8; i++){
        printf("Digite o %dº valor inteiro: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(i = 0; i < 8; i++){
        B[i] = A[i]*3;
    }

    for(i = 0; i < 8; i++){
        printf("o triplo de %d e igual a %d\n", A[i], B[i]);
    }
    
    return 0;
}