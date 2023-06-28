#include <stdio.h>

    /*Construir um programa que apresente como resultado a fatorial dos valores ímpares situados na
faixa numérica de 1 até 1O*/

int main (){
    
    for(int i = 1; i<=10 ; i++){
        if(i%2 != 0){
            int fatorial = 1, aux = i;
            while(aux>0){
                fatorial *= aux;
                aux--;
            }
            printf("%d! e igual a %d\n", i, fatorial);
        }
    }
    
    return 0;
}