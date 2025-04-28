#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;                     // Letra do estado
    char codigo1[50];                 // Código da carta
    char cidade1[50];                 // Nome da cidade
    int populacao1;                   // População da cidade
    float area1;                      // Área em km²
    float pib1;                       // PIB da cidade
    int pontosTuristicos1;            // Número de pontos turísticos

    // Variáveis da Carta 2
    char estado2;                     // Letra do estado
    char codigo2[50];                 // Código da carta
    char cidade2[50];                 // Nome da cidade
    int populacao2;                   // População da cidade
    float area2;                      // Área em km²
    float pib2;                       // PIB da cidade
    int pontosTuristicos2;            // Número de pontos turísticos

    // Cadastro da Carta 1
    printf("- Cadastro da Carta 1 -\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &estado1);           // Lê o caractere, ignorando espaços anteriores

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);             // Lê o código (string)

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade1);        // Lê a cidade

    printf("Digite a População: \n");
    scanf("%d", &populacao1);         // Lê a população

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
    scanf("%d", &populacao2);         // Lê a população

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);              // Lê a área

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);               // Lê o PIB

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);  // Lê os pontos turísticos

    // Exibe os dados da Carta
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);                      // Mostra estado
    printf("Código: %s\n", codigo1);                      // Mostra código
    printf("Nome da Cidade: %s\n", cidade1);              // Mostra cidade
    printf("População: %d\n", populacao1);                // Mostra população
    printf("Área: %.2f km²\n", area1);                    // Mostra área
    printf("PIB: %.2f bilhões de reais\n", pib1);         // Mostra PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);  // Mostra pontos turísticos

    // Exibe os dados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);                      // Mostra estado
    printf("Código: %s\n", codigo2);                      // Mostra código
    printf("Nome da Cidade: %s\n", cidade2);              // Mostra cidade
    printf("População: %d\n", populacao2);                // Mostra população
    printf("Área: %.2f km²\n", area2);                    // Mostra área
    printf("PIB: %.2f bilhões de reais\n", pib2);         // Mostra PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);  // Mostra pontos turísticos

    return 0; // Fim do programa
}
