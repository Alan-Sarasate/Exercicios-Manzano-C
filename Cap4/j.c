#include <stdio.h>

    /*Ler um valor numérico inteiro e apresentar uma mensagem informando se o valor fornecido é par
ou ímpar*/

void parOuImpar(int N){
    if(N%2==0){
        printf("%d e par\n", N);
    }else{
        printf("%d e impar\n", N);
    }
}

int main (){

    parOuImpar(2);
    parOuImpar(5);
    parOuImpar(11);
    parOuImpar(0);

    return 0;
}