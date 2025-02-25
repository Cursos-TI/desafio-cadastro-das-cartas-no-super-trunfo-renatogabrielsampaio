#include <stdio.h>

int main(){

// Variáveis ---------------------------------------------------------------------------------

    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2;
    double pib1, pib2, densidade1, densidade2, per_capita1, per_capita2;
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30];

//  Título do Projeto ------------------------------------------------------------------------

    printf("Desafio Super Trunfo em C: Nível Aventureiro\n");

//  Cadastro da carta 1 ----------------------------------------------------------------------

    printf("\n------------------------- Cadastro da Carta 1 -------------------------\n");

    estado1 = 'J';
    printf("\n1) Escolha uma letra de 'A' a 'H' para representar um dos estados (ex: H): ");
    scanf(" %c", &estado1);

    printf("2) Digite a mesma letra seguido de um número de '01' a '03' (ex: H03): ");
    scanf("%s", codigo1);

    printf("3) Digite o nome da cidade que deseja incorporar à esta carta (ex: Belo Horizonte): ");
    scanf(" %[^\n]", cidade1);

    populacao1 = 12325000;
    printf("4) Digite a quantidade de habitantes da cidade (ex: 45628000): ");
    scanf("%d", &populacao1);

    area1 = 1521.110;
    printf("5) Digite a área em km² da cidade (ex: 1366.899): ");
    scanf("%f", &area1);

    pib1 = 699028000000;
    printf("6) Digite o PIB da cidade em reais (ex: 899012000000): ");
    scanf("%lf", &pib1);

    per_capita1 = pib1 / (double)populacao1;

    pib1 /= 1.0e9; // Formatando o valor para exibição simplificada

    pontos1 = 50;
    printf("7) Digite a quantidade de pontos turísticos conhecidos da cidade (ex: 28): ");
    scanf("%d", &pontos1);
    printf("\n");

//  Cadastro da carta 2 ----------------------------------------------------------------------

    printf("\n------------------------- Cadastro da Carta 2 -------------------------\n");

    estado2 = 'K';
    printf("\n1) Escolha uma letra de 'A' a 'H' para representar um dos estados (ex: H): ");
    scanf(" %c", &estado2);

    printf("2) Digite a mesma letra seguido de um número de '01' a '03' (ex: H03): ");
    scanf("%s", codigo2);

    printf("3) Digite o nome da cidade que deseja incorporar à esta carta (ex: Belo Horizonte): ");
    scanf(" %[^\n]", cidade2);

    populacao2 = 6748000;
    printf("4) Digite a quantidade de habitantes da cidade (ex: 45628000): ");
    scanf("%d", &populacao2);

    area2 = 1200.330;
    printf("5) Digite a área em km² da cidade (ex: 1366.899): ");
    scanf("%f", &area2);

    pib2 = 300050000000;
    printf("6) Digite o PIB da cidade em reais (ex: 899012000000): ");
    scanf("%lf", &pib2);

    per_capita2 = pib2 / (double)populacao2;

    pib2 /= 1.0e9; // Formatando o valor para exibição simplificada

    pontos2 = 30;
    printf("7) Digite a quantidade de pontos turísticos conhecidos da cidade (ex: 28): ");
    scanf("%d", &pontos2);

//  Saída de dados da carta 1 ----------------------------------------------------------------

    printf("\nCarta 1:\n");

    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d habitantes", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2lf bilhões de reais", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos1);

    densidade1 = (double)populacao1 / (double)area1;

    printf("\nDensidade Populacional: %.2lf hab/km²", densidade1);
    printf("\nPIB per Capita: %.2lf reais\n", per_capita1);

//  Saída de dados da carta 2 ----------------------------------------------------------------
    
    printf("\nCarta 2:\n");

    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d habitantes", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2lf bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos2);

    densidade2 = (double)populacao2 / (double)area2;

    printf("\nDensidade Populacional: %.2lf hab/km²", densidade2);
    printf("\nPIB per Capita: %.2lf reais\n", per_capita2);

//  Fim --------------------------------------------------------------------------------------

    return 0;
    
}