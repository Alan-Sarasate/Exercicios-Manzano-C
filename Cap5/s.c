#include <stdio.h>

    /*Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer,
representando o dividendo e o divisor da divisão a ser processada. Sugestão: para a elaboração
do programa, não utilize o operador aritmético de divisão com quociente inteiro DIV. Use uma
solução baseada em laço. O programa deve apresentar como resultado (quociente) quantas
vezes o divisor cabe no dividendo*/

int main (){
    
    int dividendo, divisor, resultado = 0, i = 0;
    printf("Dividendo: ");
    scanf("%d", &dividendo);
    printf("Divisor: ");
    scanf("%d", &divisor);

    while(i<dividendo){
        resultado++;
        i+=divisor;
        if(i>dividendo) resultado--;
    }

    printf("A parte interia de %d dividido por %d e: %d", dividendo, divisor, resultado);
    
    return 0;
}