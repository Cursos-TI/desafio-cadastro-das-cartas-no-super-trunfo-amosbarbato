#include <stdio.h>

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
    float power1, power2;

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
    power1 = (float)population1 + territory1 + gdp1 + (float)touristPoints1 + gdpPerCapita1 + (1.0f / density1);

    density2 = population2 / territory2;
    gdpPerCapita2 = (gdp2 * 1000000000.0) / population2;
    power2 = (float)population2 + territory2 + gdp2 + (float)touristPoints2 + gdpPerCapita2 + (1.0f / density2);

    // Comparação das cartas
    printf("\nComparação das cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (population1 > population2) ? 1 : 2, (population1 > population2));
    printf("Área: Carta %d venceu (%d)\n", (territory1 > territory2) ? 1 : 2, (territory1 > territory2));
    printf("PIB: Carta %d venceu (%d)\n", (gdp1 >gdp2) ? 1 : 2, (gdp1 >gdp2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (touristPoints1 > touristPoints2) ? 1 : 2, (touristPoints1 > touristPoints2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (density1 < density2) ? 1 : 2, (density1 < density2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (gdpPerCapita1 > gdpPerCapita2) ? 1 : 2, (gdpPerCapita1 > gdpPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (power1 > power2) ? 1 : 2, (power1 > power2));

    return 0;
}
