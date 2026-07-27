#include <stdio.h>

int main() {
    // VARIÁVEIS DA CARTA 1
    char estado1;
    char codigo1[10];     // Armazena o código (ex: A01)
    char cidade1[50];     // Armazena o nome da cidade (digitar sem espaços, ex: Sao_Paulo)
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // VARIÁVEIS DA CARTA 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // --- LEITURA DA CARTA 1 ---
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade 1 (use _ para espacos, ex: Sao_Paulo): ");
    scanf("%s", cidade1);
    
    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area da cidade 1: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos 1: ");
    scanf("%d", &pontos1);

    // --- LEITURA DA CARTA 2 ---
    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade 2 (use _ para espacos, ex: Rio_de_Janeiro): ");
    scanf("%s", cidade2);
    
    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area da cidade 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos 2: ");
    scanf("%d", &pontos2);

    // --- EXIBICAO DOS DADOS ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
