#include <stdio.h>
 
int main() {
   // Definindo jogadores
   char codigo_carta[20], nome_jogador[20], nome_estado[20], nome_cidade[20];
   int populacao, qtde_pts_turisticos;
   float area, pib;
   double densidade_pop, pib_per_capita;

   char codigo_carta2[20], nome_jogador2[20], nome_estado2[20], nome_cidade2[20];
   int populacao2, qtde_pts_turisticos2;
   float area2, pib2;
   double densidade_pop2, pib_per_capita2;


   //Coletando informações do jogador 1
   printf("Bem vindo ao Super Trunfo em C! \n\n Digite seu nome: ");
   scanf("%s", nome_jogador);
   
   printf("Ola %s voce e o Jogador 1 \n", nome_jogador);

   printf("Digite o codigo da carta : \n");
   scanf("%s", codigo_carta);

   printf("Digite agora o nome do seu nome_estado: \n");
   scanf("%s", nome_estado);
   
   printf("Digite agora o nome da cidade: ");
   scanf("%s", nome_cidade);

   printf("Digite agora o numero populacional: \n");
   scanf("%d", &populacao);

   printf("Digite agora o valor da area: \n");
   scanf("%f", &area);
   
   printf("Digite agora o valor do pib: \n");
   scanf("%f", &pib);

   printf("Digite agora a quantidade de pontos turisticos: \n");
   scanf("%d", &qtde_pts_turisticos);
   printf("Dados do Jogador 1 salvos com sucesso! \n\n");
   

   //Coletando informações do jogador 2
   printf("Jogador 2, informe seu nome: \n");
   scanf("%s", nome_jogador2);
   
   printf("Ola %s, voce e o Jogador 2 \n\n", nome_jogador2);

   printf("Digite o codigo da carta : \n");
   scanf("%s", codigo_carta2);

   printf("Digite agora o nome do seu nome_estado: \n");
   scanf("%s", nome_estado2);
   
   printf("Digite agora o nome da cidade: ");
   scanf("%s", nome_cidade2);

   printf("Digite agora o numero populacional: \n");
   scanf("%d", &populacao2);

   printf("Digite agora o valor da area: \n");
   scanf("%f", &area2);
   
   printf("Digite agora o valor do pib: \n");
   scanf("%f", &pib2);

   printf("Digite agora a quantidade de pontos turisticos: \n");
   scanf("%d", &qtde_pts_turisticos2);
   printf("Dados do Jogador 2 salvos com sucesso! \n");

   //Calculando densidade populacional e PIB per capita dos jogadores
   pib = (pib * 1000000000.0);
   pib2 = (pib2 * 1000000000.0);
   
   densidade_pop = (populacao == 0 || area == 0) ? 0 : (populacao/area);
   pib_per_capita = (pib == 0 || populacao == 0) ? 0 : (pib/populacao);

   densidade_pop2 = (populacao2 == 0 || area2 == 0) ? 0 : (populacao2/area2);
   pib_per_capita2 = (pib2 == 0 || populacao2 == 0) ? 0 : (pib2/populacao2);

   //Printando informações fornecidas
   printf("Processando dados....\n\n");

   printf("Nome do jogador 1 %s \n", nome_jogador);
   printf("Codigo da carta %s \n", codigo_carta);
   printf("Cidade: %s \n", nome_cidade);
   printf("Numero populacional: %d \n", populacao);
   printf("Valor da area: %f \n", area);
   printf("Valor do pib: %f \n", pib);
   printf("Quantidade de pontos turisticos: %d \n", qtde_pts_turisticos);
   printf("A densidade populacional do nome_estado %s e: %.2f \n", nome_estado, densidade_pop);
   printf("O PIB per capita do nome_estado %s e: %.2f \n",nome_estado, pib_per_capita);
   printf("A densidade populacional do nome_estado %s e: %.2f \n", nome_estado2, densidade_pop2);
   printf("O PIB per capita do nome_estado %s e: %.2f \n\n",nome_estado2, pib_per_capita2);

   printf("Nome do jogador 2 %s \n", nome_jogador2);
   printf("Codigo da carta %s \n", codigo_carta2);
   printf("Cidade: %s \n", nome_cidade2);
   printf("Numero populacional: %d \n", populacao2);
   printf("Valor da area: %f \n", area2);
   printf("Valor do pib: %f \n", pib2);
   printf("Quantidade de pontos turisticos: %d \n", qtde_pts_turisticos2);
   printf("A densidade populacional do nome_estado %s e: %.2f \n", nome_estado2, densidade_pop2);
   printf("O PIB per capita do nome_estado %s e: %.2f \n",nome_estado2, pib_per_capita2);
   printf("A densidade populacional do nome_estado %s e: %.2f \n", nome_estado2, densidade_pop2);
   printf("O PIB per capita do nome_estado %s e: %.2f \n\n",nome_estado2, pib_per_capita2);

   if (area == area2) {
      printf("Area do nome_estado %s: %.2f \n Area do nome_estado %s: %.2f \n As duas areas sao iguais. Empatou!", nome_estado, area, nome_estado2, area2);
   }

   //Comparação de valores de atributos. Atributo escolhido: Area
   if (area > area2) {
      printf("Area do nome_estado %s: %.2f \n Area do nome_estado %s: %.2f \n A area do nome_estado %s e maior do que a area do nome_estado %s. Jogador %s venceu!\n\n", nome_estado, area, nome_estado2, area2, nome_estado, nome_estado2, nome_jogador);
   } else{
      printf("Area do nome_estado %s: %.2f \n Area do nome_estado %s: %.2f\n A area do nome_estado %s e maior do que a area do nome_estado %s. Jogador %s venceu!\n\n", nome_estado2, area2, nome_estado, area, nome_estado2, nome_estado, nome_jogador2);
   }
   return 0;
}