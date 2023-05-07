#include <stdio.h>

    /*Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao qua-
drado*/

int elevarAoQuadrado(int numero){
    return numero*numero;
}

int main (){

    printf("%d\n", elevarAoQuadrado(5));
    printf("%d\n", elevarAoQuadrado(15));
    printf("%d\n", elevarAoQuadrado(12));

    return 0;
}