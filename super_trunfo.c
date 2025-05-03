#include <stdio.h>

                    //Desafio Super Trunfo em C: Nível Mestre

int main(){

    // Declarando as Variáveis:

   char estado1[30], estado2[30], codigoCarta1[20], codigoCarta2[20], nomeCidade1[50], nomeCidade2[50];
   unsigned long int populacao1, populacao2;
   float area1, area2, densidade1, densidade2, densInversa1, densInversa2;
   double pib1, pib2, ppCapita1, ppCapita2;
   int pontosTuristicos1, pontosTuristicos2;

    // Coletando as informações das cidades:

    printf("                Cadastro de Cartas do Super Trunfo em C \n");  

    printf("    Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

        // Carta 1:
        printf("Digite o nome do Estado: \n");
        fgets(estado1,30,stdin); // Usei fgets em cidades e estados para que fosse possível ler nomes compostos, por exemplo: Rio de Janeiro, Espírito Santo, ect...

        printf("Qual o nome da cidade? \n");
        fgets(nomeCidade1,50,stdin);

        printf("Qual o código da carta? \n");
        scanf("%s", codigoCarta1);

        printf("Qual a população da cidade? \n");
        scanf("%lu", &populacao1);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area1);

        printf("Qual o PIB da cidade? \n");
        scanf("%lf", &pib1);

        printf("Quantos pontos turísticos existem na cidade? \n");
        scanf("%d", &pontosTuristicos1);

        printf("\n");

        printf("            CIDADE CADASTRADA COM SUCESSO! Vamos cadastrar a próxima carta!\n"); // Informa a conclusão do 1º cadastro

        printf("    Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

        printf("\n");

        // Carta 2:
        printf("Digite o nome do Estado: \n");
        getchar(); // Usei para limpar o buffer e corrigir o erro onde pulava a coleta do nome do estado.
        fgets(estado2,30,stdin);

        printf("Qual o nome da cidade? \n");
        fgets(nomeCidade2,50,stdin);

        printf("Qual o código da carta? \n");
        scanf("%s", codigoCarta2);

        printf("Qual a população da cidade? \n");
        scanf("%lu", &populacao2);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade? \n");
        scanf("%lf", &pib2);

        printf("Quantos pontos turísticos existem na cidade? \n");
        scanf("%d", &pontosTuristicos2);

   // Calculando a Densidade Demográfica, Densidade Demográfica Inversa e o Pib Per Capita: 

   densidade1 = (float) populacao1/area1;
   densidade2 = (float) populacao2/area2;
   densInversa1 = 1/densidade1;
   densInversa2 = 1/densidade2;
   ppCapita1 = (float) pib1/populacao1;
   ppCapita2 = (float) pib2/populacao2;

   // Inserindo e calculando o Super Poder:

   long double superPoder1, superPoder2;
   superPoder1 = (long double) populacao1 + area1 + pib1 + pontosTuristicos1 + ppCapita1 + densInversa1;
   superPoder2 = (long double) populacao2 + area2 + pib2 + pontosTuristicos2 + ppCapita2 + densInversa2;

    printf("                    CIDADE CADASTRADA COM SUCESSO! \n"); // Informa a conclusão do 2º cadastro

    printf("    Confira as informações fornecidas: \n");

    // Mostrar as informações que o usuário forneceu

    printf("CIDADE 1: \n");
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", nomeCidade1);
    printf("População: %lu pessoas.\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos1);
    printf("A Densidade Populacional da cidade é: %.1f Hab/Km²\n", densidade1);
    printf("O PIB per Capita na cidade é: R$%.2f\n", ppCapita1);

    printf("\n");

    printf("CIDADE 2: \n");
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Estado: %s", estado2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %lu pessoas.\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos2);
    printf("A Densidade Populacional da cidade é: %.1f Hab/Km²\n", densidade2);
    printf("O PIB per Capita na cidade é: R$%.2f\n", ppCapita2);

    printf("\n");

                printf("Agora vamos conferir o VENCEDOR\n");
    printf("Comparação de Cartas (atributo: PIB):\n");

    printf("\n");

    printf("Carta 1 - %s PIB R$ %.2f\n", nomeCidade1, pib1);
    printf("Carta 2 - %s PIB R$ %.2f\n", nomeCidade2, pib2);

    printf("\n");
    
       //Cálculos de comparação baseados no PIB das cidades

    if(pib1 > pib2){
        printf("Carta 1, %s VENCEU!\n", nomeCidade1);
    } else {
        printf("Carta 2, %s VENCEU!\n", nomeCidade2);
    }



    return 0;

}