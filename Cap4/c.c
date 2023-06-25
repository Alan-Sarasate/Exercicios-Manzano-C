#include <stdio.h>

    /*Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas
pelas variáveis N1, N2, N3 e N4. Calcular a média aritmética (variável MD) desse aluno
e apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 5; caso contrário,
apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o
valor da média obtida pelo aluno*/

void verificarAprovacao(float N1, float N2, float N3, float N4){
    float MD = (N1+N2+N3+N4)/4;
    if(MD >= 5){
        printf("\nAPROVADO! Media: %.2f\n", MD);
    }else{
        printf("\nREPROVADO! Media: %.2f\n", MD);
    }
}

int main (){

    verificarAprovacao(3, 6, 2, 10);
    verificarAprovacao(4, 10, 6, 8);
    verificarAprovacao(4, 8, 3, 2);

    return 0;
}