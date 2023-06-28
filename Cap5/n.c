#include <stdio.h>

    /*Elaborar um programa que leia sucessivamente valores numéricos e apresente no final
o somatório, a média e o total de valores lidos. O programa deve ler os valores enquanto o
usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o usuário
fornecer um valor negativo (menor que zero)*/

int main (){
    
    int valor, somatorio = 0, qValores = 0;
    float media;

    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= 0){
            somatorio += valor;
            qValores++;
        }
    }while(valor > 0);

    media = somatorio/qValores;

    printf("\nQuantidade de valores lidos: %d\nSomatorio: %d\nMedia: %.2f\n", qValores, somatorio, media);
    
    return 0;
}