#include <stdio.h>

/*Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
de conversão é C +-- ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius*/

float FarenheintParaCelsius(float tempEmFarenheint){
    return ((tempEmFarenheint - 32)*5)/9;
}

int main (){

    printf("%.1f\n", FarenheintParaCelsius(32));
    printf("%.1f\n", FarenheintParaCelsius(122));
    printf("%.1f\n", FarenheintParaCelsius(212));

    return 0;
}