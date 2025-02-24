#include <stdio.h>

int main(){

    int populacao, populacao2, ponto_turistico, ponto_turistico2;
    float area, area2, pib, pib2;
    char estado, estado2;
    char cidade[20], cidade2[20], codigo[20], codigo2[20];

    // Entrada de dados do usuário

    // Carta 1

    printf("Vamos começar digitando os dados da Carta 1!\n");
    printf("\n");
    printf("Insira uma letra de 'A' a 'H' para representar um dos oito estados: ");
    scanf(" %c", &estado);
    printf("Juntamente com a letra escolhida, escolha um número de 01 a 04 (Ex: 'A01', 'B03'): ");
    scanf(" %s", codigo);
    printf("Insira o nome da cidade: ");
    scanf(" %s", cidade);
    printf("Insira o número de habitantes da cidade: ");
    scanf(" %d", &populacao);
    printf("Insira a área da cidade em km²: ");
    scanf(" %f", &area);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &ponto_turistico);
    printf("\n");

    // Carta 2

    printf("Agora vamos digitar os dados da Carta 2!\n");
    printf("\n");
    printf("Insira uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado2);
    printf("Juntamente com a letra escolhida, escolha um número de 01 a 04 (Ex: 'A01', 'B03'): ");
    scanf(" %s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Insira o número de habitantes da cidade: ");
    scanf(" %d", &populacao2);
    printf("Insira a área da cidade em km²: ");
    scanf(" %f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &ponto_turistico2);
    printf("\n");

    // Exibir cartas na tela
    
    //Carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico);
    printf("\n");

    // Carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);

    return 0;

}