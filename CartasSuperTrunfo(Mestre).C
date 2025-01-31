#include <stdio.h>

int main(){
    int populacoo, PIB, ponto_turistico, cidade, cod_carta; 
    int qnt_habitantes, PIB_p_capita, densidade_populacional;
    float area;
    char estado;
    
    //Estados 
    printf("Insira a Inicial do Estado.\n");
    scanf("%c", &estado);
    
    //Cidades 
    printf("Escolha entre 1 e 4.\n");
    scanf("%d", &cidade);
    
    //Área 
    printf("Insira a área da cidade.\n");
    scanf("%f", &area);
    
    //PIB 
    printf("Insira o PIB.\n");
    scanf("%d", &PIB);
    
    //Número de pontos turísticos 
    printf("Quantidade de Pontos turísticos.\n");
    scanf("%d", &ponto_turistico);
    
    //Numero de HABITANTES
    printf("Numero de Habitantes.\n");
    scanf("%d", &qnt_habitantes);
    
    //Densidade Populacional
    densidade_populacional = area / qnt_habitantes;
    
    //PIB per Capita
    PIB_p_capita = PIB / qnt_habitantes;
    
    //Exibir os dados
    printf("-----------------------------------\n");
    printf("Estado: %c\n", estado);
    printf("Numero da Cidade: %d\n", cidade);
    printf("Codigo da Carta: %c0%d\n", estado, cidade);
    printf("Área: %0.2fkm²\n", area);
    printf("Quantidade de Habitantes: %d\n", qnt_habitantes);
    printf("Densidade Populacional: %d\n", densidade_populacional);
    printf("PIB: %d\n", PIB);
    printf("PIB per capita: %d\n", PIB_p_capita);
    printf("-----------------------------------");
}
