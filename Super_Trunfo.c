// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
int main() {
    
    //Adiciona as variáveis para carta 1
    char Estado1[50], Cidade1[50], CodigoCarta1[20];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;
    // Variáveis carta 2
    char Estado2[50], Cidade2[50], CodigoCarta2[20];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;

    printf("Vamos cadastrar sua primeira carta.\nDigite o Estado: ");// Printf solicita os dados
    scanf("%s", Estado1); //scanf para digitar

    printf("Digite a Cidade:");
    scanf("%s", Cidade1);

    printf("Digite o Código da Carta:");
    scanf("%s", CodigoCarta1);

    printf("Digite o Número total da população:");
    scanf("%d", &Populacao1);

    printf("Digite quantos Pontos Turísticos têm:");
    scanf("%d", &PontosTuristicos1);

    printf("Digite a Área da Cidade:");
    scanf("%f", &Area1);

    printf("Digite o PIB:");
    scanf("%f", &PIB1);

    //exibição dos dados da carta 1
    printf("\nEstes são os dados da primeira carta:\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("População : %d\n", Populacao1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Área: %fkm\n", Area1);
    printf("PIB: %f\n", PIB1);


    //inserir dados da carta 2
    printf("\nAgora cadastre a segunda carta.\nDigite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite a Cidade:");
    scanf("%s", Cidade2);

    printf("Digite o Código da Carta:");
    scanf("%s", CodigoCarta2);

    printf("Digite o Número total da população:");
    scanf("%d", &Populacao2);

    printf("Digite quantos Pontos Turísticos têm:");
    scanf("%d", &PontosTuristicos2);

    printf("Digite a Área da Cidade:");
    scanf("%f", &Area2);

    printf("Digite o PIB:");
    scanf("%f", &PIB2);

    //exibição carta 2
    printf("\nEstes são os dados da segunda carta:\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Área: %fkm\n", Area2);
    printf("PIB: %f\n", PIB2);


    return 0;
}