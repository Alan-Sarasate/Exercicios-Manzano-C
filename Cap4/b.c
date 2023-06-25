#include <stdio.h>

    /*Efetuar a leitura de um valor numérico inteiro positivo ou negativo representado pela variável N e
apresentar o valor lido como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser
multiplicado por -1*/

int semprePositivo(int N){
    if(N<0){
        return (-N);
    }else return N;
}

int main (){

    printf("%d\n", semprePositivo(-4));
    printf("%d\n", semprePositivo(4));
    printf("%d\n", semprePositivo(0));

    return 0;
}