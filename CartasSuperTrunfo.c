#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Batalha de cartas
// Objetivo: No nível mestre você deve criar um programa que permita ao usuário inserir os dados de duas cartas, calcular a densidade populacional, o PIB per Capta e o Super Poder, comparar as cartas e exibir os resultados da comparação

int main() {
  // Área para definição das variáveis
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4], cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    int resultPopulacao, resultPtsTuristicos, resultArea, resultPIB, resultPIBperCapta, resultDensidade, resultSuperPoder;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2;
    float superPoder1, superPoder2;

  
  // Área para entrada de dados da cidade 1
    printf("\nVamos digitar os dados da Carta 1!\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (letra do estado + Número de 01 a 04): ");
    scanf(" %s", &codigoCarta1);

    printf("Digite a população: ");
    scanf(" %lu", &populacao1);

    printf("Digite a area em km\u00B2: ");
    scanf(" %f", &area1);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos1);

  //Fórmulas para os cálculos a serem realizados da cidade 1    
    densidade1 = (float)populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000) / (float)populacao1;
    superPoder1 = (float)populacao1 + (float)pontosturisticos1 + area1 + pib1 + pibpercapta1 + (1 / densidade1);

    // Área para exibição dos dados da cidade 1
    printf("\n*** Carta 1: ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\u00B2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f habitantes por km\u00B2\n", densidade1);
    printf("PIB per Capta: %.2f reais por pessoa\n", pibpercapta1);
    printf("Super Poder: %.2f \n\n", superPoder1);

// Área para entrada de dados da cidade 2
  
    printf("\nVamos digitar os dados da Carta 2!\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (letra do estado + Número de 01 a 04): ");
    scanf(" %s", &codigoCarta2);

    printf("Digite a população: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area em km\u00B2: ");
    scanf(" %f", &area2);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2);

  //Fórmulas para os cálculos a serem realizados da cidade 2
    densidade2 = (float)populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + (float)pontosturisticos2 + area2 + pib2 + pibpercapta2 + (1 / densidade2);

  // Área para exibição dos dados da cidade 2

    printf("\n*** Carta 2: ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km\u00B2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km\u00B2\n", densidade2);
    printf("PIB per Capta: %.2f reais por pessoa\n", pibpercapta2);
    printf("Super Poder: %.2f \n\n", superPoder2);

  // Área para as fórmulas e os cálculos de comparação entre as cartas 1 e 2

    resultPopulacao = populacao1 > populacao2;
    resultArea = area1 > area2;
    resultPIB = pib1 > pib2;
    resultPtsTuristicos = pontosturisticos1 > pontosturisticos2;
    resultDensidade = densidade1 < densidade2;
    resultPIBperCapta = pibpercapta1 > pibpercapta2;
    resultSuperPoder = superPoder1 > superPoder2;

  // Área para comparação das cartas 1 e 2
  
    printf("\n*** Comparação de Cartas: ***\n");
        if (resultPopulacao == 1){
            printf("População: Carta 1 venceu (%d)\n", resultPopulacao);
        } else {
            printf("População: Carta 2 venceu (%d)\n", resultPopulacao);
        }
        if (resultArea == 1){
            printf("Área: Carta 1 venceu (%d)\n", resultArea);
        } else {
            printf("Área: Carta 2 venceu (%d)\n", resultArea);
        }
        if (resultPIB == 1){
            printf("PIB: Carta 1 venceu (%d)\n", resultPIB);
        } else {
            printf("PIB: Carta 2 venceu (%d)\n", resultPIB);
        }
        if (resultPtsTuristicos == 1){
            printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultPtsTuristicos);
        } else {
            printf("Pontos Turísticos: Carta 2 venceu (%d)\n", resultPtsTuristicos);
        }
        if (resultDensidade == 1){
            printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultDensidade);
        } else {
            printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultDensidade);
        }
        if (resultPIBperCapta == 1){
            printf("PIB per Capta: Carta 1 venceu (%d)\n", resultPIBperCapta);
        } else {
            printf("PIB PER Capta: Carta 2 venceu (%d)\n", resultPIBperCapta);
        }
        if (resultSuperPoder == 1){
            printf("Super Poder: Carta 1 venceu (%d)\n\n", resultSuperPoder);
        } else {
            printf("Super Poder: Carta 2 venceu (%d)\n\n", resultSuperPoder);
        }
    
return 0;
}

