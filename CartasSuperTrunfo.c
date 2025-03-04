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

    printf("Carta 1 \n"); //para separar a carta 1 da 2 - por esse motivo não forma usadas variaveis neste printf

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

    

    char Estado2[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    
    printf("carta 2 \n"); //para separar a carta 2 da 1 - por esse motivo não foram usadas variaveis neste printf
    
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

    printf("Carta 1: \n");

    printf("Seu Estado da carta 1 é: %s \n", Estado); //para imprimir os comendos
    printf("Seu Código da carta 1 é: %s \n", Codigo_da_Carta); //para imprimir os comendos
    printf("O nome da sua Cidade 1 é: %s \n", Nome_da_cidade); //para imprimir os comendos
    printf("a população da cidade da carta 1 é: %d \n", populacao); //para imprimir os comendos
    printf("A Área da cidade da carta 1 é: %f \n", area); //para imprimir os comendos
    printf("o PIB da cidade da carta 1 é: %f \n", PIB); //para imprimir os comendos
    printf("Os Pontos Turisticos da cidade da carta 1 é : %d \n", pontos_turisticos); //para imprimir os comendos
    
    printf("carta 2: \n");
    
    printf("O Nome do Estado da carta 2 é: %s \n", Estado2); //para imprimir os comendos
    printf("O Codigo da Carta 2 é: %s \n", codigo_da_carta); //para imprimir os comendos
    printf("O Nome da Cidade da carta 2 é: %s \n", nome_da_cidade); //para imprimir os comendos
    printf("A população da cidade da carta 2 é: %d \n", populacao2); //para imprimir os comendos
    printf("A area da cidade da carta 2 é: %f \n", area2); //para imprimir os comendos
    printf("O PIB da cidade da carta 2 é: %f \n", PIB2); //para imprimir os comendos
    printf("Os Pontos turisticos da cidade da carta 2 é: %d \n", pontos_turisticos2); //para imprimir os comendos


    return 0;


}
