#include <stdio.h>

    /*Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D.
Apresentar apenas os valores que sejam divisíveis por 2 ou 3*/

void divisivelPor2ou3(int A, int B, int C, int D){
    int array[] = {A, B, C, D};
    for (int i = 0; i < 4; i++){
        if(array[i]%2 == 0){
            if(array[i]%3 == 0){
                printf("%d e divisivel por 2 e 3\n", array[i]);
            }else {
                printf("%d e divisivel por 2\n", array[i]);
            }
        }else{
            if(array[i]%3 == 0){
                printf("%d e divisivel por 3\n", array[i]);
            }else {
                printf("%d nao e divisivel por 2 ou 3\n", array[i]);
            }
        }
    }
}

int main (){

    divisivelPor2ou3(2, 6, 12, 3);
    divisivelPor2ou3(24, 5, 7, 8);

    return 0;
}