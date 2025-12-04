#include <stdio.h>

int main() {

    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
pe
    printf("=== Cadastro da carta 1 ===\n");

    printf("Digite o estado: ");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo1);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%49s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);


    printf("\n=== Cadastro da carta 2 ===\n");

    printf("Digite o estado: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%49s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);


    
    printf("\n===========================\n");
    printf("         CARTA 1\n");
    printf("===========================\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n===========================\n");
    printf("         CARTA 2\n");
    printf("===========================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
