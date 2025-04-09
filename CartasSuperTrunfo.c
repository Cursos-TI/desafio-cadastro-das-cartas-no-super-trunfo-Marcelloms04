#include <stdio.h>

int main() {
    // Variáveis dos paises
    char nomepais1[30] = "Alemanha", nomepais2[30] = "Japao";
    unsigned long populacao1 = 83129285, populacao2 = 125410000;
    double area1 = 357022.0, area2 = 377975.0;
    double pib1 = 4.5, pib2 = 5.1; // PIB em tri
    int pontosTuristicos1 = 20, pontosTuristicos2 = 30;
    
    // Calculo da densidade populacional com PIB per capita
    double densidadePop1 = populacao1 / area1;
    double densidadePop2 = populacao2 / area2;
    double pibPerCapita1 = (pib1 * 1e12) / populacao1;
    double pibPerCapita2 = (pib2 * 1e12) / populacao2;
    
    // Calculo do Super Poder
    double superpoder1 = populacao1 + area1 + (pib1 * 1e12) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePop1);
    double superpoder2 = populacao2 + area2 + (pib2 * 1e12) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePop2);

    int opcao;
    // Menu 
    printf("\nEscolha um atributo para comparação:\n");
    printf("1 - Populaçao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opçao: ");
    scanf("%d", &opcao);
    
    printf("\nResultado da comparaçao:\n");

    switch (opcao) {
        case 1:
            printf("Populaçao: %s venceu (%lu)\n", (populacao1 > populacao2) ? nomepais1 : nomepais2, 
                (populacao1 > populacao2) ? populacao1 : populacao2);
            break;
        case 2:
            printf("Area: %s venceu (%.2f km²)\n", (area1 > area2) ? nomepais1 : nomepais2, 
                (area1 > area2) ? area1 : area2);
            break;
        case 3:
            printf("PIB: %s venceu (%.1f trilhoes)\n", (pib1 > pib2) ? nomepais1 : nomepais2, 
                (pib1 > pib2) ? pib1 : pib2);
            break;
        case 4:
            printf("Pontos Turisticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? nomepais1 : nomepais2, 
                (pontosTuristicos1 > pontosTuristicos2) ? pontosTuristicos1 : pontosTuristicos2);
            break;
        case 5:
            printf("Densidade Populacional: %s venceu (%.2f hab/km²)\n", (densidadePop1 < densidadePop2) ? nomepais1 : nomepais2, 
                (densidadePop1 < densidadePop2) ? densidadePop1 : densidadePop2);
            break;
        case 6:
            printf("PIB Per Capita: %s venceu (%.2f)\n", (pibPerCapita1 > pibPerCapita2) ? nomepais1 : nomepais2, 
                (pibPerCapita1 > pibPerCapita2) ? pibPerCapita1 : pibPerCapita2);
            break;
        case 7:
            printf("Super Poder: %s venceu (%.2f)\n", (superpoder1 > superpoder2) ? nomepais1 : nomepais2, 
                (superpoder1 > superpoder2) ? superpoder1 : superpoder2);
            break;
        default:
            printf("Opçao invalida! Tente novamente.\n");
    }

    return 0;
}
