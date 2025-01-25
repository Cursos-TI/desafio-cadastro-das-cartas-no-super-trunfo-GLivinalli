#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa (Quem é Larissa?)

int main() {

    int cod_cidade, populacao, pontos_turistico;
    float pib, area;
    char nome_cidade[100];
    
    // Cadastro das Cartas:
    
    printf("Codigo da Cidade\n");
    scanf(" %d", &cod_cidade);

    printf("População\n");
    scanf(" %d", &populacao);

    printf("Nome da Cidade\n");
    scanf(" %s", nome_cidade);

    printf("Área\n");
    scanf(" %f", &area);

    printf("PIB\n");
    scanf(" %f", &pib);

    printf("Pontos Turisticos\n");
    scanf(" %d", &pontos_turistico);

     // Exibição dos Dados das Cartas:

    printf("Codigo da Cidade: %d\n", cod_cidade, nome_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: \n");
    printf("Área: %0.2f\n", area);
    printf("PIB: %0.2f\n", pib);
    printf("Pontos Turisticos: %d", pontos_turistico);

    return 0;
}
