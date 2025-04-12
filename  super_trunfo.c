#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4]; // Ex: A01 (3 caracteres + o '\0')
    char nomeCidade1[50];
    unsigned long int populacao1; // Modificado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // Modificado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Lendo os dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1); // Modificado para %lu que é long unsigned

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Lendo os dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2); // Modificado para %lu que é unsigned

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculando os dados da Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // Convertendo PIB para reais
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);


    // --- Calculando os dados da Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // Convertendo PIB para reais
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);

    // Mostrando os dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    // Mostrando os dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Comparando as cartas ---
    printf("\nComparacao de Cartas:\n");
    // ---Caso valor seja 1,carta 1 venceu,se não,carta 2 venceu
    printf("Populacao: (%d)\n", (populacao1 > populacao2));
    printf("Area: (%d)\n", (area1 > area2) );
    printf("PIB: (%d)\n", (pib1 > pib2) );
    printf("Pontos Turisticos: (%d)\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: (%d)\n", (densidadePopulacional1 < densidadePopulacional2));
    printf("PIB per Capita: (%d)\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: (%d)\n", (superPoder1 > superPoder2) );

    return 0;
}