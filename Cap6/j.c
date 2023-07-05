#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A do tipo vetor com 20 elementos inteiros. Construir
uma matriz 8 do mesmo tipo e dimensão da matriz A, sendo cada elemento da matriz 8 o
somatório de 1 até o valor do elemento correspondente armazenado na matriz A. Se o valor do
elemento da matriz A[1] for 20, o elemento correspondente da matriz 8[1] deve ser 15, pois o
somatório do elemento da matriz A é 1 +2+3+4+5. Apresentar os elementos da matriz 8*/

int main (){
    int i, A[20], B[20];

    for(i = 0; i<20; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<20; i++){
        int somatorio = 0, aux = A[i];
        while(aux>0){
            somatorio += aux;
            aux--;
        }
        B[i] = somatorio;
    }

    for(i=0; i<20; i++){
        printf("%d\n", B[i]);
    }

}