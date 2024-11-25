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
    char cod_cidade01[4], cod_cidade02[4];
    int habitantes_c1, habitantes_c2;
    float km_area_c1, km_area_c2;
    float pib_c1, pib_c2;       
    int pontos_turisticos_c1, pontos_turisticos_c2;
    float densidade_pp01, densidade_pp02;      

    // atribuindo valor a variavel "estado_A".
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado_A);      

    // Mensagem de sucesso.
    printf("\n****** Estado cadastrado com sucesso!! ******\n\n");

    // --------------------- Cadastro da primeira cidade do estado_A.
    printf("Digite o nome da 1° cidade do estado de: %s \n", estado_A);
    scanf("%s", &cidade_01);

    printf("Digite o código da cidade: \n");
    scanf("%s", &cod_cidade01);    

    printf("Digite número de habitantes da cidade:\n");
    scanf("%d", &habitantes_c1);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c1);

    // Calculo da densidade populacional
    densidade_pp01 = (float) habitantes_c1 / km_area_c1;         

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");

    // Exibição dos Dados das Cartas:
    printf("Cidade: %s \n", cidade_01);
    printf("Código: %s \n", cod_cidade01);
    printf("População: %d \n", habitantes_c1);
    printf("Área: %.1f \n", km_area_c1);
    printf("PIB: %.1f \n", pib_c1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f \n\n", densidade_pp01);

     // ------------------------ Cadastro da segunda cidade do "estado A".
    printf("Digite o nome da 2° cidade do estado de: %s \n", estado_A);
    scanf("%s", &cidade_02);

    printf("Digite o código da cidade: \n");
    scanf("%s", &cod_cidade02);

    printf("Digite número de habitantes da cidade:\n");
    scanf("%d", &habitantes_c2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c2);  

    // Calculo da densidade populacional
    densidade_pp02 = (float) habitantes_c2 / km_area_c2;    

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");

    // Exibição dos Dados das Cartas:
    printf("Cidade: %s \n", cidade_02);
    printf("Código: %s \n", cod_cidade02);
    printf("População: %d \n", habitantes_c2);
    printf("Área: %.2f \n", km_area_c2);
    printf("PIB: %.1f \n", pib_c2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f\n\n", densidade_pp02);    

    //----------------------- EXIBINDO OS DADOS DE CADA CIDADE DE FORMA ORGANIZADA!!!  

    //Cidade 01
    printf("****** Primeira cidade do estado de: %s ******\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nHabitantes: %d \nÁrea: %.2f \nPIB: %.1f \nPontos turísticos: %d \nDensidade Populacional: %.2f\n\n", cidade_01, cod_cidade01, habitantes_c1, km_area_c1,pib_c1, pontos_turisticos_c1, densidade_pp01);

    //Cidade 02
    printf("****** Segunda cidade do estado de: %s ****** \n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \Habitantes: %d \nÁrea: %.2f \nPIB: %.1f \nPontos turísticos: %d \nDensidade Populacional: %.2f\n\n", cidade_02, cod_cidade02, habitantes_c2, km_area_c2,pib_c2, pontos_turisticos_c2, densidade_pp02);

    return 0;
}