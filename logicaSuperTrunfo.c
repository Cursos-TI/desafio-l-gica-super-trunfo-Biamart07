#include <stdio.h>

int main() {
    // variáveis para cadastro das Cartas 1 e 2
    char estado1[3], estado2[3];
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + 1/percapita1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + 1/percapita2;

    // cadastro da Carta 1
    printf("Digite o nome do estado da Carta 1 (ex: SP):\n");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade da Carta 1:\n");
    scanf(" %s[^\n]", cidade1); // permite espaço

    printf("Digite a população da Cidade da Carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade da Carta 1 em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade da Carta 1:\n");
    scanf("%d", &pontosturisticos1);

    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;


    // cadastro da Carta 2
    printf("Digite o nome do estado da Carta 2 (ex: RJ):\n");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade da Carta 2:\n");
    scanf(" %s[^\n]", cidade2);

    printf("Digite a população da Cidade da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade da Carta 2 em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade da Carta 2:\n");
    scanf("%d", &pontosturisticos2);

    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    // imprimir dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);

    // imprimir dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);

    //comparação de atributos das cartas

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", estado1, populacao1);
    printf("Carta 2 - %s: %d\n", estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: Area):\n");
    printf("Carta 1 - %s: %.1f\n", estado1, area1);
    printf("Carta 2 - %s: %.1f\n", estado2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %.1f\n", estado1, pib1);
    printf("Carta 2 - %s: %.1f\n", estado2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s: %d\n", estado1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n", estado2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: Densidade):\n");
    printf("Carta 1 - %s: %.1f\n", estado1, densidade1);
    printf("Carta 2 - %s: %.1f\n", estado2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: Per capita):\n");
    printf("Carta 1 - %s: %.1f\n", estado1, percapita1);
    printf("Carta 2 - %s: %.1f\n", estado2, percapita2);
    if (percapita1 > percapita2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Comparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s: %.1f\n", estado1, superPoder1);
    printf("Carta 2 - %s: %.1f\n", estado2, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
    return 0;
}
