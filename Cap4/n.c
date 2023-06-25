#include <stdio.h>

    /*Efetuar a leitura de três valores inteiros desconhecidos representados pelas variáveis A, B e C.
Somar os valores fornecidos e apresentar o resultado somente se for maior ou igual a 100*/

void maiorQue100(int A, int B, int C){
    A+B+C > 100 ? 
        printf("Resultado: %d\n", A+B+C) :
        printf("Resultado menor que 100.\n");
}

int main (){

    maiorQue100(34, 56, 23);
    maiorQue100(10, 34, 45);
    maiorQue100(45, 45, 34);
    maiorQue100(19, 6, 2004);

    return 0;
}