#include <stdio.h>

    /*Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo
vetor e apresente-os em seguida*/

int main (){
    char nomes[10][50];

    for (int i = 0; i < 10; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(nomes[i], 50, stdin);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d - %s", i+1, nomes[i]);
    }
    
    return 0;
}