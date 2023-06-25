#include <stdio.h>

    /*Efetuar a leitura de um nome (variável NOME) e o sexo (variável SEXO) de uma pessoa e
apresentar como saída uma das seguintes mensagens: "llmo. Sr.", caso seja informado o sexo
masculino (utilizar como valor o caractere "M"), ou "llma. Sra.", caso seja informado
o sexo feminino (utilizar como valor o caractere "F"). Após a mensagem de saudação,
apresentar o nome informado. O programa deve, após a entrada do sexo, verificar primeiramente
se o sexo fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa
condição verdadeira, o programa deve apresentar a mensagem "Sexo informado inválido"*/

void verificarSexo(char nome[], char sexo){
    if(sexo == 'M'){
        printf("llmo. Sr. ");
        printf("%s\n", nome);
    }else if(sexo == 'F'){
        printf("llma. Sra. ");
        printf("%s\n", nome);
    }else{
        printf("Sexo informado invalido\n");
    }
}

int main (){

    verificarSexo("Alan", 'M');
    verificarSexo("Gabriela", 'F');
    verificarSexo("Et Bilu", 'A');

    return 0;
}