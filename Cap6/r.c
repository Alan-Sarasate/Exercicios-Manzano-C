#include <stdio.h>

    /*Elaborar um programa que leia seis elementos (valores inteiros) para as matrizes A e B de uma
dimensão do tipo vetor. Construir as matrizes C e D de mesmo tipo e dimensão. A matriz C
deve ser formada pelos elementos de índice ímpar das matrizes A e B e a matriz D deve ser
formada pelos elementos de índice par das matrizes A e B. Apresentar os elementos das
matrizes C e D*/

int main (){
    int i, j=0, k=0, A[6], B[6], C[6], D[6];

    for(i = 0; i<12; i++){
        if(i<6){
            printf("Digite valores inteiros: ");
            scanf("%d", &A[i]);
        }else{
            printf("Digite valores inteiros: ");
            scanf("%d", &B[i-6]);
        }
    }

    for(i=0; i<6; i++){
        if(i%2==0){
            D[j] = A[i];
            j++;
        }else{
            C[k] = A[i];
            k++;
        }
    }
    for(i=0; i<6; i++){
        if(i%2==0){
            D[j] = B[i];
            j++;
        }else{
            C[k] = B[i];
            k++;
        }
    }
    printf("C       D\n");
    for(j=0; j<6; j++){
        printf("%d       %d\n",  C[j], D[j]);
    }

}