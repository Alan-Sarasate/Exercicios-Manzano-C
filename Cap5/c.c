#include <stdio.h>

    /*Construir um programa que apresente a soma dos cem primeiros números naturais
(1+2+3+ ... +98+99+100)*/

int main (){

    int n = 1, somatorio = 0;
    while(n <= 100){
        somatorio += n;
        n++;
    }
    printf("A soma dos 100 primeiros numeros e igual a: %d", somatorio);
    
    return 0;
}