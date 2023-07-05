#include <stdio.h>

    /*Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos numéricos
inteiros. Apresentar o total de elementos ímpares existentes na matriz e também o percentual
do valor total de números ímpares em relação à quantidade total de elementos armazenados na
matriz*/

int main (){
    int i, A[15], impares = 0;

    for(i=0; i<15; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<15; i++){
        if(A[i]%2!=0) impares++;
    }

    float percentual = ((float)impares/15)*100;

    printf("%d numeros impares na matriz\n%.1f por cento dos numero sao impares\n",impares, percentual);

}