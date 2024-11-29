#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Declarando variaveis para armazenar estados
    char estado_A[30], estado_B[30];
    
    // Declarando variaveis para armazenar nome da cidade.
    char cidade_a01[30], cidade_a02[30];

    // Declarando variaveis para cada atributo da cidade.    
    char cod_cidade_a01[4], cod_cidade_a02[4];
    unsigned long int habitantes_a01, habitantes_a02;
    float km_area_a01, km_area_a02;
    float pib_a01, pib_a02;       
    int pontos_turisticos_a01, pontos_turisticos_a02;

    // Variáveis de densidade e PIBpcpt
    float densidade_pp_a01, densidade_pp_a02;   
    float pib_capta_a01, pib_capta_a02;

    //Variaveis de soma geral do estado para comparação 
    unsigned long total_habitantes_a01;   
    float total_km_area_a01;   
    float total_pib_a01 ;  
    int total_pontos_turisticos_a01; 
    float total_densidade_a01;
    float total_pib_capta_a01;

    // atribuindo valor a variavel "estado_A".
    printf("Digite o nome do Estado:\n");
    scanf("%30s", estado_A);      

    // Mensagem de sucesso.
    printf("\n****** Estado cadastrado com sucesso!! ******\n\n");

    // --------------------- Cadastro da primeira cidade do estado_A.
    printf("Digite o nome da 1° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_a01);

    printf("Digite o código da cidade: \n");
    scanf("%4s", cod_cidade_a01);    

    printf("Digite a população da cidade:\n");
    scanf("%lu", &habitantes_a01);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_a01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_a01);

    // Calculo da densidade populacional
    densidade_pp_a01 = (float) habitantes_a01 / km_area_a01;
    pib_capta_a01 = (float) pib_a01 / habitantes_a01 ;         

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");

     // ------------------------ Cadastro da segunda cidade do "estado A".
    printf("Digite o nome da 2° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_a02);

    printf("Digite o código da cidade: \n");
    scanf("%4s", cod_cidade_a02);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &habitantes_a02);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_a02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_a02);  

    // Calculo densidade e PIB
    densidade_pp_a02 = (float) habitantes_a02 / km_area_a02;
    pib_capta_a02 = (float) pib_a02 / habitantes_a02;    

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");  

    //----------------------- EXIBINDO OS DADOS DE CADA CIDADE DE FORMA ORGANIZADA!!!  
    
    //Cidade 01
    printf("****** Primeira cidade do estado de: %s ******\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_a01, cod_cidade_a01, habitantes_a01, km_area_a01,pib_a01, pontos_turisticos_a01, densidade_pp_a01, pib_capta_a01);

    //Cidade 02
    printf("****** Segunda cidade do estado de: %s ****** \n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f  hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_a02, cod_cidade_a02, habitantes_a02, km_area_a02,pib_a02, pontos_turisticos_a02, densidade_pp_a02, pib_capta_a02);

    //Atribuindo valores a variaveis gerais do estado A
    total_habitantes_a01 = habitantes_a01 + habitantes_a02;   
    total_km_area_a01 = km_area_a01 + km_area_a02;   
    total_pib_a01 = pib_a01 + pib_a02;  
    total_pontos_turisticos_a01 = pontos_turisticos_a01 + pontos_turisticos_a02; 
    total_densidade_a01 =(float) total_habitantes_a01 / total_km_area_a01;
    total_pib_capta_a01 = (float) total_pib_a01 / total_habitantes_a01;

    //Exibição de propriedades do estado A
    printf("Informações gerais do estado:  %s\n", estado_A);
    printf("População: %lu habitantes \nÁrea: %.1f km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade populacional: %.2f hab/Km² \nPIB per capta: R$ %.2f \n\n", total_habitantes_a01, total_km_area_a01, total_pib_a01, total_pontos_turisticos_a01, total_densidade_a01, total_pib_capta_a01);



    return 0;
}
