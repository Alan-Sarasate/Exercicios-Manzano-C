#include <stdio.h>

 /*Construir um programa que leia um valor numérico inteiro e apresente como resultado os seus
valores sucessor e antecessor*/

void sucessorAntecessor(int numero){
    printf("\nSucessor: %d\nAntecessor: %d\n",numero+1, numero-1);
}

int main (){

    sucessorAntecessor(5);
    sucessorAntecessor(3);
    sucessorAntecessor(-4);

    return 0;
}