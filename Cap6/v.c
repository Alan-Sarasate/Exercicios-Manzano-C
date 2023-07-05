#include <stdio.h>

    /*Construir um programa que leia uma matriz A de uma dimensão do tipo vetor com 30 elementos
do tipo inteiro. Ao final do programa, apresentar a quantidade de valores pares e ímpares
existentes na referida matriz*/

int main (){
    int A[30], i, impares = 0, pares=0;

    for(i=0; i<30; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<30; i++){
        if(A[i]%2==0) pares++;
        else impares++;
    }

    printf("Quantidade de pares: %d\nQuantidade de impares: %d\n", pares, impares);

    

}