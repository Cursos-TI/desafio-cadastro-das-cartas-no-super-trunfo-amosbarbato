#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char state1, state2;
    char code1[4], code2[4];
    char city1[50], city2[50];
    int population1, population2;
    float territory1, territory2;
    float gdp1, gdp2;
    int touristPoints1, touristPoints2;
    float density1, density2;
    float gdpPerCapita1, gdpPerCapita2;

    // Carta 1
    printf("Cadastro da carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &state1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", code1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", city1); // permite ler com espaços

    printf("Digite a População: ");
    scanf("%d", &population1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &territory1);

    printf("Digite o PIB: ");
    scanf("%f", &gdp1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &touristPoints1);

    // Carta 2
    printf("Cadastro da carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &state2);

    printf("Digite o Código da Carta (ex: B01): ");
    scanf("%s", code2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", city2); // permite ler com espaços

    printf("Digite a População: ");
    scanf("%d", &population2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &territory2);

    printf("Digite o PIB: ");
    scanf("%f", &gdp2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &touristPoints2);

    // Calculo
    density1 = population1 / territory1;
    gdpPerCapita1 = (gdp1 * 1000000000.0) / population1;

    density2 = population2 / territory2;
    gdpPerCapita2 = (gdp2 * 1000000000.0) / population2;

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", city1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", territory1);
    printf("PIB: %.2f bilhões de reais\n", gdp1);
    printf("Número de Pontos Turísticos: %d\n", touristPoints1);
    printf("Densidade Populacional: %.2f hab/km²\n", density1);
    printf("PIB per Capita: %.2f reais\n", gdpPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", city2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", territory2);
    printf("PIB: %.2f bilhões de reais\n", gdp2);
    printf("Número de Pontos Turísticos: %d\n", touristPoints2);
    printf("Densidade Populacional: %.2f hab/km²\n", density2);
    printf("PIB per Capita: %.2f reais\n", gdpPerCapita2);

    return 0;
}
