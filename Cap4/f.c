#include <stdio.h>

    /*Ler três valores inteiros representados pelas variáveis A, B e C e apresentar os valores lidos
dispostos em ordem crescente. Dica: utilizar tomada de decisão sequencial e as ideias trabalhadas
nos exercícios "g" (propriedade distributiva) e "f' (troca de valores) do capítulo 3*/

void ordenarValores(int A, int B, int C){
    printf("\nOrdem inicial: %d, %d e %d\n", A, B, C);

    if(A>B && A>C && B>C){
       printf("Ordem final: %d, %d e %d\n", A, B, C);
    }else if(A>B && A>C && !(B>C)){
        printf("Ordem final: %d, %d e %d\n", A, C, B);
    }else if(A>B && !(A>C)){
        printf("Ordem final: %d, %d e %d\n", C, A, B);
    }else if(B>A && B>C && A>C){
        printf("Ordem final: %d, %d e %d\n", B, A, C);
    }else if(B>A && B>C && A<C){
        printf("Ordem final: %d, %d e %d\n", B, C, A);
    }else 
        printf("Ordem final: %d, %d e %d\n", C, B, A);
}
int main (){

    ordenarValores(2, 4, 1);
    ordenarValores(6, 3, 5);
    ordenarValores(4, 3, 1);
    ordenarValores(0, 12, 5);

    return 0;
}