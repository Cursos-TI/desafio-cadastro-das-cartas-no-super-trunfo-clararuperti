#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main () {
   unsigned long int populacao1, populacao2;
   int pontosTuristicos1, pontosTuristicos2;
   float pib1, pib2, pibPerCapita1, pibPerCapita2, area1, area2, densidade1, densidade2, superPoder1, superPoder2;
   char cidade1[50], cidade2[50], estado1, estado2, codigo1[50], codigo2[50];

   printf("Entre com os dados da primeira carta. \n");
   printf("Estado: \n"); //Entrar apenas com a inicial do estado.
   scanf("%c", &estado1);
   printf("Nome da cidade: \n");
   scanf("%s", &cidade1);
   printf("Código da carta: \n"); //Inicial do estado acompanhado com um número.
   scanf("%s", &codigo1);
   printf("População: \n");
   scanf("%lu", &populacao1);
   printf("Área: \n");
   scanf("%f", &area1);
   printf("Pontos Turísticos: \n");
   scanf("%d", &pontosTuristicos1);
   printf("PIB: \n");
   scanf("%f", pib1);

   printf("Entre com os dados da segunda carta. \n");
   printf("Estado: \n"); //Entrar apenas com a inicial do estado.
   scanf("%c", &estado2);
   printf("Nome da cidade: \n");
   scanf("%s", &cidade2);
   printf("Código da carta: \n"); //Inicial do estado acompanhado com um número.
   scanf("%s", &codigo2);
   printf("População: \n");
   scanf("%lu", &populacao2);
   printf("Área: \n");
   scanf("%f", &area2);
   printf("Pontos Turísticos: \n");
   scanf("%d", &pontosTuristicos2);
   printf("PIB: \n");
   scanf("%f", pib2);

   densidade1= (populacao1/area1);
   densidade2= (populacao2/area2);
   pibPerCapita1= (pib1/populacao1);
   pibPerCapita2= (pib2/populacao2);

   superPoder1= (populacao1+area1+pib1+(float)pontosTuristicos1+pibPerCapita1+densidade1);
   superPoder2= (populacao2+area2+pib2+(float)pontosTuristicos2+pibPerCapita2+densidade2);


   printf("Dados da primeira carta: \n");
   printf("Estado: %c - Código: %s \n", estado1, codigo1);
   printf("Nome da cidade: %s - População: %lu \n", cidade1, populacao1);
   printf("Área: %f - Pib: %f\n", area1, pib1);
   printf("Pontos Turísticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %f - PIB Per Capita: %f \n", densidade1, pibPerCapita1);

   printf("Dados da segunda carta: \n");
   printf("Estado: %c - Código: %s \n", estado2, codigo2);
   printf("Nome da cidade: %s - População: %lu \n", cidade2, populacao2);
   printf("Área: %f - Pib: %f\n", area2, pib2);
   printf("Pontos Turísticos: %d\n", pontosTuristicos2);
   printf("Densidade Populacional: %f - PIB Per Capita: %f \n", densidade2, pibPerCapita2);

   if (populacao1>populacao2){
      printf("População: Carta 1 venceu!\n");
   } else {
      printf("População: Carta 2 venceu!\n");
   }
   if (area1>area2){
      printf("Área: Carta 1 venceu!\n");
   } else {
      printf("Área: Carta 2 venceu!\n");
   }
   if (pib1>pib2){
      printf("PIB: Carta 1 venceu!\n");
   }else {
      printf("PIB: Carta 2 venceu!\n");
   }
   if (pontosTuristicos1>pontosTuristicos2){
      printf("Pontos Turísticos: Carta 1 venceu!\n");
   }else {
      printf("Pontos Turísticos: Carta 2 venceu!\n");
   }
   if (densidade1<densidade2){
      printf("Densidade Populacional: Carta 1 venceu!\n");
   }else {
      printf("Densidade Populacional: Carta 2 venceu!\n");
   }
   if (pibPerCapita1>pibPerCapita2){
      printf("PIB Per Capita: Carta 1 venceu!\n");
   }else {
      printf("PIB Per Capita: Carta 2 venceu!\n");
   }
   if (superPoder1>superPoder2){
      printf("Super Poder: Carta 1 venceu!\n");
   }else {
      printf("Super Poder: Carta 2 venceu!\n");
   }

return 0;
}