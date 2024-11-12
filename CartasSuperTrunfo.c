#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {

    //Declarando variaveis para cada atributo da cidade.
    char nome_cidade[30];
    int cod_cidade;
    float populacao, km_area, pib;    
    int pontos_turisticos;
    
    // Texto de introdução de cadastro 
    printf("\nCadastro da cidade:\n");

    // Atribuindo valor á variaveis
    printf("\nDigite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade);

    printf("Digite a densidade populacional da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", nome_cidade);
    printf("Código: %d \n", cod_cidade);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f \n", km_area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turísticos: %d \n", pontos_turisticos);   

    return 0;
}
