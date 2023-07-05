#include <stdio.h>

    /*Escrever um programa que leia duas matrizes A e B de uma dimensão com dez elementos. A
matriz A deve aceitar apenas a entrada de valores divisíveis por 2 e 3, enquanto a matriz B deve
aceitar apenas a entrada de valores múltiplos de 5. A entrada das matrizes deve ser validada
pelo programa e não pelo usuário. Construir uma matriz C que seja o resultado da junção das
matrizes A e B, de modo que contenha 20 elementos. Apresentar os elementos da matriz C*/

int main (){
    int i=0, n, c1=0, c2=0, A[10], B[10], C[20];

    while(i<20){
        printf("Digite valores inteiros: ");
        scanf("%d", &n);
        if(n%2==0 && n%3==0){
            if(c1<10) {
                A[c1] = n;
                i++;
                c1++;
            }
            else printf("Array dos DIVISIVEIS POR 2 E 3 cheia\n");
        }else if(n%5==0){
            if(c2<10) {
                B[c2] = n;
                i++;
                c2++;
            }
            else printf("Array dos MULTIPLOS DE 5 cheia\n");
        }else{
            printf("Numero nao e divisivel por 2 e 3 ou multiplo de 5\n");
        }
    }

    for(i=0; i<20; i++){
        if(i<10) C[i] = A[i];
        else C[i] = B[i-10];
    }

    for(i=0; i<20; i++){
        printf("%d\n", C[i]);
    
    }

}