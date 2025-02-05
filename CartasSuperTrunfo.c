#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos. 

    char estado[50];

    char cidade [50];

    char codigo[50];

    int populacao;

    float area;

    float pib;

    int pontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Insira o Estado: \n");
    scanf("%s", &estado);

    printf("insira a Cidade: \n");
    scanf("%s", &cidade);

    printf("Qual o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Qual a populaçao: \n");
    scanf("%d", &populacao);

    printf("insira a Área: \n");
    scanf("%f", &area);

    printf("Qual o PIB: \n");
    scanf("%f", &pib);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Estado: %s \n");

    printf("Cidade: %s \n");

    printf("Codigo da cidade: %s \n");

    printf("População: %d \n");

    printf("Área: %f \n");

    printf("PIB: %f \n");

    printf("Pontos turisticos: %d \n");
    




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
