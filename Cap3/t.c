#include <stdio.h>

 /*Construir um programa que calcule e apresente em metros por segundo o valor da velocidade de
um projétil que percorre uma distância em quilômetros a um espaço de tempo em minutos. Utilize
a fórmula VELOCIDADE+- (DISTÂNCIA* 1000) /(TEMPO* 60)*/

float velocidade(float distanciaEmKM, float tempoEmMinutos){
    return (distanciaEmKM*1000)/(tempoEmMinutos*60);
}

int main (){

    printf("Velocidade: %.1f m/s\n", velocidade(600, 65));
    printf("Velocidade: %.1f m/s\n", velocidade(1, 1));
    printf("Velocidade: %.1f m/s\n", velocidade(1000, 434));

    return 0;
}