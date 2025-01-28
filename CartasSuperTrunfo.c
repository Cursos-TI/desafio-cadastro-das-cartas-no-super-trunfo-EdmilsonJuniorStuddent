#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo - NOVATO\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Atributos das cidades
    int populacao;
    float area;
    float pib;
    int npt;
    char nome[50];

   

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o codigo da cidade: \n");
        scanf("%s", &nome);

    printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
        scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos da cidade: \n");
        scanf("%d", &npt);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Codigo da cidade: %s\n", nome);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Area da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Numero de pontos turisticos da cidade: %d\n", npt);


    return 0;
}
