#include <stdio.h>
 
int main() {
   // Definindo jogadores
   char nome_jogador[20];
   char estado[20];
   char nome_cidade[20];
   int populacao;
   float area;
   float pib;
   int qtde_pts_turisticos;
   double densidade_pop;
   double pib_per_capita;

   char nome_jogador2[20];
   char estado2[20];
   char nome_cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int qtde_pts_turisticos2;
   double densidade_pop2;
   double pib_per_capita2;


   //Coletando informações do jogador 1
   printf("Bem vindo ao Super Trunfo em C! \n\n Digite seu nome: ");
   scanf("%s", &nome_jogador);
   printf("Ola %s, voce e o Jogador 1 \n\n", nome_jogador);

   printf("Digite agora o nome do seu estado: \n");
   scanf("%s", &estado);
   
   printf("Digite agora o nome da cidade: ");
   scanf("%s", &nome_cidade);

   printf("Digite agora o numero populacional: \n");
   scanf("%d", &populacao);

   printf("Digite agora o valor da area: \n");
   scanf("%f", &area);
   
   printf("Digite agora o valor do pib: \n");
   scanf("%d", &pib);

   printf("Digite agora a quantidade de pontos turisticos: \n");
   scanf("%d", &qtde_pts_turisticos);
   printf("Dados do Jogador 1 salvos com sucesso! \n\n");
   

   //Coletando informações do jogador 1
   printf("Jogador 2, informe seu nome: \n");
   scanf("%s", &nome_jogador2);
   printf("Bem vindo %s informe o nome do seu estado: \n", nome_jogador2);

   scanf("%s", &estado2);
   
   printf("Digite agora o nome da cidade: ");
   scanf("%s", &nome_cidade2);

   printf("Digite agora o numero populacional: \n");
   scanf("%d", &populacao2);

   printf("Digite agora o valor da area: \n");
   scanf("%f", &area2);
   
   printf("Digite agora o valor do pib: \n");
   scanf("%d", &pib2);

   printf("Digite agora a quantidade de pontos turisticos: \n");
   scanf("%d", &qtde_pts_turisticos2);
   printf("Dados do Jogador 2 salvos com sucesso! \n");


   //Calculando densidade populacional e PIB per capita dos jogadores
   densidade_pop = (populacao / area);
   pib_per_capita = (pib / populacao);

   densidade_pop2 = (populacao2 / area2);
   pib_per_capita2 = (pib2 / populacao2);

   printf("A densidade populacional do Jogador %s e: %f \n", nome_jogador, densidade_pop);
   printf("O PIB per capita do Jogador %s e: %f.2 \n",nome_jogador, pib_per_capita);

   printf("A densidade populacional do Jogador %s e: %f \n", nome_jogador2, densidade_pop2);
   printf("O PIB per capita do Jogador %s e: %f.2 \n\n",nome_jogador2, pib_per_capita2);

   if (area == area2) {
      printf("Area do Estado %s: %f.2 \n Area do Estado %s: %f.2 \n As duas areas sao iguais. Empatou!", estado, area, estado2, area2);
      return 0;
   }

   //Comparação de valores de atributos. Atributo escolhido: Area
   if (area > area2) {
      printf("Area do Estado %s: %f.2 \n Area do estado %s: %f.2 \n A area do Estado %s e maior do que a area do Estado %s. Jogador %s venceu!\n", estado, area, estado2, area2, estado, estado2, nome_jogador);
   } else{
      printf("Area do Estado %s: %f.2 \n Area do Estado %s: %f.2 \n A area do Estado %s e maior do que a area do Estado %s. Jogador %s venceu!\n", estado2, area2, estado, area, estado2, estado, nome_jogador2);
   }
   return 0;
}