#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Declarando variaveis para armazenar estados
    char estado_A[30];
    char estado_B[30];
    char estado_C[30];
    char estado_D[30];
    char estado_E[30];
    char estado_F[30];
    char estado_G[30];
    char estado_H[30];

    // Declarando variaveis para armazenar nome da cidade.
    char cidade_01[30];
    char cidade_02[30];
    char cidade_03[30];
    char cidade_04[30];

    // Declarando variaveis para cada atributo da cidade.    
    int cod_cidade01, cod_cidade02, cod_cidade03, cod_cidade04;
    float populacao_c1, populacao_c2, populacao_c3, populacao_c4;
    float km_area_c1, km_area_c2, km_area_c3, km_area_c4 ;
    float pib_c1, pib_c2, pib_c3, pib_c4;       
    int pontos_turisticos_c1, pontos_turisticos_c2, pontos_turisticos_c3, pontos_turisticos_c4;

    // atribuindo valor a variavel "estado_A".
    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado_A);      

    // Mensagem de sucesso.
    printf("\nEstado cadastrado com sucesso!!\n");

    // Cadastro da primeira cidade do estado_A.
    printf("Digite o nome da 1° cidade do estado de %s \n", estado_A);
    scanf("%s", &cidade_01);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade01);
    //você está usando a mesma variável para todas as cidades, quando você ler para a cidade_02, o conteúdo vai ser sobreposto. 
    //Você precisa criar uma variável para cada cidade, assim como para população, area, pib....

    printf("Digite a população da cidade:\n");
    scanf("%f", &populacao_c1);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c1);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", cidade_01);
    printf("Código: %d \n", cod_cidade01);
    printf("População: %f \n", populacao_c1);
    printf("Área: %f \n", km_area_c1);
    printf("PIB: %f \n", pib_c1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c1);

     // Cadastro da segunda cidade do "estado A".
    printf("Digite o nome da 2° cidade do estado de %s \n", estado_A);
    scanf("%s", &cidade_02);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade02);

    printf("Digite a densidade populacional da cidade:\n");
    scanf("%f", &populacao_c2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c2);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", cidade_02);
    printf("Código: %d \n", cod_cidade02);
    printf("População: %f \n", populacao_c2);
    printf("Área: %f \n", km_area_c2);
    printf("PIB: %f \n", pib_c2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c2);

     // Cadastro da terceira cidade do "estado A".
    printf("Digite o nome da 3° cidade do estado de %s \n", estado_A);
    scanf("%s", &cidade_03);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade03);

    printf("Digite a densidade populacional da cidade:\n");
    scanf("%f", &populacao_c3);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c3);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c3);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c3);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", cidade_03);
    printf("Código: %d \n", cod_cidade03);
    printf("População: %f \n", populacao_c3);
    printf("Área: %f \n", km_area_c3);
    printf("PIB: %f \n", pib_c3);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c3);

     // Cadastro da quarta cidade do "estado A".
    printf("Digite o nome da 4° cidade do estado de %s \n", estado_A);
    scanf("%s", &cidade_04);

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade04);

    printf("Digite a densidade populacional da cidade:\n");
    scanf("%f", &populacao_c4);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c4);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c4);       

   // Mensagem de sucesso ao cadastrar
    printf("\nCarta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:
    printf("\nCidade: %s \n", cidade_04);
    printf("Código: %d \n", cod_cidade04);
    printf("População: %f \n", populacao_c4);
    printf("Área: %f \n", km_area_c4);
    printf("PIB: %f \n", pib_c4);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c4);   

    return 0;
}
