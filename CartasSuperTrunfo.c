#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
#include <stdio.h>

int main() {

// Carta 1
char estado1 = 'A';
char codigo1[] = "A01";
char cidade1[] = "Brasilia";
unsigned long int populacao1 = 2817068;
float area1 = 5760.8;
float pib1 = 286.9;
int pontos1 = 30;


// Carta 2
char estado2 = 'B';
char codigo2[] = "B01";
char cidade2[] = "Sao Paulo";
unsigned long int populacao2 = 11451999;
float area2 = 1521.1;
float pib2 = 828.9;
int pontos2 = 50;


printf("\n--- CARTA 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes\n", pib1);
printf("Pontos Turisticos: %d\n", pontos1);


printf("\n--- CARTA 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f bilhoes\n", pib2);
printf("Pontos Turisticos: %d\n", pontos2);

return 0;
}
