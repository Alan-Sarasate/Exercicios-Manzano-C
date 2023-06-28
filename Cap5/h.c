#include <stdio.h>

    /*Escrever um programa que apresente como resultado a potência de uma base qualquer elevada
a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o valor do expoente.
Considere apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais.
Sugestão: não utilize o formato "base j expoente", pois é uma solução muito trivial. Use a
técnica de laço, em que o valor da base deve ser multiplicado o número de vezes determinado
no expoente*/

int main (){

    int base, expoente;
    printf("Valor da base: ");
    scanf("%d", &base);
    printf("Valor do expoente: ");
    scanf("%d", &expoente);
    
    if(base < 0 || expoente < 0) printf("Base ou expoente negativos.\n"); 
    else if(expoente == 0) printf("%d elevado a %d e igual a 1\n", base, expoente);
    else{
        int aux = base;
        for(int i = 1; i<expoente; i++) base *= aux;
        printf("%d elevado a %d e igual a %d\n", aux, expoente, base);
    }

    return 0;
}