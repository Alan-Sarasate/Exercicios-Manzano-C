#include <stdio.h>

    /*Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500*/

int main (){

    int n = 1, somatorio = 0;
    while(n <= 500){
        if(n%2 == 0) somatorio += n;
        n++;
    }
    printf("A soma dos valores pares entre 1 e 500 e igual a: %d", somatorio);
    
    return 0;
}