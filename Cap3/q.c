#include <stdio.h>

 /*Elaborar um programa que calcule e apresente o valor do resultado da área de uma circunfe-
rência (variável A). O programa deve solicitar a entrada do valor do raio da circunferência (variá-
vel R). Para a execução deste problema utilize a fórmula A+- 3.14159265* R*/

float areaCircunferencia(float R){
    float A = 3.14159 * R;
    return A;
}

int main (){

    printf("%.1f metros quadrados\n", areaCircunferencia(4.67));
    printf("%.1f metros quadrados\n", areaCircunferencia(7));
    printf("%.1f metros quadrados\n", areaCircunferencia(12));

    return 0;
}