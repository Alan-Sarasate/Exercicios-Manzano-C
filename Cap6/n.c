#include <stdio.h>

    /*Elaborar um programa que leia 20 elementos (valores reais) para temperaturas em graus
Celsius e armazene esses valores em uma matriz A de uma dimensão. O programa ao final
deve apresentar a menor, a maior e a média das temperaturas lidas*/

int main (){
    int i;
    float A[20], maior, menor, media=0;

    for(i = 0; i<20; i++){
        if(i<1){
            printf("Digite temperaturas em graus Farenheit: ");
            scanf("%f", &A[i]);
            maior = A[i];
            menor = A[i];
        }else{
            printf("Digite temperaturas em graus Farenheit: ");
            scanf("%f", &A[i]);
            A[i] > maior? maior = A[i] :
                A[i] < menor? menor = A[i] : printf("");
        }
    }

    for(i=0; i<20; i++){
        media += A[i];
    }

    printf("\n\tmenor temperatura: %.1f graus F\n\tmaior temperatura: %.1f graus F\n\tmedia: %.1f graus F", maior, menor, media/20);

}