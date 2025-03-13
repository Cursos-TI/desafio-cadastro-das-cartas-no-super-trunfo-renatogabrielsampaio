#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração de variáveis
    int opcao, pontos1, pontos2;
    unsigned int populacao1, populacao2;
    float area1, area2, superpoder1, superpoder2;
    float pib1, pib2, densidade1, densidade2, per_capita1, per_capita2;
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[30], cidade2[30];

    // Menu de opções
    printf("Desafio Super Trunfo - C\n");
    printf("(1) Cartas pré-definidas\n");
    printf("(2) Cartas personalizadas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Inicialização das cartas
    if (opcao == 1)
    {
        // Cartas pré-definidas
        estado1 = 'A';
        strcpy(codigo1, "A01");
        strcpy(cidade1, "Sao Paulo (SP)");
        populacao1 = 12325000;
        area1 = 1521.11;
        pib1 = 699028000000;
        pontos1 = 50;

        estado2 = 'B';
        strcpy(codigo2, "B02");
        strcpy(cidade2, "Rio de Janeiro (RJ)");
        populacao2 = 6748000;
        area2 = 1200.25;
        pib2 = 300050000000;
        pontos2 = 30;
    }
    else if (opcao == 2)
    {
 #include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[30] = "Sao Paulo";
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Quantas pessoas habitam a sua cidade?\n");
        scanf("%lu", &populacao1);
    printf("Qual a area da sua cidade?\n");
        scanf("%f", &area1);
    printf("Qual o PIB da sua cidade?\n");
        scanf("%f", &pib1);
    printf("Quantos pontos turisticos tem a sua cidade?\n");
        scanf("%d", &pontos_turisticos1); 
    printf("\nCarta 1: \nEstado: %c \nCodigo: %s \nCidade: %s \nPopulação: %lu \nArea: %.2f km² \nPIB: %.2f bilhões de reais \nPontos turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1/1e9, pontos_turisticos1);


    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 / populacao1);
    printf("Densidade populacional: %.2f hab/km² \nPIB per capita: %.2f\n\n", densidade1, pib_per_capita1);


    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Quantas pessoas habitam a sua cidade?\n");
        scanf("%lu", &populacao2);
    printf("Qual a area da sua cidade?\n");
        scanf("%f", &area2);
    printf("Qual o PIB da sua cidade?\n");
        scanf("%f", &pib2);
    printf("Quantos pontos turisticos tem a sua cidade?\n");
        scanf("%d", &pontos_turisticos2);
    printf("\nCarta 2: \nEstado: %c \nCodigo: %s \nCidade: %s \nPopulação: %lu \nArea: %.2f km² \nPIB: %.2f bilhões de reais \nPontos turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2/1e9, pontos_turisticos2);


    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 / populacao2);

    printf("Densidade populacional: %.2f hab/km² \nPIB per capita: %.2f\n\n", densidade2, pib_per_capita2);


    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade1 + pib_per_capita1;
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + densidade2 + pib_per_capita2;

    // Comparação de cartas
    printf("\nComparação de cartas:\n");

    // Comparação de População
    printf("\nAtributo: População:\n");
    printf("Carta 01 - %s: %u habitantes\n", cidade1, populacao1);
    printf("Carta 02 - %s: %u habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de Área
    /* printf("\nAtributo: Área:\n");
    printf("Carta 01 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 02 - %s: %.2f km²\n", cidade2, area2);

    if (area1 > area2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de PIB
    printf("\nAtributo: PIB:\n");
    printf("Carta 01 - %s: %.2f bilhões de reais\n", cidade1, pib1 / 1e9);
    printf("Carta 02 - %s: %.2f bilhões de reais\n", cidade2, pib2 / 1e9);

    if (pib1 > pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de Pontos Turísticos
    printf("\nAtributo: Pontos Turísticos:\n");
    printf("Carta 01 - %s: %d pontos turísticos\n", cidade1, pontos1);
    printf("Carta 02 - %s: %d pontos turísticos\n", cidade2, pontos2);

    if (pontos1 > pontos2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de Densidade Populacional
    printf("\nAtributo: Densidade Populacional:\n");
    printf("Carta 01 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 02 - %s: %.2f hab/km²\n", cidade2, densidade2);

    if (densidade1 < densidade2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de PIB per Capita
    printf("\nAtributo: PIB per Capita:\n");
    printf("Carta 01 - %s: %.2f reais\n", cidade1, per_capita1);
    printf("Carta 02 - %s: %.2f reais\n", cidade2, per_capita2);

    if (per_capita1 > per_capita2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de Super Poder
    printf("\nAtributo: Super Poder:\n");
    printf("Carta 01 - %s: %.2f\n", cidade1, superpoder1);
    printf("Carta 02 - %s: %.2f\n", cidade2, superpoder2);

    if (superpoder1 > superpoder2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } */

    return 0;
}


// CODIGO MELHORADO ----------------------------------------------------------

#include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[30] = "Sao Paulo";
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Quantas pessoas habitam a sua cidade?\n");
        scanf("%lu", &populacao1);
    printf("Qual a area da sua cidade?\n");
        scanf("%f", &area1);
    printf("Qual o PIB da sua cidade?\n");
        scanf("%f", &pib1);
    printf("Quantos pontos turisticos tem a sua cidade?\n");
        scanf("%d", &pontos_turisticos1); 
    printf("\nCarta 1: \nEstado: %c \nCodigo: %s \nCidade: %s \nPopulação: %lu \nArea: %.2f km² \nPIB: %.2f bilhões de reais \nPontos turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1/1e9, pontos_turisticos1);


    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 / populacao1);
    printf("Densidade populacional: %.2f hab/km² \nPIB per capita: %.2f\n\n", densidade1, pib_per_capita1);


    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Quantas pessoas habitam a sua cidade?\n");
        scanf("%lu", &populacao2);
    printf("Qual a area da sua cidade?\n");
        scanf("%f", &area2);
    printf("Qual o PIB da sua cidade?\n");
        scanf("%f", &pib2);
    printf("Quantos pontos turisticos tem a sua cidade?\n");
        scanf("%d", &pontos_turisticos2);
    printf("\nCarta 2: \nEstado: %c \nCodigo: %s \nCidade: %s \nPopulação: %lu \nArea: %.2f km² \nPIB: %.2f bilhões de reais \nPontos turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2/1e9, pontos_turisticos2);


    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 / populacao2);

    printf("Densidade populacional: %.2f hab/km² \nPIB per capita: %.2f\n\n", densidade2, pib_per_capita2);


    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + densidade1 + pib_per_capita1;
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + densidade2 + pib_per_capita2;