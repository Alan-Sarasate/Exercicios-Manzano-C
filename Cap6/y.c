#include <stdio.h>

    /*Escrever um programa que leia uma matriz A de uma dimensão com 15 elementos numéricos
inteiros. Apresentar o total de elementos pares existentes na matriz*/

int main (){
    int i, A[15], pares = 0;

    for(i=0; i<15; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<15; i++){
        if(A[i]%2==0) pares++;
    }

    printf("%d numeros pares na matriz\n", pares);

}