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
        // Cadastro da Carta 1
        printf("\nCadastro da Carta 1:\n");
        printf("\n1) Escolha uma letra de 'A' a 'H' para representar um dos estados (ex: H): ");
        scanf(" %c", &estado1);
        printf("2) Digite a mesma letra seguido de um número de '01' a '03' (ex: H03): ");
        scanf("%s", codigo1);
        printf("3) Digite o nome da cidade que deseja incorporar à esta carta (ex: Belo Horizonte): ");
        scanf(" %[^\n]", cidade1);
        printf("4) Digite a quantidade de habitantes da cidade (ex: 45628000): ");
        scanf("%u", &populacao1);
        printf("5) Digite a área em km² da cidade (ex: 1366.899): ");
        scanf("%f", &area1);
        printf("6) Digite o PIB da cidade em reais (ex: 899012000000): ");
        scanf("%f", &pib1);
        printf("7) Digite a quantidade de pontos turísticos conhecidos da cidade (ex: 28): ");
        scanf("%d", &pontos1);
        printf("\n");

        // Cadastro da Carta 2
        printf("\nCadastro da Carta 2:\n");
        printf("\n1) Escolha uma letra de 'A' a 'H' para representar um dos estados (ex: H): ");
        scanf(" %c", &estado2);
        printf("2) Digite a mesma letra seguido de um número de '01' a '03' (ex: H03): ");
        scanf("%s", codigo2);
        printf("3) Digite o nome da cidade que deseja incorporar à esta carta (ex: Belo Horizonte): ");
        scanf(" %[^\n]", cidade2);
        printf("4) Digite a quantidade de habitantes da cidade (ex: 45628000): ");
        scanf("%u", &populacao2);
        printf("5) Digite a área em km² da cidade (ex: 1366.899): ");
        scanf("%f", &area2);
        printf("6) Digite o PIB da cidade em reais (ex: 899012000000): ");
        scanf("%f", &pib2);
        printf("7) Digite a quantidade de pontos turísticos conhecidos da cidade (ex: 28): ");
        scanf("%d", &pontos2);
        printf("\n");
    }
    else
    {
        // Opção inválida
        printf("Opção inválida\n");
        return 1;
    }

    // Cálculos
    per_capita1 = pib1 / (float)populacao1;
    per_capita2 = pib2 / (float)populacao2;
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    superpoder1 = populacao1 + area1 + pib1 + per_capita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + per_capita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %u habitantes", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1 / 1e9);
    printf("\nNúmero de pontos turísticos: %d", pontos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: %.2f reais", per_capita1);
    printf("\nSuper Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %u habitantes", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2 / 1e9);
    printf("\nNúmero de pontos turísticos: %d", pontos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f reais", per_capita2);
    printf("\nSuper Poder: %.2f\n", superpoder2);

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