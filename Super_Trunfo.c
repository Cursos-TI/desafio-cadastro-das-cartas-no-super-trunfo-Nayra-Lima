#include<stdio.h>

int main (){

//declaração de variáveis das duas cartas do jogo.

    char estado1 , estado2;
    char codigoA1 [4] , codigoA2 [4];
    char cidade1 [50], cidade2 [50];
    int populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int pontosturisticos1 , pontosturisticos2;

//comandos para apresentação da primeira carta

printf("BEM-VINDO AO SUPER TRUNFO\n");

printf("CARTA 1\n");

//cadastro dos comandos de entrada de dados.

    printf("Digite a primeira letra do Estado:");
    scanf(" %c", &estado1);
    
    printf(" Digite o código da carta, A01 para a primeira e A02 para a segunda:");
    scanf(" %s", codigoA1);

    printf("Digite o nome da cidade:");
    scanf(" %s", cidade1);

    printf("Digite a população do Estado:");
    scanf(" %d", &populacao1);

    printf("Digite a área:");
    scanf(" %f", &area1);

    printf("Digite o PIB:");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos do Estado:");
    scanf(" %d", &pontosturisticos1);

// agora o cadastro dos comandos para sair os dados inseridos.

    printf("CARTA 1\n");
    printf("A letra do Estado é: %c \n", estado1);
    printf("O código da carta é: %s \n", codigoA1);
    printf("O nome da cidade é: %s \n", cidade1);
    printf("A população do Estado é: %d \n", populacao1);
    printf("A área é:  %.2f km²\n", area1);
    printf("O PIB do Estado é: %.2f bilhões de reais\n", pib1);
    printf("A quantidade de pontos turísticos é: %d\n", pontosturisticos1);
}