#include <stdio.h>
#include <math.h>

    /*Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME +--
3.14159 *Ri 2 * ALTURA*/

float volumeDoCilindro(float raio, float altura){
    return (3.14159)*pow(raio, 2)*altura;
}

int main (){

    printf("%.2f\n", volumeDoCilindro(1, 2));
    printf("%.2f\n", volumeDoCilindro(4, 5));
    printf("%.2f\n", volumeDoCilindro(10, 20));

    return 0;
}