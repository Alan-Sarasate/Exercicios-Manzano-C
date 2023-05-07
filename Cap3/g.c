#include <stdio.h>

/*Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações
utilizando o mesmo raciocínio aplicado quando do uso de propriedades distributivas para a
máxima combinação possível entre as quatro variáveis. Não é para calcular a propriedade distri-
butiva, apenas para usar a sua forma de combinação. Considerando a leitura de valores para as
variáveis A, B, C e D, devem ser feitas seis adições e seis multiplicações, ou seja, deve ser com-
binada a variável A com a variável B, a variável A com a variável C, a variável A com a variável D.
Depois é necessário combinar a variável B com a variável C e a variável B com a variável D e,
por fim, a variável C será combinada com a variável D*/

int somar(int A, int B){
    return A+B;
}

int multiplicar(int A, int B){
    return A*B;
}

void somarEMultiplicar (int A, int B, int C, int D){
    printf("%d + %d = %d\n", A, B, somar(A, B));
    printf("%d + %d = %d\n", A, C, somar(A, C));
    printf("%d + %d = %d\n", A, D, somar(A, D));
    printf("%d + %d = %d\n", B, C, somar(B, C));
    printf("%d + %d = %d\n", B, D, somar(B, D));
    printf("%d + %d = %d\n", C, D, somar(C, D));

    printf("%d * %d = %d\n", A, B, multiplicar(A, B));
    printf("%d * %d = %d\n", A, C, multiplicar(A, C));
    printf("%d * %d = %d\n", A, D, multiplicar(A, D));
    printf("%d * %d = %d\n", B, C, multiplicar(B, C));
    printf("%d * %d = %d\n", B, D, multiplicar(B, D));
    printf("%d * %d = %d\n", C, D, multiplicar(C, D));
}


int main (){

    somarEMultiplicar(1, 2, 3, 4);

    return 0;
}