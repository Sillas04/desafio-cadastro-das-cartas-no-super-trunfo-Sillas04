#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Declarando variaveis para armazenar estados
    char estado_01[30];
    char estado_02[30];
    char estado_03[30];
    char estado_04[30];
    char estado_05[30];
    char estado_06[30];
    char estado_07[30];
    char estado_08[30];

    // Declarando variaveis para armazenar nome da cidade.
    char cidade_01[30];
    char cidade_02[30];
    char cidade_03[30];
    char cidade_04[30];

    // Declarando variaveis para cada atributo da cidade.    
    int cod_cidade;
    float populacao, km_area, pib;    
    int pontos_turisticos;

    // atribuindo valor a variavel "estado-01".
    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado_01);      

    // Mensagem de sucesso.
    printf("\nEstado cadastrado com sucesso!!\n");

    printf("Digite o nome da 1° cidade do estado de %s \n", estado_01);
    scanf("%s", &cidade_01);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade);

    printf("Digite a densidade populacional da cidade:\n");
    scanf("%f", &populacao);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", cidade_01);
    printf("Código: %d \n", cod_cidade);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", km_area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %d \n", pontos_turisticos);   

    return 0;
}
