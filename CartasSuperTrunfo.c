#include <stdio.h>

int main() {
    // variaveis dos paises 
    char nomepais1[30] = "alemanha", nomepais2[30] = "japão";
    unsigned long populacao1 = 83129285, populacao2 = 125410000;
    double area1 = 357022.0, area2 = 377975.0;
    double pib1 = 4.5, pib2 = 5.1; 
    int pontosTuristicos1 = 20, pontosTuristicos2 = 30;
    
    // calculo da densidade populacional e pib per capita
    double densidadePop1 = populacao1 / area1;
    double densidadePop2 = populacao2 / area2;
    double pibPerCapita1 = (pib1 * 1e12) / populacao1;
    double pibPerCapita2 = (pib2 * 1e12) / populacao2;
    
    // calculo do super poder 
    float superpoder1 = populacao1 + area1 + (pib1 * 1e12) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePop1);
    float superpoder2 = populacao2 + area2 + (pib2 * 1e12) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePop2);
    
    // resultados
    printf("\ncomparaçao de cartas:\n");
    printf("população: %s venceu (%d)\n", (populacao1 > populacao2) ? nomepais1 : nomepais2, (populacao1 > populacao2) ? populacao1 : populacao2);
    printf("area: %s venceu (%d)\n", (area1 > area2) ? nomepais1 : nomepais2, (area1 > area2));
    printf("pib: %s venceu (%d)\n", (pib1 > pib2) ? nomepais1 : nomepais2, (pib1 > pib2));
    printf("pontos turísticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? nomepais1 : nomepais2, (pontosTuristicos1 > pontosTuristicos2));
    printf("densidade populacional: %s venceu (%d)\n", (densidadePop1 < densidadePop2) ? nomepais1 : nomepais2, (densidadePop1 < densidadePop2));
    printf("pib per capita: %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? nomepais1 : nomepais2, (pibPerCapita1 > pibPerCapita2));
    printf("super Poder: %s venceu (%d)\n", (superpoder1 > superpoder2) ? nomepais1 : nomepais2, (superpoder1 > superpoder2));
    
    return 0;
}
