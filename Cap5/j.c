#include <stdio.h>

    /*Elaborar um programa que apresente os valores de conversão de graus Celsius em graus
Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em
cem graus Celsius. O programa deve apresentar os valores das duas temperaturas*/

int main (){
    float tempCelsius = 10, tempFarenheit;

    while(tempCelsius <= 100){
        tempFarenheit = tempCelsius * 1.8 + 32;
        printf("%.1f graus celsius equivalem a %.1f graus farenheit.\n", tempCelsius, tempFarenheit);
        tempCelsius += 10;
    }
    
    return 0;
}