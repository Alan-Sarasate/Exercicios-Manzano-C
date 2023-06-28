#include <stdio.h>

    /*Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja
informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuário*/

int main (){
    
    int n, maior = 0, menor = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &n);
        if(n > maior) maior = n;
        if(n < menor) menor = n;
    }while(n>=0);

    printf("Maior valor: %d\nMenor valor: %d\n", maior, menor);
    return 0;
}