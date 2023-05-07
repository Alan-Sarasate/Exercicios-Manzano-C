#include <stdio.h>
#include <math.h>

 /*Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
Utilize a fórmula VOLUME +- (4 / 3) * 3.14159 * (RAIO j 3)*/

float volumeDaEsfera(float raio){
    return (4.0/3.0)*(3.14159)*pow(raio, 3);
}

int main (){

    printf("%d", (4/3));

    printf("Volume da esfera: %.2f metros cubicos\n", volumeDaEsfera(6));
    printf("Volume da esfera: %.2f metros cubicos\n", volumeDaEsfera(2));
    printf("Volume da esfera: %.2f metros cubicos\n", volumeDaEsfera(1));

    return 0;
}