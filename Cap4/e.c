#include <stdio.h>
#include <math.h>

    /*Efetuar a leitura de três valores numéricos (representados pelas variáveis A, B e C) e processar o
cálculo da equação completa de segundo grau, utilizando a fórmula de Bhaskara (considerar para
a solução do problema todas as possíveis condições para delta: delta < O - não há solução real,
delta> O - há duas soluções reais e diferentes e delta= O - há apenas uma solução real). Lembre-
-se de que é completa a equação de segundo grau que possui todos os coeficientes A, B e C
diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas
para delta*/

void equacaoSegundoGrau(int A, int B, int C){
    if(A==0 || B==0 || C==0){
        printf("Equacao incompleta.\n");
    }else{
        int delta = pow(B, 2)-(4*A*C);
        if(delta < 0){
            printf("Não há solucoes reais.\n");
        }else if(delta == 0){
            float x = ((-B)+sqrt(delta))/2*A;
            printf("Apenas uma solucao real. S=(%.1f)\n", x);
        }else{
            float x1 = ((-B)+sqrt(delta))/2*A, x2 = ((-B)-sqrt(delta))/2*A;
            printf("Duas solucoes reais. S=(%.1f, %.1f)\n", x1, x2);
        }
    }
}

int main (){

    equacaoSegundoGrau(2, 4, 1);
    equacaoSegundoGrau(6, 12, 5);
    equacaoSegundoGrau(1, 2, 1);
    equacaoSegundoGrau(0, 12, 5);

    return 0;
}