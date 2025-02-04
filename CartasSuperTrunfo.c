#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao, pontosTuristicos;
    float area, pib;

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("População: %d - Área: %f \n", populacao, area);
    printf("Pontos Turísticos: %d - PIB: %f \n", pontosTuristicos, pib);
    

    return 0;
}
