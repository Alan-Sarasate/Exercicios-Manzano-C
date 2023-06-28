#include <stdio.h>

    /*Escrever um programa que possibilite calcular a área total em metros de uma residência com os
cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros,
que podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do
cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar
calculando novos cômodos. Caso o usuário responda "NÃO", o programa deve apresentar o
valor total acumulado da área residencial*/

int main (){
    
    float largura, comprimento;
    char opcao = 'N', comodo[100];

    do{
        printf("Comodo: ");
        scanf("%100[^\n]", comodo);
        scanf("%c");
        printf("Largura: ");
        scanf("%f", &largura);
        printf("comprimento: ");
        scanf("%f", &comprimento);
        scanf("%c");

        printf("\nAREA DO COMODO: %.2f\n", largura*comprimento);

        printf("Deseja continuar calculando? (Digite \"N\" ou \"S\"): ");
        scanf("%c", &opcao);
        
    }while(opcao != 'N');
    
    return 0;
}