#include <stdio.h>

    /*Elaborar um programa que leia 15 elementos reais para uma matriz A de uma dimensão do tipo
vetor. Construir uma matriz B de mesmo tipo e dimensão, observando a seguinte lei de
formação: "todo elemento da matriz A que possuir índice par deve ter seu elemento dividido por
2; caso contrário, o elemento da matriz A deve ser multiplicado por 1.5". Apresentar os
elementos da matriz B*/

int main (){
    int i;
    float A[15], B[15];

    for(i = 0; i<15; i++){
        printf("Digite valores reais: ");
        scanf("%f", &A[i]);
    }

    for(i=0; i<15; i++){
        if(i%2 == 0) B[i] = A[i]/2;
        else B[i] = A[i]*1.5;
    }

    for(i=0; i<15; i++){
        printf("%.1f\n",  B[i]);
    }

}