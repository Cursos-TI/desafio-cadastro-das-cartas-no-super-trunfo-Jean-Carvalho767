#include <stdio.h>
#include <string.h>

int main() {
    char Estado1[5], codigo1[10], nome_cidade1[50],Estado2[5], codigo2[10], nome_cidade2[50];
    float area1, pib1, area2, pib2;
    int populaçao1, pontos_turisticos1, populaçao2, pontos_turisticos2;

    printf("Carta 1 \n");

    printf("Digite Código da carta: \n");
    scanf("%s", codigo1);
    while (getchar() != '\n');

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", Estado1);
    while (getchar() != '\n'); // limpa o buffer. recomendado antes de usar fgets.

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, 50, stdin);  // permite ler nomes com espaço.

    printf("Digite a população: \n");
    scanf("%d", &populaçao1);
    while (getchar() != '\n');

    printf("Digite a Área da cidade: \n");
    scanf("%f", &area1); // só colocar %.2f na saída
    while (getchar() != '\n');

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    while (getchar() != '\n');
    
    printf("Digite a quntidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    while (getchar() != '\n');

    printf(" \n"); 

    printf("Carta 2 \n");

     printf("Digite Código da carta: \n");
    scanf("%s", codigo2);
    while (getchar() != '\n');

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", Estado2);
    while (getchar() != '\n'); // limpa o buffer. recomendado antes de usar fgets.

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, 50, stdin);  // permite ler nomes com espaço.

    printf("Digite a população: \n");
    scanf("%d", &populaçao2);

    printf("Digite a Área da cidade: \n");
    scanf("%f", &area2); // só colocar %.2f na saída

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quntidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf(" \n");

    printf("Carta 1 \n");
    printf("Código da carta: %s \n", codigo1);
    printf("Estado: %s \n", Estado1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("População: %d milhões \n", populaçao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos1);

    printf(" \n");

    printf("Carta 2 \n");
    printf("Código da carta: %s \n", codigo2);
    printf("Estado: %s \n", Estado2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("População: %d milhões \n", populaçao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos2);


    return 0;



    











}

