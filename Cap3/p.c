#include <stdio.h>

 /*Elaborar um programa que leia o valor numérico correspondente ao salário mensal (variável SM)
de um trabalhador e também faça a leitura do valor do percentual de reajuste (variável PR) a ser
atribuído. Apresentar o valor do novo salário (variável NS)*/

float reajusteSalarial(float SM, float PR){
    float NS = SM*(1+(PR/100));
    return NS;
}

int main (){

    printf("R$%.2f\n", reajusteSalarial(1000, 1));
    printf("R$%.2f\n", reajusteSalarial(1500, 4.5));
    printf("R$%.2f\n", reajusteSalarial(3000, 5));

    return 0;
}