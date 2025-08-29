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
    int opcao1, opcao2;
    float resultado;
    float soma = opcao1 + opcao2;


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

    printf("Escolha o primeiro atributo que você deseja comparar:\n");
    printf("1. Atributo: População\n");
    printf("2. Atributo: Area\n");
    printf("3. Atributo: PIB\n");
    printf("4. Atributo: Pontos Turísticos\n");
    printf("5. Atributo: Densidade Populacional\n");
    printf("6. Atributo: Renda Per capita\n");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo que você deseja comparar:\n");
    printf("1. Atributo: População\n");
    printf("2. Atributo: Area\n");
    printf("3. Atributo: PIB\n");
    printf("4. Atributo: Pontos Turísticos\n");
    printf("5. Atributo: Densidade Populacional\n");
    printf("6. Atributo: Renda Per capita\n");
    scanf("%d", &opcao2);

    switch (opcao1) {

        if (opcao1 == opcao2) {
            printf("Você não pode escolher o mesmo atributo 2 vezes. Tente novamente!");
            break;
        }

        case 1:
            if (populacao1 > populacao2) {
                printf("Atributo População: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo População: Carta 2 %s venceu!", estado2);
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Atributo Area: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Area: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 3:
            if (pib1 > pib2) {
                printf("Atributo Pib: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Pib: Carta 2 %s venceu!", estado2);
            }
            break;

        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Atributo Pontos Turísticos: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Pontos Turísticos: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 5:
            if (densidade1 < densidade2) {
                printf("Atributo Densidade: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Densidade: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 6:
            if (percapita1 > percapita2) {
                printf("Atributo Renda Per capita: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Renda Per capita: Carta 2 %s venceu!", estado2);
            }
            break;   
        default:
            printf("Opção inválida. Tente novamente.\n");  

        }
    
        switch (opcao1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Atributo População: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo População: Carta 2 %s venceu!", estado2);
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Atributo Area: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Area: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 3:
            if (pib1 > pib2) {
                printf("Atributo Pib: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Pib: Carta 2 %s venceu!", estado2);
            }
            break;

        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Atributo Pontos Turísticos: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Pontos Turísticos: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 5:
            if (densidade1 < densidade2) {
                printf("Atributo Densidade: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Densidade: Carta 2 %s venceu!", estado2);
            }
            break;
            
        case 6:
            if (percapita1 > percapita2) {
                printf("Atributo Renda Per capita: Carta 1 %s venceu!", estado1);
            } else {
                printf("Atributo Renda Per capita: Carta 2 %s venceu!", estado2);
            }
            break;   
        default:
            printf("Opção inválida. Tente novamente.\n");  
        }


















        return 0;
}
        





    /*printf("Comparação de cartas (Atributo: População):\n");
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
}*/



/*switch (variavel) {
  case valor1:
    // Código a ser executado se variavel == valor1
    break;
  case valor2:
    // Código a ser executado se variavel == valor2
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
}
*/

/*#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}*/
