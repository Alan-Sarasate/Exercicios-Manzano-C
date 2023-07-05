#include <stdio.h>

    /*Elaborar um programa que leia duas matrizes A e B de uma dimensão com 12 elementos. A
matriz A deve aceitar apenas a entrada de valores divisíveis por 2 ou 3, enquanto a matriz B
deve aceitar apenas a entrada de valores que não sejam múltiplos de 5. A entrada das matrizes
deve ser validada pelo programa e não pelo usuário. Construir uma matriz C que seja o
resultado da junção das matrizes A e B, de forma que contenha 24 elementos. Apresentar os
elementos da matriz C*/

int main (){
    int i=0, n, c1=0, c2=0, A[6], B[6], C[12];

    while(i<12){
        printf("Digite valores inteiros: ");
        scanf("%d", &n);
        if(n%2==0 || n%3==0){
            if(c1<6) {
                A[c1] = n;
                i++;
                c1++;
            }
            else printf("Array dos DIVISIVEIS POR 2 OU 3 cheia\n");
        }else if(n%5!=0){
            if(c2<6) {
                B[c2] = n;
                i++;
                c2++;
            }
            else printf("Array dos NAO MULTIPLOS DE 5 cheia\n");
        }else{
            printf("Numero nao e divisivel por 2 e 3 ou e multiplo de 5\n");
        }
    }

    for(i=0; i<12; i++){
        if(i<6) C[i] = A[i];
        else C[i] = B[i-6];
    }

    for(i=0; i<12; i++){
        printf("%d\n", C[i]);
    
    }

}