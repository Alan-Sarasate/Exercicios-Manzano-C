#include <stdio.h>

 /*Elaborar um programa que leia quatro valores numéricos inteiros (variáveis A, B, C e D). Ao final
o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor,
e o resultado da soma (variável S) do segundo com o quarto valor*/

void somaEProduto(int A, int B, int C, int D){
    int S = B+D, P = A+C;
    printf("\n%d + %d = %d\n%d * %d = %d\n", B, D, S, A, C, P);

}

int main (){

    somaEProduto(1, 1, 3, 4);
    somaEProduto(2, 1, 6, 8);
    somaEProduto(3, 1, 4, 2);
    somaEProduto(6, 2, 4, 1);

    return 0;
}