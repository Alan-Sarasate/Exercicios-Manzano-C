#include <stdio.h>
#include <string.h>

    /*Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de
pessoas, sendo a matriz A com 20 elementos e a matriz 8 com 30 elementos. Construir uma
matriz C, sendo esta a junção das matrizes A e 8. Desta forma, a matriz C deve ter a
capacidade de armazenar 50 elementos. Apresentar os elementos da matriz C*/

int main (){
   char A[20][50], B[30][50], C[50][50];
   int i;

    for (i = 0; i < 50; i++){
        if(i<20){
            printf("Digite o %dº nome: ", i+1);
            fgets(A[i], 50, stdin);
        }else{
            printf("Digite o %dº nome: ", i+1);
            fgets(B[i - 19], 50, stdin);
        }
    }
    printf("\n");

    for(i = 0; i < 50; i++){
        if(i<20){
            strcpy(C[i], A[i]);
        }else{
            strcpy(C[i], B[i-19]);
        }
    }

    for(i = 0; i < 50; i++){
        printf("%s\n", C[i]);
    }
    
    return 0;
}