#include <stdio.h>

    /*Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que
200. Sugestão: a variável que controla o contador do laço deve ser iniciada com valor 1*/

int main (){

    int n = 1;
    while(n <= 200){
        if(n%4 == 0) printf("%d\n", n);
        n++;
    }
    
    return 0;
}