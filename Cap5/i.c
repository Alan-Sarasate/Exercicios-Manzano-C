#include <stdio.h>

    /*Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o
décimo quinto termo. A sequência de Fibonacci é formada por O, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
89, 144, 233, 377, ... etc., obtendo-se o próximo termo a partir da soma do termo atual com o
anterior sucessivamente até o infinito, se a sequência não for interrompida. Utilize para este
exercício as variáveis ATUAL, ANTERIOR e PRÓXIMO*/

int main (){
    int atual = 1, anterior = 0, proximo = 0;

    for(int i = 1; i <= 15; i++){
        printf("termo %d: %d\n", i, proximo);
        anterior = atual;
        atual = proximo;
        proximo = atual + anterior;        
    }
    
    return 0;
}