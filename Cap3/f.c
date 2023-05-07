#include <stdio.h>

 /*Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A
passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apre-
sentar os valores após a efetivação do processamento da troca*/

void trocarValores(int A, int B){
    printf("\nValor inicial de A: %d, valor inicial de B: %d\n", A, B);
    A = A+B;
    B = A-B;
    A = A-B;
    printf("Novo valor de A: %d, novo valor de B: %d\n", A, B);
}

int main (){

    trocarValores(6, 10);
    trocarValores(10, 5);
    trocarValores(-7, 10);
    trocarValores(-7, -6);

    return 0;
}