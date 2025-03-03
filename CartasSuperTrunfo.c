#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Super trunfo - Tema: Países\n");

    int codigodacidade, população, NPT;
    char nome[50];
    float area, PIB;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &população);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    printf("Código da cidade: %d\n", codigodacidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", população);
    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", NPT);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
