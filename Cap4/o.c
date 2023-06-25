#include <stdio.h>

    /*Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação
somente se o resultado for maior que 30*/

void dobroMaiorQue30(int N){
    int dobro = N*2;
    dobro > 30 ? 
        printf("Resultado: %d\n", dobro) :
        printf("Resultado menor que 30.\n");
}

int main (){

    dobroMaiorQue30(12);
    dobroMaiorQue30(14);
    dobroMaiorQue30(57);
    dobroMaiorQue30(19);

    return 0;
}