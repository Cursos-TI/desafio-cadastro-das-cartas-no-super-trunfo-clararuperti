#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int populacao, pontosTuristicos, densidade;
    float pib, pibPerCapita, area;
    
    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    pibPerCapita= pib / populacao;
    densidade= populacao / area;

    printf("População: %d - Área: %f \n", populacao, area);
    printf("Pontos Turísticos: %d - PIB: %f \n", pontosTuristicos, pib);
    printf("Densidade Demográfica: %d - PIB Per Capita: %f\n", densidade, pibPerCapita);

    return 0;
}
