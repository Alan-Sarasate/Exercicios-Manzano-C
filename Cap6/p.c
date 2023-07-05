#include <stdio.h>

    /*Elaborar um programa que leia 12 elementos inteiros para uma matriz A de uma dimensão do
tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, observando a seguinte lei de
formação: "todo elemento da matriz A que for ímpar deve ser multiplicado por 2; caso contrário,
o elemento da matriz A deve permanecer constante". Apresentar os elementos da matriz B*/

int main (){
    int i, A[12], B[12];

    for(i = 0; i<12; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<12; i++){
        if(A[i]%2 != 0) B[i] = A[i]*2;
        else B[i] = A[i];
    }

    for(i=0; i<12; i++){
        printf("%d\n",  B[i]);
    }

}