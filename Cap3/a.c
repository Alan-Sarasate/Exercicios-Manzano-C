#include <stdio.h>

    /*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
de conversão é F +-- (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius*/

float CelsiusParaFarenheint(float tempEmCelsius){
    return ((9*tempEmCelsius)+160)/5;
}

int main (){

    printf("%.1f\n", CelsiusParaFarenheint(0));
    printf("%.1f\n", CelsiusParaFarenheint(50));
    printf("%.1f\n", CelsiusParaFarenheint(100));

    return 0;
}