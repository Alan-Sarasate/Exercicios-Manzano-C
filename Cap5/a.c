#include <stdio.h>
#include <math.h>

    /*Elaborar um programa que apresente como resultado os quadrados dos números inteiros
existentes na faixa de valores de 15 a 200*/

int main (){

    int n = 15;
    while(n <= 200){
        printf("%d ao quadrado: %d\n",n, n*n);
        n++;
    }
    
    return 0;
}