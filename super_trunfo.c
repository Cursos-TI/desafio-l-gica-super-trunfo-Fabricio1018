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

    // Implementando o Menu Interativo para escolha do comparador.

    int comparador; // Variável criada para armazenar a escolha do jogador

    printf("Agora vamos comparar as cartas e verificar o vencedor.\n");
    printf("Escolha qual atributo será utilizado na comparação das cidades:\n");
    printf("\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Quantidade de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &comparador);

    switch (comparador)
    {
    case 1:

        printf("O atributo escolhido para a comparação foi a População.\n");
        printf("A População de %s é de %d habitantes, e a População de %s é de %d habitantes.\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
        if(populacao1 == populacao2){
            printf("EMPATE!\n");
        } else if(populacao1 > populacao2){
            printf("%s venceu pois sua População é maior!\n", nomeCidade1);
        } else {
            printf("%s venceu pois sua População é maior!\n", nomeCidade2);
        }
        
        break;
    
    case 2:

        printf("O atributo escolhido para a comparação foi a Área.\n");
        printf("A Área de %s é de %.2fKm², e a Área de %s é de %.2fKm²\n", nomeCidade1, area1, nomeCidade2, area2);
        if(area1 == area2){
            printf("EMPATE!\n");
        } else if(area1 > area2){
            printf("%s venceu pois sua Área é maior!\n", nomeCidade1);
        } else {
            printf("%s venceu pois sua Área é maior!\n", nomeCidade2);
        }
        
        break;
    
    case 3:

        printf("O atributo escolhido para a comparação foi o PIB.\n");
        printf("O PIB de %s é de R$ %.2f, e o PIB de %s é de R$ %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
        if(pib1 == pib2){
            printf("EMPATE!\n");
        } else if(pib1 > pib2){
            printf("%s venceu pois seu PIB é maior!\n", nomeCidade1);
        } else {
            printf("%s venceu pois seu PIB é maior!\n", nomeCidade2);
        }
        
        break;

    case 4:

        printf("O atributo escolhido para a comparação foi a quantidade de Pontos Turísticos.\n");
        printf("%s tem %d Pontos Turísticos, e %s tem %d Pontos Turísticos.\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
        if(pontosTuristicos1 == pontosTuristicos2){
            printf("EMPATE!\n");
        } else if(pontosTuristicos1 > pontosTuristicos2){
            printf("%s venceu pois tem mais Pontos Turísticos!\n", nomeCidade1);
        } else {
            printf("%s venceu pois tem mais Pontos Turísticos!\n", nomeCidade2);
        }
        
        break;
    
    case 5:

        printf("O atributo escolhido para a comparação foi a Densidade Demográfica.\n");
        printf("A Densidade Demográfica de %s é de %.1f Hab/Km², e a Densidade Demográfica de %s é de %.1f Hab/Km².\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
        if(densidade1 == densidade2){
            printf("EMPATE!\n");
        } else if(densidade1 < densidade2){
            printf("%s venceu pois sua Demográfica é menor!\n", nomeCidade1);
        } else {
            printf("%s venceu pois sua Demográfica é menor!\n", nomeCidade2);
        }
        
        break;

    case 6:

        printf("O atributo escolhido para a comparação foi o PIB Per Capita.\n");
        printf("O PIB Per Capita de %s é de R$ %.2f, e o PIB Per Capita de %s é de R$ %.2f\n", nomeCidade1, ppCapita1, nomeCidade2, ppCapita2);
        if(ppCapita1 == ppCapita2){
            printf("EMPATE!\n");
        } else if(ppCapita1 > ppCapita2){
            printf("%s venceu pois seu PIB Per Capita é maior!\n", nomeCidade1);
        } else {
            printf("%s venceu pois seu PIB Per Capita é maior!\n", nomeCidade2);
        }
        
        break;
        
    case 7:

        printf("O atributo escolhido para a comparação foi o Super Poder.\n");
        printf("O Super Poder de %s é de %.2f pontos, e o Super Poder de %s é de %.2f pontos.\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
        if(superPoder1 == superPoder2){
            printf("EMPATE!\n");
        } else if(superPoder1 > superPoder2){
            printf("%s venceu pois seu Super Poder é maior!\n", nomeCidade1);
        } else {
            printf("%s venceu pois seu Super Poder é maior!\n", nomeCidade2);
        }
        
        break;
    
    default:
    
        printf("Opção Inválida!\n");

        break;
        }


    return 0;

}