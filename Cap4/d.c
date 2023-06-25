#include <stdio.h>

    /*Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis
N1, N2, N3 e N4. Calcular a média aritmética (variável MD1) desse aluno e apresentar a
mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame, representada pela variável NE) do aluno e calcular uma
nova média aritmética (variável MD2) entre a nota de exame e a primeira média aritmética. Se o
valor da nova média for maior ou igual a cinco, apresentar a mensagem "Aprovado em exame";
caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das
mensagens, o valor da média obtida pelo aluno.*/

void verificarAprovacao(){
    int i = 1;
    float notaTotal = 0;
    while(i<5){
        float nota = 0;
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        notaTotal += nota;
        i++;
    }
    float MD = notaTotal/4;
    if(MD >= 7){
        printf("\nAPROVADO! Media: %.1f\n", MD);
    }else{
        float NE, MD2;
        printf("Nota do Exame: ");
        scanf("%f", &NE);
        MD2 = (MD+NE)/2;
        if(MD2>=5) printf("\nAPROVADO EM EXAME! Media: %.1f\n", MD2);
        else printf("\nREPROVADO! Media: %.1f\n", MD2);
    }
}

int main (){

    verificarAprovacao();

    return 0;
}