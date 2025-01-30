#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Tiago Sabadim

int main() {
    // Definindo as variáveis para cada atributo da cidade
    char city_name[50];
    char city_code[5];
    char state[50];
    char pais[50];
    double city_population;
    double city_area;
    double city_pib;
    int tourist_attractions;
    


    //Iniciando a coleta de Dados para Impressão das Cartas
    printf("Vamos começar cadastrar as Cartas\n");

     // Pergunta sobre o código da carta
    printf("Qual o código da carta? exemplo A01\n");
    scanf(" %[^\n]", city_code); // Lê o código da carta permitindo até 5 caracteres

    // Pergunta sobre o país
    printf("Qual o nome do pais?\n");
    scanf(" %[^\n]", pais); // Lê o nome do país, permitindo espaços

    // Pergunta sobre o estado
    printf("Qual estado do %s?\n", pais);
    scanf(" %[^\n]", state); // Lê o nome do estado, permitindo espaços

    // Pergunta sobre o nome da cidade
    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", city_name); // Lê o nome da cidade, permitindo espaços

    // Pergunta sobre a área da cidade
    printf("Qual a área de %s?\n", city_name);
    scanf(" %lf", &city_area); // Lê o número da área 

    // Pergunta sobre o população da cidade
    printf("Qual a população de %s?\n", city_name);
    scanf(" %lf", &city_population); // Lê o número da população

    // Pergunta sobre o PIB da cidade
    printf("Qual o PIB de %s?\n", city_name);
    scanf(" %lf", &city_pib); // Lê o PIB da cidade

    // Pergunta sobre o PIB da cidade
    printf("Quantos pontos turisticos tem %s?\n", city_name);
    scanf(" %d", &tourist_attractions); // Lê os pontos turisticos da cidade



    // Exibe as informações
    printf("\n--- Dados da Carta ---\n\n");
    printf("Código: %s\n", city_code);
    printf("País: %s\n", pais);
    printf("Estado: %s\n", state);
    printf("Cidade: %s\n", city_name);
    printf("Área: %lf\n", city_area);
    printf("População: %lf\n", city_population);
    printf("PIB: %lf\n", city_pib);
    printf("Pontos Turísticos: %d\n", tourist_attractions);
    printf("\n---------------------\n");
    printf("\n");
    printf("Carta Cadastrada com Sucesso\n");
    printf("\n");
    printf("\n");

    return 0;
}