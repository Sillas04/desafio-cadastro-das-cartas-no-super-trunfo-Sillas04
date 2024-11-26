#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Declarando variaveis para armazenar estados
    char estado_A[30], estado_B[30], estado_C[30], estado_D[30], estado_E[30], estado_F[30], estado_G[30], estado_H[30];
    
    // Declarando variaveis para armazenar nome da cidade.
    char cidade_01[30], cidade_02[30], cidade_03[30], cidade_04[30];

    // Declarando variaveis para cada atributo da cidade.    
    char cod_cidade01[3], cod_cidade02[3];
    int habitantes_c1, habitantes_c2;
    float km_area_c1, km_area_c2;
    float pib_c1, pib_c2;       
    int pontos_turisticos_c1, pontos_turisticos_c2;

    // Variáveis de densidade e PIBpcpt
    float densidade_pp01, densidade_pp02;   
    float pib_capta01, pib_capta02;   

    // atribuindo valor a variavel "estado_A".
    printf("Digite o nome do Estado:\n");
    scanf("%30s", estado_A);      

    // Mensagem de sucesso.
    printf("\n****** Estado cadastrado com sucesso!! ******\n\n");

    // --------------------- Cadastro da primeira cidade do estado_A.
    printf("Digite o nome da 1° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_01);

    printf("Digite o código da cidade: \n");
    scanf("%3s", cod_cidade01);    

    printf("Digite a população da cidade:\n");
    scanf("%d", &habitantes_c1);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c1);

    // Calculo da densidade populacional
    densidade_pp01 = (float) habitantes_c1 / km_area_c1;
    pib_capta01 = (float) (pib_c1 * 1e9) / habitantes_c1;         

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");

     // ------------------------ Cadastro da segunda cidade do "estado A".
    printf("Digite o nome da 2° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_02);

    printf("Digite o código da cidade: \n");
    scanf("%3s", cod_cidade02);

    printf("Digite a população da cidade:\n");
    scanf("%d", &habitantes_c2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_c2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_c2);  

    // Calculo densidade e PIB
    densidade_pp02 = (float) habitantes_c2 / km_area_c2;
    pib_capta02 = (float) (pib_c2 * 1e9) / habitantes_c2;    

   // Mensagem de sucesso ao cadastrar
    printf("\n****** Carta cadastrada com sucesso! ****** \n\n");  

    //----------------------- EXIBINDO OS DADOS DE CADA CIDADE DE FORMA ORGANIZADA!!!  
    
    //Cidade 01
    printf("****** Primeira cidade do estado de: %s ******\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %d \nÁrea: %.1f Km² \nPIB: R$ %.1f \nPontos turísticos: %d \nDensidade Populacional: %.2f\n PIB per Capta: R$ %.2f\n\n", cidade_01, cod_cidade01, habitantes_c1, km_area_c1,pib_c1, pontos_turisticos_c1, densidade_pp01, pib_capta01);

    //Cidade 02
    printf("****** Segunda cidade do estado de: %s ****** \n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %d \nÁrea: %.1f Km² \nPIB: R$ %.1f \nPontos turísticos: %d \nDensidade Populacional: %.2f\n PIB per Capta: R$ %.2f\n\n", cidade_02, cod_cidade02, habitantes_c2, km_area_c2,pib_c2, pontos_turisticos_c2, densidade_pp02, pib_capta02);

    return 0;
}
