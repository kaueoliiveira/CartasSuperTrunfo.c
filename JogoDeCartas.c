#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int escolha;
    // cidade 1
  char estado[50];
  char carta[50];
  char nome[50];
  unsigned long int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  float pib_capita;
    // cidade 2
  char estado2[50];
  char carta2[50];
  char nome2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_capita2;
  //Variaveis em geral
  int atributo = 0;
  int atributo2 = 0;
  float soma = 0;
  float soma2 = 0;


  // Área para entrada de dados
    // cidade 1
  printf("digite uma letra de A a H para representar um estado: ");
  scanf("%s",estado);
  printf("digite a letra anterior seguida de um numero de 01 a 04: ");
  scanf("%s",carta);
  printf("nome da cidade: ");
  scanf(" %[^\n]",nome);
  printf("população: ");
  scanf("%lu",&populacao);
  printf("area da cidade: ");
  scanf("%f",&area);
  printf("PIB da cidade: ");
  scanf("%f",&pib);
  printf("quantidade de pontos turisticos: ");
  scanf("%d",&pontos_turisticos);
  printf("cidade 1 cadastrada com sucesso!\n\n");

  densidade_populacional = (float) populacao/area;
  pib_capita = (float) pib/populacao;
    // cidade 2
  printf("digite uma letra de A a H para representar um estado: ");
  scanf("%s",estado2);
  printf("digite a letra anterior seguida de um numero de 01 a 04: ");
  scanf("%s",carta2);
  printf("nome da cidade: ");
  scanf( " %[^\n]",nome2);
  printf("população: ");
  scanf("%lu",&populacao2);
  printf("area da cidade: ");
  scanf("%f",&area2);
  printf("PIB da cidade: ");
  scanf("%f",&pib2);
  printf("quantidade de pontos turisticos: ");
  scanf("%d",&pontos_turisticos2);
  printf("cidade 2 cadastrada com sucesso!\n\n");

  densidade_populacional2 = (float) populacao2/area2;
  pib_capita2 = (float) pib2/populacao2;

  //Área para calculos
  // Área para exibição dos dados da cidade
    //cidade 1
printf("----- CIDADE 1 -----\n");
printf("Letra da cidade 1:%s\n",estado);
printf("Carta da cidade 1:%s\n",carta);
printf("Nome da cidade 1:%s\n",nome);
printf("População da cidade 1:%lu\n",populacao);
printf("Area da cidade 1:%.2f\n",area);
printf("PIB da cidade 1 R$:%.2f\n",pib);
printf("Pontos turisticos da cidade 1:%d\n",pontos_turisticos);


printf("Densidade populacional da cidade 1:%.2f hab/km\n",densidade_populacional);
printf("PIB per capita da cidade 1:R$%.2f\n",pib_capita);
  // cidade 2
printf("----- CIDADE 2 -----\n");
printf("Letra da cidade 2:%s\n",estado2);
printf("Carta da cidade 2:%s\n",carta2);
printf("Nome da cidade 2:%s\n",nome2);
printf("População da cidade 2:%lu\n",populacao2);
printf("Area da cidade 2:%.2f\n",area2);
printf("PIB da cidade 2 R$:%.2f\n",pib2);
printf("Pontos turisticos da cidade 2:%d\n",pontos_turisticos2);

printf("Densidade populacional da cidade 2:%.2f hab/km\n",densidade_populacional2);
printf("PIB per capita da cidade 2:R$%.2f\n",pib_capita2);
// Comparação de cartas
printf("Escolha dois atributos a serem comparados:\n");
printf("1- Nome\n2- Populção\n3- Área\n4- PIB\n5- Pontos turisticos\n6- Densidade geografica\n");
printf("Primeiro atributo:");
scanf("%d",&atributo);
printf("Segundo atributo:");
scanf("%d",&atributo2);
if (atributo == atributo2)
  printf("Digite um Atributo diferente!");
else{
  // Atributo 1
  switch (atributo)
  {
  case 1:
    printf("Atributo 1: Nome\n");
    printf("Nome Cidade 1:%s\n",nome);
    printf("Nome Cidade 2:%s\n",nome2);
    break;
  case 2:
    printf("Atributo 1: População\n");
    printf("População Cidade 1:%lu\n",populacao);
    printf("População Cidade 2:%lu\n",populacao2);
    if (populacao>populacao2)
      printf("A Cidade %s Ganhou! Com diferença de %lu\n",nome,populacao-populacao2);
    else if (populacao2>populacao)
      printf("A Cidade %s Ganhou! Com diferença de %lu\n",nome2,populacao2-populacao);
    else
      printf("empate!\n");
    break;
  case 3:
    printf("Atributo 1: Area\n");
    printf("Area Cidade 1:%.2f\n",area);
    printf("Area Cidade 2:%.2f\n",area2);
    if (area>area2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,area-area2);
    else if (area2>area)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,area2-area);
    else
      printf("Empate!\n");
    break;
  case 4:
    printf("Atributo 1: PIB\n");
    printf("PIB Cidade 1 R$:%.2f\n",pib);
    printf("PIB Cidade 2 R$:%.2f\n",pib2);
    if (pib>pib2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,pib-pib2);
    else if (pib2>pib)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,pib2-pib);
    else
      printf("Empate!\n");
    break;
  case 5:
    printf("Atributo 1: Pontos Turisticos\n");
    printf("Pontos turisticos Cidade 1:%d\n",pontos_turisticos);
    printf("Pontos turisticos Cidade 2:%d\n",pontos_turisticos2);
    if (pontos_turisticos>pontos_turisticos2)
      printf("A Cidade %s Ganhou! Com diferença de %d\n",nome,pontos_turisticos-pontos_turisticos2);
    else if (pontos_turisticos2>pontos_turisticos)
      printf("A Cidade %s Ganhou! Com diferença de %d\n",nome2,pontos_turisticos2-pontos_turisticos);
    else
      printf("Empate!\n");
    break;
  case 6:
    printf("Atributo 1: Densidade Populacional\n");
    printf("Densidade Populacional Cidade 1:%.2f\n",densidade_populacional);
    printf("Densidade Populacional Cidade 2:%.2f\n",densidade_populacional2);
    if (densidade_populacional<densidade_populacional2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,densidade_populacional2-densidade_populacional);
    else if (densidade_populacional2<densidade_populacional)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,densidade_populacional-densidade_populacional2);
    else
      printf("Empate!\n");
    break;
  default:
    printf("Opção invalida!");
    break;
  }
  //Atributo 2
  switch (atributo2)
  {
  case 1:
    printf("Atributo 2: Nome\n");
    printf("Nome Cidade 1:%s\n",nome);
    printf("Nome Cidade 2:%s\n",nome2);
    break;
  case 2:
    printf("Atributo 2: População\n");
    printf("População Cidade 1:%lu\n",populacao);
    printf("População Cidade 2:%lu\n",populacao2);
    if (populacao>populacao2)
      printf("A Cidade %s Ganhou! Com diferença de %lu\n",nome,populacao-populacao2);
    else if (populacao2>populacao)
      printf("A Cidade %s Ganhou! Com diferença de %lu\n",nome2,populacao2-populacao);
    else
      printf("empate!\n");
    break;
  case 3:
    printf("Atributo 2: Area\n");
    printf("Area Cidade 1:%.2f\n",area);
    printf("Area Cidade 2:%.2f\n",area2);
    if (area>area2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,area-area2);
    else if (area2>area)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,area2-area);
    else
      printf("Empate!\n");
    break;
  case 4:
    printf("Atributo 2: PIB\n");
    printf("PIB Cidade 1 R$:%.2f\n",pib);
    printf("PIB Cidade 2 R$:%.2f\n",pib2);
    if (pib>pib2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,pib-pib2);
    else if (pib2>pib)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,pib2-pib);
    else
      printf("Empate!\n");
    break;
  case 5:
    printf("Atributo 2: Pontos Turisticos\n");
    printf("Pontos turisticos Cidade 1:%d\n",pontos_turisticos);
    printf("Pontos turisticos Cidade 2:%d\n",pontos_turisticos2);
    if (pontos_turisticos>pontos_turisticos2)
      printf("A Cidade %s Ganhou! Com diferença de %d\n",nome,pontos_turisticos-pontos_turisticos2);
    else if (pontos_turisticos2>pontos_turisticos)
      printf("A Cidade %s Ganhou! Com diferença de %d\n",nome2,pontos_turisticos2-pontos_turisticos);
    else
      printf("Empate!\n");
    break;
  case 6:
    printf("Atributo 2: Densidade Populacional\n");
    printf("Densidade Populacional Cidade 1:%.2f\n",densidade_populacional);
    printf("Densidade Populacional Cidade 2:%.2f\n",densidade_populacional2);
    if (densidade_populacional<densidade_populacional2)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome,densidade_populacional2-densidade_populacional);
    else if (densidade_populacional2<densidade_populacional)
      printf("A Cidade %s Ganhou! Com diferença de %.2f\n",nome2,densidade_populacional-densidade_populacional2);
    else
      printf("Empate!\n");
    break;
  default:
    printf("Opção invalida!");
    break;
  } 
  // soma atributo 1
  if (atributo==2){
    soma += populacao;
    soma2 += populacao2;
  }
  else if (atributo==3){
    soma += area;
    soma2 += area2;
  }
  else if (atributo==4){
    soma += pib;
    soma2 += pib2;
  }else if (atributo==5){
    soma += pontos_turisticos;
    soma2 += pontos_turisticos2;
  }else if (atributo==6){
    soma += densidade_populacional;
    soma2 += densidade_populacional2;
  }else
    printf("Erro!");
  // soma atributo 2
  if (atributo2==2){
    soma2 += populacao2;
    soma += populacao;
  }else if (atributo2==3){
    soma2 += area2;
    soma += area;
  }else if (atributo2==4){
    soma2 += pib2;
    soma += pib;
  }else if (atributo2==5){
    soma2 += pontos_turisticos2;
    soma += pontos_turisticos;
  }else if (atributo2==6){
    soma2 += densidade_populacional2;
    soma += densidade_populacional;
  }else
    printf("Erro");

  //saida de dados dos atributos
  printf("---Soma dos atributos---\n");
  if (soma>soma2){
    printf("A cidade %s Ganhou!\n",nome);
    printf("Soma dos atributos da Cidade %s:%.2f\n",nome,soma);
    printf("Soma dos atributos da Cidade %s:%.2f\n",nome2,soma2);
  }else if (soma2>soma){
    printf("A cidade %s Ganhou!\n",nome2);
    printf("Soma dos atributos da Cidade %s:%.2f\n",nome2,soma2);
    printf("Soma dos atributos da Cidade %s:%.2f\n",nome,soma);
  }else
    printf("Empate!");

}
return 0;
}