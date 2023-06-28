#include <stdio.h>

    /*Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados na
faixa de O a 20. Sugestão: para verificar se o valor numérico é ímpar, dentro do laço de repe-
tição, fazer a verificação lógica dessa condição com a instrução se/fim_se dentro do próprio
laço, perguntando se o valor numérico do contador é ímpar (se o resto do número dividido por 2
é diferente de zero); sendo, mostre-o; não sendo, passe para o próximo valor numérico.*/

int main (){

    int n = 0;
    while(n <= 20){
        if(n%2 != 0) printf("%d\n", n);
        n++;
    }
    
    return 0;
}