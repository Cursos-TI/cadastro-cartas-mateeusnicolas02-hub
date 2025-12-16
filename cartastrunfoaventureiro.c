#include <stdio.h>

int main() {

    
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;

    printf("Digite o estado da Carta 1:\n");
    scanf(" %c", &estado);

    printf("Digite o codigo da Carta 1:\n");
    scanf(" %3s", codigo);

    printf("Digite a cidade da Carta 1:\n");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao da Carta 1:\n");
    scanf("%d", &populacao);

    printf("Digite a area da Carta 1:\n");
    scanf("%f", &area);

    printf("Digite o PIB da Carta 1 (em bilhoes):\n");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos da Carta 1:\n");
    scanf("%d", &pontos_turisticos);

    densidade = populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao;

    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    printf("\nDigite o estado da Carta 2:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2:\n");
    scanf(" %3s", codigo2);

    printf("Digite a cidade da Carta 2:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhoes):\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da Carta 2:\n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    
    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
