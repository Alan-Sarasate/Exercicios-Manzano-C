#include <stdio.h>

 /*Em uma eleição sindical concorreram ao cargo de presidente três candidatos (representados
pelas variáveis A, B e C). Durante a apuração dos votos foram computados votos nulos e em
branco, além dos votos válidos para cada candidato. Deve ser criado um programa de compu-
tador que faça a leitura da quantidade de votos válidos para cada candidato, além de também ler
a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o número total
de eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente de
votos válidos em relação à quantidade de eleitores; o percentual correspondente de votos válidos
do candidato A em relação à quantidade de eleitores; o percentual correspondente de
votos válidos do candidato B em relação à quantidade de eleitores; o percentual correspondente
de votos válidos do candidato C em relação à quantidade de eleitores; o percentual correspondente de votos nulos em relação à quantidade de eleitores; e por último o percentual correspondente de votos em branco em relação à quantidade de eleitores*/

void votacao(int VA, int VB, int VC, int VNulos, int VBrancos){
    int totalEleitores, votosValidos;
    float percentualVotosValidos, percentualVotosA, percentualVotosB, percentualVotosC, percentualNulos, percentualBrancos;

    totalEleitores = VA + VB + VC + VBrancos + VNulos;
    votosValidos = VA + VB + VC;

    float totalEleitoresFloat = (float)totalEleitores;

    percentualVotosValidos = (votosValidos/totalEleitoresFloat)*100;
    percentualVotosA = (VA/totalEleitoresFloat)*100;
    percentualVotosB = (VB/totalEleitoresFloat)*100;
    percentualVotosC = (VC/totalEleitoresFloat)*100;
    percentualNulos = (VNulos/totalEleitoresFloat)*100;
    percentualBrancos = (VBrancos/totalEleitoresFloat)*100;

    printf("\nTotal de eleitores: %d\nPercentual de votos validos: %.2f porcento\nPercentual de votos validos em A: %.2f porcento\nPercentual de votos validos em C: %.2f porcento\nPercentual de votos validos em C: %.2f porcento\nPercentual de votos nulos: %.2f porcento\nPercentual de votos em branco: %.2f porcento\n", totalEleitores, percentualVotosValidos, percentualVotosA, percentualVotosB, percentualVotosC, percentualNulos, percentualBrancos);
}

int main (){

    votacao(2, 2, 2, 1, 1);
    votacao(2, 5, 8, 5, 2);

    return 0;
}