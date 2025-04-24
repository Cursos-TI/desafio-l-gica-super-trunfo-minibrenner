#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
struct Carta {
    char estado[20];
    char codigo [20];
    char cidade [20];
    int populacao;
    int turisticos;
    float km;
    float pib;
    };
int main() {
    struct Carta carta1, carta2;

    
  //Cadastro inicial da primeira carta 
  printf ("Vamos começar. \n");
  printf ("Comece colocando os dados da primeira carta. \n");
  printf ("Escreva o estado da carta 1, use sigla de referencia, ex: SP\n");
  scanf ("%s", carta1.estado);
  printf ("Agora escreva por favor o codigo de sua carta a primeira letra do seu estado seguido de um numero de 01 a 04\n ");
  scanf("%s", carta1.codigo);
  printf("Nome da cidade\n");
  scanf ("%s", carta1.cidade);
  printf("Numero de habitantes da cidade\n");
  scanf ("%d", &carta1.populacao);
  printf ("População em quilometros quadrados\n");
  scanf ("%f", &carta1.km);
  printf("O Pib\n");
  scanf ("%f", &carta1.pib);
  printf ("O numeros de pontos turisticos\n");
  scanf("%d", &carta1.turisticos);

      //cadastro da segunda carta 

      printf ("Agora iremos colocar os dados da segunda carta. \n");
      printf ("Escreva o estado da carta 2, use sigla de referencia, ex: SP\n");
      scanf ("%s", carta2.estado);
      printf ("Agora escreva por favor o codigo de sua carta a primeira letra do seu estado seguido de um numero de 01 a 04\n ");
      scanf("%s", carta2.codigo);
      printf("Nome da cidade\n");
      scanf ("%s", carta2.cidade);
      printf("Numero de habitantes da cidade\n");
      scanf ("%d", &carta2.populacao);
      printf ("População em quilometros quadrados\n");
      scanf ("%f", &carta2.km);
      printf("O Pib\n");
      scanf ("%f", &carta2.pib);
      printf ("O numeros de pontos turisticos\n");
      scanf("%d", &carta2.turisticos);
      //Apresentação das cartas
      printf ("\n \n ========= Dados das Cartas cadastradas ========\n\n");
      // Declaraçao dos dados carta 1 
printf("\n--- Carta 1 ---\n");
printf("Estado: %s\n", carta1.estado);
printf("Código: %s\n", carta1.codigo);
printf("Cidade: %s\n", carta1.cidade);
printf("População: %d habitantes\n", carta1.populacao);
printf("Área: %.2f km²\n", carta1.km);
printf("PIB: %.2f\n", carta1.pib);
printf("Pontos turísticos: %d\n", carta1.turisticos);

//Declaraçao dos dados carta 2 
printf("\n--- Carta 2 ---\n");
printf("Estado: %s\n", carta2.estado);
printf("Código: %s\n", carta2.codigo);
printf("Cidade: %s\n", carta2.cidade);
printf("População: %d habitantes\n", carta2.populacao);
printf("Área: %.2f km²\n", carta2.km);
printf("PIB: %.2f\n", carta2.pib);
printf("Pontos turísticos: %d\n", carta2.turisticos);



    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Sistema de comparação
int pontos_carta1 = 0;
int pontos_carta2 = 0;
// Comparando número de habitantes
if (carta1.populacao > carta2.populacao) {
    pontos_carta1++;
} else {
    pontos_carta2++;
}

// Comparando área em km²
if (carta1.km > carta2.km) {
    pontos_carta1++;
} else {
    pontos_carta2++;
}

// Comparando número de pontos turísticos
if (carta1.turisticos > carta2.turisticos) {
    pontos_carta1++;
} else if (carta2.turisticos > carta1.turisticos) {
    pontos_carta2++;
}

// Exibindo o resultado
printf("\n\n========= RESULTADO DA COMPARAÇÃO =========\n");
printf("Pontos da Carta 1: %d\n", pontos_carta1);
printf("Pontos da Carta 2: %d\n", pontos_carta2);

if (pontos_carta1 > pontos_carta2) {
    printf("Resultado: Carta 1 VENCEU!\n");
} else if (pontos_carta2 > pontos_carta1) {
    printf("Resultado: Carta 2 VENCEU!\n");
} else {
    printf("Resultado: EMPATE!\n");
}




return 0;

}
  