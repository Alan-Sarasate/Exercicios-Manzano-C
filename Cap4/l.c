#include <stdio.h>

    /*Fazer a leitura de um valor numérico inteiro qualquer e apresentá-lo caso não seja maior que 3.
Dica: para a solução deste problema utilize apenas o operador lógico de negação*/

void menorQue3(int N){
    if(!(N>3)) printf("%d\n", N);
}

int main (){

    menorQue3(2);
    menorQue3(5);
    menorQue3(11);
    menorQue3(0);

    return 0;
}