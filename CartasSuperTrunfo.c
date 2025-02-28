#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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

    char Estado[50];
    char Código_da_Carta[50];
    char Nome_da_cidade[50];
    int população;    
    float área;
    float PIB;
    int pontos_turisticos;

printf("Digite o nome do Estado: \n");
scanf("%s", Estado);

printf("Digite o Codigo da carta: \n");
scanf("%s", Código_da_Carta);

printf("Digite o nome da cidade: \n");
scanf("%s", Nome_da_cidade);

printf("Digite a população: \n");
scanf("%d", &população);

printf("Digite a area: \n");
scanf("%f", &área);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite os pontos turisticos: \n");
scanf("%d", &pontos_turisticos);

}
