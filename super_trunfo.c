#include <stdio.h>

                    //Desafio Super Trunfo em C - Com Menu Interativo

int main(){

    // Declarando as Variáveis:

   char estado1[30], estado2[30], codigoCarta1[20], codigoCarta2[20], nomeCidade1[50], nomeCidade2[50];
   int populacao1, populacao2;
   float area1, area2, densidade1, densidade2, densInversa1, densInversa2;
   float pib1, pib2, ppCapita1, ppCapita2;
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
        scanf("%d", &populacao1);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area1);

        printf("Qual o PIB da cidade? \n");
        scanf("%f", &pib1);

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
        scanf("%d", &populacao2);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade? \n");
        scanf("%f", &pib2);

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

   float superPoder1, superPoder2;
   superPoder1 =  populacao1 + area1 + pib1 + pontosTuristicos1 + ppCapita1 + densInversa1;
   superPoder2 =  populacao2 + area2 + pib2 + pontosTuristicos2 + ppCapita2 + densInversa2;

    printf("                    CIDADE CADASTRADA COM SUCESSO! \n"); // Informa a conclusão do 2º cadastro

    printf("    Confira as informações fornecidas: \n");

    // Mostrar as informações que o usuário forneceu

    printf("CIDADE 1: \n");
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", nomeCidade1);
    printf("População: %d pessoas.\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos1);
    printf("A Densidade Demográfica da cidade é: %.1f Hab/Km²\n", densidade1);
    printf("O PIB per Capita na cidade é: R$%.2f\n", ppCapita1);
    printf("O Super Poder da cidade é de %.2f pontos.\n", superPoder1);

    printf("\n");

    printf("CIDADE 2: \n");
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Estado: %s", estado2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %d pessoas.\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos2);
    printf("A Densidade Demográfica da cidade é: %.1f Hab/Km²\n", densidade2);
    printf("O PIB per Capita na cidade é: R$%.2f\n", ppCapita2);
    printf("O Super Poder da cidade é de %.2f pontos.\n", superPoder2);

    printf("\n");

    // Implementando o Menu Interativo Dinâmico para escolha dos comparadores.

    int comparador1, comparador2; // Variáveis criadas para armazenar as escolhas do jogador.
    float soma1, soma2; // Variáveis para armazenar a soma dos atributos

    printf("Agora vamos comparar as cartas e verificar o vencedor.\n");
    printf("Escolha dois atributos que serão utilizados na comparação das cidades:\n");
    printf("\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Quantidade de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    printf("\n");
    printf("Sua 1ª escolha é: \n");
    scanf("%d", &comparador1);
    printf("\n");

    switch (comparador1)
    {
    case 1:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - Área\n");
        printf("2 - PIB\n");
        printf("3 - Quantidade de Pontos Turísticos\n");
        printf("4 - Densidade Demográfica\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + area1;
            soma2 = (float) populacao2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + pib1;
            soma2 = (float) populacao2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + pontosTuristicos1;
            soma2 = (float) populacao2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                                nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + densidade1;
            soma2 = (float) populacao2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                                nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + ppCapita1;
            soma2 = (float) populacao2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de R$ %s é %.2f.\n", nomeCidade1, ppCapita1,
                                                                                nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) populacao1 + superPoder1;
            soma2 = (float) populacao2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a População.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                                nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
    case 2:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - PIB\n");
        printf("3 - Quantidade de Pontos Turísticos\n");
        printf("4 - Densidade Demográfica\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) area1 + populacao1;
            soma2 = (float) area2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) area1 + pib1;
            soma2 = (float) area2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("O PIB de %s é R$ %.2f, e O PIB de %s é R$ %.2f.\n", nomeCidade1,
                                                                    pib1, nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) area1 + pontosTuristicos1;
            soma2 = (float) area2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1,
                                                        pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) area1 + densidade1;
            soma2 = (float) area2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1,
                                                                    densidade1, nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) area1 + ppCapita1;
            soma2 = (float) area2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1,
                                                                    ppCapita1, nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) area1 + superPoder1;
            soma2 = (float) area2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Área.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1, area1,
                                                                                nomeCidade2, area2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1,
                                                                    superPoder1, nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;
    
    case 3:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - Quantidade de Pontos Turísticos\n");
        printf("4 - Densidade Demográfica\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) pib1 + populacao1;
            soma2 = (float) pib2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) pib1 + area1;
            soma2 = (float) pib2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1,
                                                                    area1, nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) pib1 + pontosTuristicos1;
            soma2 = (float) pib2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1,
                                                        pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) pib1 + densidade1;
            soma2 = (float) pib2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1,
                                                                    densidade1, nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) pib1 + ppCapita1;
            soma2 = (float) pib2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1,
                                                                    ppCapita1, nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

        // Cálculo da soma dos atributos
            soma1 = (float) pib1 + superPoder1;
            soma2 = (float) pib2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1, pib1,
                                                                                nomeCidade2, pib2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1,
                                                                    superPoder1, nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;

    case 4:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Demográfica\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + populacao1;
            soma2 = (float) pontosTuristicos2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + area1;
            soma2 = (float) pontosTuristicos2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1,
                                                                    area1, nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + pib1;
            soma2 = (float) pontosTuristicos2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1,
                                                                    pib1, nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + densidade1;
            soma2 = (float) pontosTuristicos2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1,
                                                                    densidade1, nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + ppCapita1;
            soma2 = (float) pontosTuristicos2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1,
                                                                    ppCapita1, nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) pontosTuristicos1 + superPoder1;
            soma2 = (float) pontosTuristicos2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("%s tem %d Pontos Turísticos, e %s tem %.d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                            nomeCidade2, pontosTuristicos2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1,
                                                                    superPoder1, nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;
    
    case 5:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Quantidade de Pontos Turísticos\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + populacao1;
            soma2 = (float) densidade2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + area1;
            soma2 = (float) densidade2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1,
                                                                    area1, nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + pib1;
            soma2 = (float) densidade2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1,
                                                                    pib1, nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + pontosTuristicos1;
            soma2 = (float) densidade2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1,
                                                        pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + ppCapita1;
            soma2 = (float) densidade2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1,
                                                                    ppCapita1, nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) densidade1 + superPoder1;
            soma2 = (float) densidade2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("%s tem %.1f Hab/Km², e %s tem %.1f Hab/Km².\n", nomeCidade1, densidade1,
                                                                            nomeCidade2, densidade2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1,
                                                                    superPoder1, nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;

    case 6:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Quantidade de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Super Poder\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + populacao1;
            soma2 = (float) ppCapita2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + area1;
            soma2 = (float) ppCapita2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1,
                                                                    area1, nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + pib1;
            soma2 = (float) ppCapita2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1,
                                                                    pib1, nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + pontosTuristicos1;
            soma2 = (float) ppCapita2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1,
                                                        pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + densidade1;
            soma2 = (float) ppCapita2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1,
                                                                    densidade1, nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) ppCapita1 + superPoder1;
            soma2 = (float) ppCapita2 + superPoder2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O 2º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O PIB Per Capita de %s é R$ %.2f e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1, ppCapita1,
                                                                            nomeCidade2, ppCapita2);
            printf("O Super Poder de %s é %.2f pontos, e o Super Poder de %s é %.2f pontos.\n", nomeCidade1,
                                                                    superPoder1, nomeCidade2, superPoder2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;
        
    case 7:

        printf("\n");
        printf("Escolha o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Quantidade de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - PIB Per Capita\n");
        printf("\n");
        printf("Sua 2ª escolha é: \n");
        scanf("%d", &comparador2);

        switch (comparador2)
        {
        case 1:
            
            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + populacao1;
            soma2 = (float) superPoder2 + populacao2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi a População.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("A População de %s é %d pessoas, e a População de %s é %d pessoas.\n", nomeCidade1,
                                                                    populacao1, nomeCidade2, populacao2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 2:

            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + area1;
            soma2 = (float) superPoder2 + area2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi a Área.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("A Área de %s é %.2f Km², e a Área de %s é %.2f Km².\n", nomeCidade1,
                                                                    area1, nomeCidade2, area2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 3:

            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + pib1;
            soma2 = (float) superPoder2 + pib2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("O PIB de %s é R$ %.2f, e o PIB de %s é R$ %.2f.\n", nomeCidade1,
                                                                    pib1, nomeCidade2, pib2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 4:

            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + pontosTuristicos1;
            soma2 = (float) superPoder2 + pontosTuristicos2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1,
                                                                                     nomeCidade2, pontosTuristicos2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;

        case 5:

            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + densidade1;
            soma2 = (float) superPoder2 + densidade2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi a Densidade Demográfica.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("A Densidade Demográfica de %s é %.1f Hab/Km², e a Densidade Demográfica de %s é %.1f Hab/Km².\n", nomeCidade1,
                                                                    densidade1, nomeCidade2, densidade2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 < soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
        
        case 6:

            // Cálculo da soma dos atributos
            soma1 = (float) superPoder1 + ppCapita1;
            soma2 = (float) superPoder2 + ppCapita2;

            printf("As cidades competidoras são: %s e %s.\n", nomeCidade1, nomeCidade2);
            printf("O 1º atributo escolhido para a comparação foi o Super Poder.\n");
            printf("O 2º atributo escolhido para a comparação foi o PIB Per Capita.\n");
            printf("O Super Poder de %s é de %.2f pontos e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1,
                                                                            nomeCidade2, superPoder2);
            printf("O PIB Per Capita de %s é R$ %.2f, e o PIB Per Capita de %s é R$ %.2f.\n", nomeCidade1,
                                                                    ppCapita1, nomeCidade2, ppCapita2);
            printf("A soma dos atributos de %s é: %.2f\n", nomeCidade1, soma1);
            printf("A soma dos atributos de %s é %.2f\n", nomeCidade2, soma2);
            printf("\n");
            if(soma1 == soma2){
                printf("EMPATOU!");
            } else if(soma1 > soma2){
                printf("Carta 1 - %s VENCEU!\n", nomeCidade1);
            } else {
                printf("Carta 2 - %s VENCEU!\n", nomeCidade2);
            }
            printf("\n");

            break;
                    
        default:

            printf("Opção Inválida!\n");

            break;
        }

        break;

        // Fim do menu da escolha do segundo atributo.
    
        
        break;
    
    default:
    
        printf("Opção Inválida!\n");

        break;
        }   

    return 0;

}