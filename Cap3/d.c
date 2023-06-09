#include <stdio.h>

/*Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo
gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem. Desta
forma, será possível obter a distância percorrida com a fórmula DISTÂNCIA +-- TEMPO *
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível
utilizada na viagem com a fórmula LITROS_USADOS +-- DISTÂNCIA/ 12. O programa deve
apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem*/

void litrosUsados(float tempo, float velocidade){
    float distancia = tempo*velocidade, litrosUsados = distancia/12;
    printf("\nVelocidade media: %.1f km/h\nTempo: %.1f hora(s)\nDistancia percorrida: %.1f km\nLitros usados: %.1f litro(s)\n", velocidade, tempo, distancia, litrosUsados);
}
int main (){

    litrosUsados(1, 60);
    litrosUsados(3, 56);
    litrosUsados(8, 78);

    return 0;
}