#include <stdio.h>

int main(){

// Variáveis ---------------------------------------------------------------------------------
   
int pontos1, pontos2, resultado;
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2, superpoder1, superpoder2;
    float densidade1, densidade2, per_capita1, per_capita2;
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30];

//  Título do Projeto ------------------------------------------------------------------------

    printf("Desafio Super Trunfo em C: Nível Mestre\n");

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
    scanf("%f", &pib1);

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
    scanf("%f", &pib2);

    pontos2 = 30;
    printf("7) Digite a quantidade de pontos turísticos conhecidos da cidade (ex: 28): ");
    scanf("%d", &pontos2);

//  Cálculo de valores de variáveis -----------------------------------------------------------

    // Cálculo do pib per capita

    per_capita1 = pib1 / (float)populacao1; 
    per_capita2 = pib2 / (float)populacao2;

    // Cálculo da densidade populacional

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    // Cálculo do super poder

    superpoder1 = populacao1 + area1 + pib1 + per_capita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + per_capita2 + (1 / densidade2);

//  Saída de dados da carta 1 ----------------------------------------------------------------

    printf("\nCarta 1:\n");

    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d habitantes", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: %.2f reais", per_capita1);
    printf("\nSuper Poder: %.2f\n", superpoder1);

//  Saída de dados da carta 2 ----------------------------------------------------------------
    
    printf("\nCarta 2:\n");

    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d habitantes", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f reais", per_capita2);
    printf("\nSuper Poder: %.2f\n", superpoder2);

//  Comparação das cartas --------------------------------------------------------------------

    printf("\nComparação de cartas:\n");

    resultado = populacao1 > populacao2;
    printf("\nPopulação: %d", resultado);

    resultado = area1 > area2;
    printf("\nÁrea: %d", resultado);

    resultado = pib1 > pib2;
    printf("\nPIB: %d", resultado);

    resultado = pontos1 > pontos2;
    printf("\nPontos Turísticos: %d", resultado);

    resultado = densidade1 < densidade2;
    printf("\nDensidade Populacional: %d", resultado);

    resultado = per_capita1 > per_capita2;
    printf("\nPIB per Capita: %d", resultado);

    resultado = superpoder1 > superpoder2;
    printf("\nSuper Poder: %d", resultado);
    
//  Fim --------------------------------------------------------------------------------------

    return 0;
    
}