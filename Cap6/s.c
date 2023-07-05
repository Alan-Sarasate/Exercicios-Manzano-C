#include <stdio.h>

    /*Elaborar um programa que leia duas matrizes A e B de uma dimensão com seis elementos. A
matriz A deve aceitar apenas a entrada de valores pares, enquanto a matriz B deve aceitar
apenas a entrada de valores ímpares. A entrada das matrizes deve ser validada pelo programa
e não pelo usuário. Construir uma matriz C que seja o resultado da junção das matrizes A e B,
de modo que a matriz C contenha 12 elementos. Apresentar os elementos da matriz C*/

int main (){
    int i=0, n, par=0, impar=0, A[6], B[6], C[12];

    while(i<12){
        printf("Digite valores inteiros: ");
        scanf("%d", &n);
        if(n%2==0){
            if(par<6) {
                A[par] = n;
                i++;
                par++;
            }
            else printf("Array dos PARES cheia\n");
        }else{
            if(impar<6) {
                B[impar] = n;
                i++;
                impar++;
            }
            else printf("Array dos IMPARES cheia\n");
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