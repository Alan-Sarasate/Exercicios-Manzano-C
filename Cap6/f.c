#include <stdio.h>

    /*Construir um programa que leia duas matrizes A e 8 do tipo vetor com 15 elementos quaisquer
inteiros. Construir uma matriz C, sendo esta o resultado da junção das matrizes A e 8. Desta
forma, a matriz C deve ter o dobro de elementos em relação às matrizes A e 8, ou seja, a matriz
C deve possuir 30 elementos. Apresentar a matriz C*/

int main (){
   int A[15], B[15], C[30], i;

    for (i = 0; i < 30; i++){
        if(i<15){
            printf("Digite o %dº valor de A: ", i+1);
            scanf("%d", &A[i]);
        }else{
            printf("Digite o %dº valor de B: ", i-14);
            scanf("%d", &B[i-15]);
        }
    }
    printf("\n");

    for(i = 0; i < 30; i++){
        if(i<15){
           C[i] = A[i];
        }else{
            C[i] = B[i-15];
        }
    }

    for(i = 0; i < 30; i++){
        printf("%d\n", C[i]);
    }
    
    return 0;
}