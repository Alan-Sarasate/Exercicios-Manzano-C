#include <stdio.h>

    /*Construir um programa que calcule a tabuada de um valor qualquer de 1 até 1O e armazene os
resultados em uma matriz A de uma dimensão. Apresentar os elementos da matriz A*/

int main (){
    int i, n, A[10];
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    for(i=0; i<10; i++){
        A[i] = n*(i+1);
    }

    for(i=0; i<10; i++){
        printf("%d*%d = %d\n", n, i+1, A[i]);
    }

}