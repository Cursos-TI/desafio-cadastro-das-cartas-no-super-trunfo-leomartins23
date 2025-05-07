#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;                     // Letra do estado
    char codigo1[50];                 // Código da carta
    char cidade1[50];                 // Nome da cidade
    unsigned long int populacao1;     // População da cidade (para valores grandes)
    float area1;                      // Área em km²
    float pib1;                       // PIB da cidade
    int pontosTuristicos1;            // Número de pontos turísticos
    float densidade1;                 // Densidade Populacional
    float pibcapita1;                 // PIB per Capita
    float superpoder1;                // Super Poder 


    // Variáveis da Carta 2
    char estado2;                     // Letra do estado
    char codigo2[50];                 // Código da carta
    char cidade2[50];                 // Nome da cidade
    unsigned long int populacao2;     // População da cidade
    float area2;                      // Área em km²
    float pib2;                       // PIB da cidade
    int pontosTuristicos2;            // Número de pontos turísticos
    float densidade2;                 // Densidade Populacional
    float pibcapita2;                 // PIB per Capita
    float superpoder2;                // Super Poder 


    // Cadastro da Carta 1
    printf("- Cadastro da Carta 1 -\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &estado1);           // Lê o caractere, ignorando espaços anteriores

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);             // Lê o código (string)

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade1);        // Lê a cidade

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);         // Lê a população

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);              // Lê a área

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);               // Lê o PIB

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);  // Lê os pontos turísticos

    // Cadastro da Carta 2
    printf("\n- Cadastro da Carta 2 -\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &estado2);           // Lê o estado

    printf("Digite o Código da Carta (ex: B02): \n");
    scanf("%s", codigo2);             // Lê o código

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade2);        // Lê a cidade
    
    printf("Digite a População: \n");
    scanf("%lu", &populacao2);         // Lê a população

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);              // Lê a área

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);               // Lê o PIB

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);  // Lê os pontos turísticos

    // Calculos Carta 1

    densidade1 = (float)populacao1 / area1;

    pibcapita1 = pib1 / (float)populacao1;

    superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 
    + pibcapita1 + (1.0f / densidade1);

    // Carta 2

    densidade2 = (float)populacao2 / area2;

    pibcapita2 = pib2 / (float)populacao2;

    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 
    + pibcapita2 + (1.0f / densidade2);

    // Exibe os dados da Carta
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);                      // Mostra estado
    printf("Código: %s\n", codigo1);                      // Mostra código
    printf("Nome da Cidade: %s\n", cidade1);              // Mostra cidade
    printf("População: %lu\n", populacao1);               // Mostra população
    printf("Área: %.2f km²\n", area1);                    // Mostra área
    printf("PIB: %.2f bilhões de reais\n", pib1);         // Mostra PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);  // Mostra pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões por hab.\n", pibcapita1);
    printf("Super Poder: %f\n", superpoder1);

    // Exibe os dados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);                      // Mostra estado
    printf("Código: %s\n", codigo2);                      // Mostra código
    printf("Nome da Cidade: %s\n", cidade2);              // Mostra cidade
    printf("População: %lu\n", populacao2);               // Mostra população
    printf("Área: %.2f km²\n", area2);                    // Mostra área
    printf("PIB: %.2f bilhões de reais\n", pib2);         // Mostra PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);  // Mostra pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões por hab.\n", pibcapita2);
    printf("Super Poder: %.6f\n", superpoder2);

    // Comparações

    int comp_pop = populacao1 > populacao2; // maior população

    int comp_area = area1 > area2; // maior área

    int comp_pib = pib1 > pib2; // maior PIB

    int comp_pon = pontosTuristicos1 > pontosTuristicos2; // mais pontos turísticos

    int comp_dens = densidade1 < densidade2; // menor densidade vence
 
    int comp_cap = pibcapita1 > pibcapita2; // maior PIB per capita

    int comp_sup = superpoder1 > superpoder2; // maior Super Poder

    // Exibe as comparações

    printf("\n***Comparação das Cartas***\n");
   
    printf("População: %s (%d)\n", cidade1, comp_pop);
    
    printf("Área: %s (%d)\n", cidade1, comp_area);

    printf("PIB: %s (%d)\n", cidade1, comp_pib);

    printf("Pontos Turísticos: %s (%d)\n", cidade1, comp_pon);

    printf("Densidade Populacional: %s (%d)\n", cidade1, comp_dens);

    printf("PIB per Capita: %s (%d)\n", cidade1, comp_cap);

    printf("Super Poder: %s (%d)\n", cidade1, comp_sup);

    return 0; // Fim do programa
}
