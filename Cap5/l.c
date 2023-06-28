#include <stdio.h>

    /*Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o
somatório da fatorial de cada valor lido*/

int main (){
    
    int valor;
    long long int somatorio = 0;
    for(int i = 1; i <= 15; i++){
        printf("valor %d: ", i);
        scanf("%d", &valor);    
        int fatorial = 1;
        while(valor > 0){
            fatorial *= valor;
            valor--;
        }
        somatorio += fatorial;
    }
    printf("%lld", somatorio);
    
    return 0;
}