#include <stdio.h>

 /*Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
do quadrado da diferença do primeiro valor (variável A) em relação ao segundo valor (variável B)*/

int quadradoDaDiferenca(int A, int B){
    return (A-B)*(A-B);
}

int main (){

    printf("%d\n", quadradoDaDiferenca(1, 1));
    printf("%d\n", quadradoDaDiferenca(2, 1));
    printf("%d\n", quadradoDaDiferenca(3, 1));
    printf("%d\n", quadradoDaDiferenca(6, 1));

    return 0;
}