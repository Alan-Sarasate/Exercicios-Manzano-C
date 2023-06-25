#include <stdio.h>

    /*Ler cinco valores numéricos inteiros (variáveis A, B, C, D e E), identificar e apresentar o maior e o
menor valores informados. Não execute a ordenação dos valores como no exercício "f'.*/

void maiorEMenor(int A, int B, int C, int D, int E){
    int array[] = {A, B, C, D, E};
    int maior = array[0], menor = array[0];
    for (int i = 0; i < 5; i++){
        if(array[i]> maior){
            maior=array[i];
        }else if(array[i] < menor){
            menor = array[i];
        }
    }
    printf("Maior: %d, menor: %d\n", maior, menor);
}

int main (){

    maiorEMenor(2, 4, 1, 3, 2);
    maiorEMenor(6, 3, 5, 6, 3);
    maiorEMenor(4, 3, 1, 10, 5);
    maiorEMenor(0, 12, 5, 45, -5);

    return 0;
}