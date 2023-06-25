#include <stdio.h>

    /*Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e
apresentar o resultado da diferença do maior valor pelo menor valor*/

int difMaiorMenor(int A, int B){
    if(A>B){
        return A-B;
    }else if(B>A){
        return B-A;
    }
}

int main (){

    printf("%d\n", difMaiorMenor(0, 5));
    printf("%d\n", difMaiorMenor(50, 7));
    printf("%d\n", difMaiorMenor(100, 8));

    return 0;
}