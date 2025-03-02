#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: equivalente a %d.
    %f: Imprime um número de pontos flutuantes no formato padrão.
    %e: Imprime um número de ponto flutuante na notação cientifica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia(strings) de caracteres.
    */
int main() {

    char Estado[50];
    char Codigo_da_Carta[50];
    char Nome_da_cidade[50];
    int populacao;    
    float area;
    float PIB;
    int pontos_turisticos;

    printf("Carta 1 \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", Codigo_da_Carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Nome do Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Codigo_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Pontos Turisticos: %d \n", pontos_turisticos);

    char Estado2[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    
    printf("carta 2 \n");
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", Estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);
    
    printf("população: \n");
    scanf("%d", &populacao2);
    
    printf("Area: \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Pontos Turisticoa: \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("Nome do Estado: %s \n", Estado2);
    printf("Codigo da Carta: %s \n", codigo_da_carta);
    printf("Nome da Cidade: %s \n", nome_da_cidade);
    printf("população: %d \n", populacao2);
    printf("area: %f \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);


    return 0;


}
