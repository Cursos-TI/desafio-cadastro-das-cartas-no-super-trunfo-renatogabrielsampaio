#include <stdio.h>

int main(){

// =================================================================== Variáveis da carta 01 

    int populacao, pontos_turisticos;
    float area;
    double pib, pib_capita, densidade;

    char estado;
    char codigo[10], cidade[50];

// =================================================================== Variáveis da carta 02

    int populacao_2, pontos_turisticos_2;
    float area_2;
    double pib_2, pib_capita_2, densidade_2;

    char estado_2;
    char codigo_2[10], cidade_2[50];

// ======================================================================= Título do projeto

    printf("Desafio Super Trunfo em C: Nível Aventureiro\n\n");

// ============================================================ Entrada de dados da carta 01

    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados: ");
    scanf(" %c", &estado);

    printf("Digite a mesma letra seguido de um número de '01' a '04'.\n");
    printf("Exemplo: 'A01', 'B03', 'C04': ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade que deseja incorporar à esta carta: ");
    scanf("%s", cidade);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área em km² da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos conhecidos da cidade: ");
    scanf("%d", &pontos_turisticos);
    printf("\n");

// ============================================================ Entrada de dados da carta 02

    printf("Agora vamos editar as informações da segunda carta!\n\n");

    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados: ");
    scanf(" %c", &estado_2);

    printf("Digite a mesma letra seguido de um número de '01' a '04'.\n");
    printf("Exemplo: 'A01', 'B03', 'C04': ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade que deseja incorporar à esta carta: ");
    scanf("%s", cidade_2);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao_2);

    printf("Digite a área em km² da cidade: ");
    scanf("%f", &area_2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib_2);

    printf("Digite a quantidade de pontos turísticos conhecidos da cidade: ");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");
// ==================================== Cálculos da densidade e PIB per Capita da carta 01

    densidade = (double) populacao / area; // Ainda possui alguns erros
    pib_capita = pib / (double) populacao; // Ainda possui alguns erros

// ==================================== Cálculos da densidade e PIB per Capita da carta 02

    densidade_2 = (double) populacao_2 / area_2; // Ainda possui alguns erros
    pib_capita_2 = pib_2 / (double) populacao_2; // Ainda possui alguns erros

// ============================================================ Saída de dados da carta 01

    printf("Cartas criadas! Aqui estão:\n\n");
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade); // Ainda possui alguns erros
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2lf\n", pib); // Ainda possui alguns erros
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade); // Ainda possui alguns erros
    printf("PIB per Capita: R$ %.2lf\n\n", pib_capita); // Ainda possui alguns erros

// ============================================================ Saída de dados da carta 02
    
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2); // Ainda possui alguns erros
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2lf\n", pib_2); // Ainda possui alguns erros
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_2); // Ainda possui alguns erros
    printf("PIB per Capita: R$ %.2lf\n\n", pib_capita_2); // Ainda possui alguns erros

// =================================================================================== Fim

    return 0;
    
}