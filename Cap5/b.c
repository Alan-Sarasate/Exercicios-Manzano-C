#include <stdio.h>

    /*Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional*/

int main (){

    int n, i=1;
    printf("Digite o numero que deseja saber a tabuada: ");
    scanf("%d", &n);
    while(i < 10){
        printf("%d * %d: %d\n",n, i, n*i);
        i++;
    }
    
    return 0;
}