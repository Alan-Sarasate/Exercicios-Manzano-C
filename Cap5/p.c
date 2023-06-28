#include <stdio.h>

    /*Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores
pares situados na faixa numérica de 50 até 70*/

int main (){
    
    int n = 50, somatorio = 0, qValores = 0;
    float media;
    
    while(n <= 70){
        if(n%2 == 0){
            somatorio += n;
            qValores++;
        }
        n++;
    }
    media = somatorio/qValores;
    printf("Somatorio: %d\nMedia: %.2f\n", somatorio, media);
    
    return 0;
}