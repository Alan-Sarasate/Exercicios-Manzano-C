#include <stdio.h>

    /*Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a
média dos valores lidos*/

int main (){
    
    float valor, somatorio = 0, media;
    for(int i = 1; i <= 10; i++){
        printf("valor %d: ", i);
        scanf("%f", &valor);
        somatorio += valor;  
    }
    media = somatorio/10;
    printf("Somatorio: %.2f\nMedia: %.2f", somatorio, media);
    
    return 0;
}