#include <stdio.h>

    /*Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D.
Apresentar apenas os valores que sejam divisíveis por 2 e 3*/

void divisivelPor2e3(int A, int B, int C, int D){
    int array[] = {A, B, C, D};
    for (int i = 0; i < 4; i++){
        array[i]%2 == 0 && array[i]%3==0 ? 
            printf("%d e divisivel por 2 e 3.\n", array[i]) : 
            printf("%d nao e divisivel por 2 e 3.\n", array[i]);
    }
}

int main (){

    divisivelPor2e3(2, 6, 12, 3);
    divisivelPor2e3(24, 5, 7, 8);

    return 0;
}