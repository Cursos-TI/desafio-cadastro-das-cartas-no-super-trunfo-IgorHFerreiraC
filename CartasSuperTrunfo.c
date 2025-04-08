#include <stdio.h>


int main (){
//printf("Olá, Mundo!\n");



char Estado[50]; 
char codigo_da_carta1[50];
char Nome_da_cidade[50];
int populacao;    
float area;
float PIB;
int pontos_turisticos;
int pais1;

float densidade_populacional_carta_1, densidade_populacional_carta_2; // pegar população + area da cidade e dividir e armazenar na densidade porpulação
float PIB_Per_capita_carta_1, PIB_Per_capita_carta_2; // pib + população e armazenar na pib per capita
float Super_Poder_1; // soma da popução, area, pib, pib per capta e desidade populacional invertida para comparação e número de pontos turisticos


printf("Carta 1: \n");
printf("Digite o nome do Estado: \n");
scanf("%s", Estado);

printf("Digite o Codigo da carta: \n");
scanf("%s", codigo_da_carta1);

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

densidade_populacional_carta_1 = (populacao / area);
printf ("A Densidade populacional da carta 1 é: %f \n", densidade_populacional_carta_1);



PIB_Per_capita_carta_1 = (PIB / populacao);
printf ("O PIB Per Capita da carta 1 é: %f \n", PIB_Per_capita_carta_1);

float inverso_densidade1 = (densidade_populacional_carta_1 > 0) * (1 / densidade_populacional_carta_1);

Super_Poder_1 = (populacao + area + PIB + pontos_turisticos + PIB_Per_capita_carta_1 + inverso_densidade1);
printf("O Valor do Super Poder da Carta 1 é: %d \n", populacao, area, PIB, pontos_turisticos,PIB_Per_capita_carta_1, inverso_densidade1);



char Estado2[50];
char codigo_da_carta[50];
char nome_da_cidade[50];
int populacao2;
float area2;
float PIB2;
int pontos_turisticos2;
float SuperPoder_2; // soma da popução, area, pib, pib per capta e desidade populacional invertida para comparação e número de pontos turisticos
char pais2;


printf("carta 2 \n");

printf("Digite o nome do Estado: \n");
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

printf("carta 1: \n");
printf("Nome do Estado: %s \n", Estado);
printf("Código da Carta: %s \n", codigo_da_carta1);
printf("Nome da Cidade: %s \n", Nome_da_cidade);
printf("População: %d \n", populacao);
printf("área: %f \n", area);
printf("PIB: %f \n", PIB);
printf("pontos turisticos: %d \n", pontos_turisticos);

printf("carta 2: \n");
printf("Nome do Estado: %s \n", Estado2);
printf("Codigo da Carta: %s \n", codigo_da_carta);
printf("Nome da Cidade: %s \n", nome_da_cidade);
printf("população: %d \n", populacao2);
printf("area: %f \n", area2);
printf("PIB: %f \n", PIB2);
printf("Pontos turisticos: %d \n", pontos_turisticos2);

densidade_populacional_carta_2 = (populacao2 / area2);
printf ("A Densidade populacional da Carta 2 é: %f \n", densidade_populacional_carta_2);

PIB_Per_capita_carta_2 = (PIB2 / populacao2);
printf ("O PIB Per Capita da carta 2 é: %f \n", PIB_Per_capita_carta_2);

float inverso_densidade2 = (densidade_populacional_carta_2) * (1 / densidade_populacional_carta_2);

SuperPoder_2 = (populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_Per_capita_carta_2 + inverso_densidade2);

printf("O Valor do Super Poder da Carta 1 é: %d \n", populacao2, area2, PIB2, pontos_turisticos2, PIB_Per_capita_carta_2, inverso_densidade2);
printf("\n");


printf("Resultado das comparações:\n");

printf("Resultado das comparações:\n");

/*
printf("População \n");
if (populacao > populacao2)
{
    printf("A carta 1 (Maringá) ganhou!!! \n");

}else
{
    printf("A carta 2 (Sarandi) ganhou!!! \n");


}
printf("Área \n");
if (área > area2)
{
    printf("A carta 1 (Maringá) ganhou!!! \n");

}else
{
    printf("A carta 2 (Sarandi) ganhou!!! \n");


}
printf("PIB \n");
if (PIB > PIB2)
{
    printf("A carta 1 (Maringá) ganhou!!! \n");

}else
{
    printf("A carta 2 (Sarandi) ganhou!!! \n");


}
printf("Super poder \n");
if (Super_Poder_1 > SuperPoder_2)
{
    printf("A carta 1 (Maringá) ganhou!!! \n");

}else
{
    printf("A carta 2 (Sarandi) ganhou!!! \n");


}
printf("densidade populacional \n");
if (densidade_populacional_carta_1 < densidade_populacional_carta_2)
{
    printf("A carta 1 (Maringá) ganhou!!! \n");

}else
{
    printf("A carta 2 (Sarandi) ganhou!!! \n");


}

*/



int opcao;

printf("1. população: \n");
printf("2. Área: \n");
printf("3. PIB \n");
printf("4. Pontos Turisticos\n");
printf("5. Super poder\n"); 

printf("Escolha o atributo \n");
scanf("%d", &opcao);

      //população
    switch (opcao)
    {
        case 1:
        printf("Atribuito usado na comparação: população \n");
        printf("\n"); 
        printf("A população dos países são:\n");
        printf("Carta 1: %d\n", populacao);
        printf("Carta 2: %d\n", populacao2);
        printf("\n"); 
        if (populacao > populacao2)
        {
        printf("População: Carta 1 venceu! \n");
        } else if (populacao == populacao2)
        {
        printf("Empatou!");
        } else
        {
         printf("População: Carta 2 venceu! \n");
        }
        break;

      //área
      
      case 2:
      printf("Atribuito usado na comparação: área \n");
      printf("\n"); 
      printf("A área em km² dos países são:\n");
      printf("Carta 1: %f\n", area);
      printf("Carta 2: %f\n", area2);
      printf("\n"); 
      if (area > area2)
      {
      printf("Área: Carta 1 venceu! \n");
      } else if (area == area2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
      
      //PIB
     
      case 3:
      printf("Atribuito usado na comparação: PIB\n");
      printf("\n"); 
      printf("O PIB dos países é:\n");
      printf("Carta 1: %f\n", PIB);
      printf("Carta 2: %f\n", PIB2);
      printf("\n");
      if (PIB > PIB2)
      {
      printf("PIB: Carta 1 venceu! \n");
      } else if (PIB == PIB2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
      
      //Pontos turísticos
      
      case 4:
      printf("Atribuito usado na comparação: pontos turísticos\n");
      printf("\n"); 
      printf("Os números de pontos turísticos dos países são:\n");
      printf("Carta 1: %d\n", pontos_turisticos);
      printf("Carta 2: %d\n", pontos_turisticos2);
      printf("\n"); 
      if (pontos_turisticos > pontos_turisticos2)
      {
      printf("Pontos turísticos: Carta 1 venceu! \n");
      } else if (pontos_turisticos == pontos_turisticos2)
      {
      printf("Empatou!");
      } else
      {
      printf("Pontos turísticos: Carta 2 venceu! \n");
      }
      break;
      //Densidade demográfica
      
      case 5:
      printf("Atribuito usado na comparação: densidade populacional\n");
      printf("\n"); 
      printf("A densidade populacional dos países é:\n");
      printf("Carta 1: %f\n", densidade_populacional_carta_1);
      printf("Carta 2: %f\n", densidade_populacional_carta_2);
      printf("\n"); 
      
      if (densidade_populacional_carta_1 < densidade_populacional_carta_2)
      {
      printf("Densidade demográfica: Carta 1 venceu! \n");
      } else if (densidade_populacional_carta_1 == densidade_populacional_carta_2)
      {
      printf("Empatou!");
      } else
      {
         printf("Densidade populacional: Carta 2 venceu! \n");
      
      break;
      }

    }
    
    // desafio mestre  -  usar operador ternário
 /*
    int numerojogador;
    int numerocomputador;

     printf("Jogos de comparação\n");
     printf("Escolha o primeiro atributo\n");
     printf("P. População\n");
     printf("A área\n");
     printf("P pib\n");
     printf("PT pontos turisticos\n");
     printf("S super poder\n");

    printf("comparação\n");
    scanf("%d", &população, &populacao2);

    switch (numerojogador)
    {
    case 'P':
    case 'p':
        printf("Vocês escolheu POPULAÇÃO");
        numerojogador = população > populacao2 ? 1 : 0;  
        break;

    
    default: 
        break;
    }
    if (numerojogador == 1){
        printf("Parabens, Você venceu!!!\n");

    }else
    {
        printf("Infelizmente você perdeu");
    } 

    printf("Comparação\n");
    scanf("%f", &área, area2);

    switch (numerojogador)
    {
    case 'A':
    case 'a':
       printf("Vocês escolheu ÁREA");
       numerojogador = área > area2 ? : 0;
        break;

    default:
        break; 
        }
*/
        int opcao1;

   printf("\n");
   printf("Escolha o atributo que será usado para comparar as cartas:\n");
   printf("1. Nome do país:\n");
   printf("2: População:\n");
   printf("3. Área:\n");
   printf("4. PIB:\n");
   printf("5. Número de pontos turísticos:\n");
   printf("6. Densidade demográfica:\n");
   printf("7. País:\n");
   scanf("%d", &opcao1);
   

   //***RESULTADO FINAL 
   printf("\n");
   printf("**Resultado das comparações**\n");
   printf("\n");   
   printf("Carta 1 - País: %d \n", pais1);     
   printf("Carta 2 - País: %d \n", pais2);
    
   //nome do país
   switch (opcao1)
   {
      case 1:
      printf("Atribuito usado na comparação: nomes dos países \n");
      printf("\n"); 
      printf("Os nomes dos países são:\n");
      printf("Carta 1: %d\n", pais1);
      printf("Carta 2: %d\n", pais2);
      printf("\n"); 
      if (pais1 && pais2)
      {
      printf("Empatou!");
      }
          
      break;
         
      //população
      case 2:
      printf("Atribuito usado na comparação: população \n");
      printf("\n"); 
      printf("A população dos países são:\n");
      printf("Carta 1: %d\n", populacao);
      printf("Carta 2: %d\n", populacao2);
      printf("\n"); 
      if (populacao > populacao2)
      {
      printf("População: Carta 1 venceu! \n");
      } else if (populacao == populacao2)
      {
      printf("Empatou!");
      } else
      {
      printf("População: Carta 2 venceu! \n");
      }
      break;
    
      //área
      case 3:
      printf("Atribuito usado na comparação: área \n");
      printf("\n"); 
      printf("A área em km² dos países são:\n");
      printf("Carta 1: %f\n", area);
      printf("Carta 2: %f\n", area2);
      printf("\n"); 
      if (area > area2)
      {
      printf("Área: Carta 1 venceu! \n");
      } else if (area == area2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
    
      //PIB
      case 4:
      printf("Atribuito usado na comparação: PIB\n");
      printf("\n"); 
      printf("O PIB dos países é:\n");
      printf("Carta 1: %f\n", PIB);
      printf("Carta 2: %f\n", PIB2);
      printf("\n");
      if (PIB > PIB2)
      {
      printf("PIB: Carta 1 venceu! \n");
      } else if (PIB == PIB2)
      {
      printf("Empatou!");
      } else
      {
      printf("Área: Carta 2 venceu! \n");
      }
      break;
    
      //Pontos turísticos
      case 5:
      printf("Atribuito usado na comparação: pontos turísticos\n");
      printf("\n"); 
      printf("Os números de pontos turísticos dos países são:\n");
      printf("Carta 1: %d\n", pontos_turisticos);
      printf("Carta 2: %d\n", pontos_turisticos2);
      printf("\n"); 
      if (pontos_turisticos > pontos_turisticos2)
      {
      printf("Pontos turísticos: Carta 1 venceu! \n");
      } else if (pontos_turisticos == pontos_turisticos2)
      {
      printf("Empatou!");
      } else
      {
      printf("Pontos turísticos: Carta 2 venceu! \n");
      }
      break;
    
      //Densidade demográfica
      case 6:
      printf("Atribuito usado na comparação: densidade populacional\n");
      printf("\n"); 
      printf("A densidade populacional dos países é:\n");
      printf("Carta 1: %f\n", densidade_populacional_carta_1);
      printf("Carta 2: %f\n", densidade_populacional_carta_2);
      printf("\n"); 
      
      if (densidade_populacional_carta_1 < densidade_populacional_carta_2)
      {
      printf("Densidade demográfica: Carta 1 venceu! \n");
      } else if (densidade_populacional_carta_1 == densidade_populacional_carta_2)
      {
      printf("Empatou!");
      } else
      {
         printf("Densidade populacional: Carta 2 venceu! \n");
      }
      break;
 
      default:
      printf("Opção invalida!");
       break;
        
    }





    
    
    
    

    
    
   



return 0;

    }