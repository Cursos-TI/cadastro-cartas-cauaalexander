#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas com cálculos
// Objetivo: Calcular densidade populacional e PIB per capita

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // Entrada de dados - Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB convertido de bilhões para reais

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Saída - Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Saída - Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
