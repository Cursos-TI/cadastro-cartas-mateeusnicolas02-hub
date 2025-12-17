#include <stdio.h>

int main(){

    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1;
    float super_poder1;

    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2;
    float super_poder2;


    printf("Carta 1\n");
    
    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    
    
    printf("Carta 2\n");
    
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Area: ");
    scanf("%f", &area2);
    
    printf("Pib: ");
    scanf("%f", &pib2);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pib_per_capita1 = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;

    super_poder1 = 
    (float)populacao1 +
    area1 +
    pib1 +
    pontos1 +
    pib_per_capita1 +
    (1.0f / densidade1);


    super_poder2 =
    (float)populacao2 +
    area2 +
    pib2 +
    pontos2 +
    pib_per_capita2 +
    (1.0f / densidade2);



    int comp_pop = populacao1 > populacao2;
    int comp_area = area1 > area2;
    int comp_pib = pib1 > pib2;
    int comp_pontos = pontos1 > pontos2;
    int comp_densidade = densidade1 < densidade2;
    int comp_pib_pc = pib_per_capita1 > pib_per_capita2;
    int comp_super = super_poder1 > super_poder2;


     
    printf("Comparacao de Cartas \n");
    
    printf("Populacao: Carta 1 venceu (%d)\n", comp_pop);
    printf("Area: Carta 1 venceu (%d)\n", comp_area);
    printf("PIB: Carta 1 venceu (%d)\n", comp_pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", comp_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comp_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comp_pib_pc);
    printf("Super Poder: Carta 1 venceu (%d)\n", comp_super);






    return 0;
   






}
