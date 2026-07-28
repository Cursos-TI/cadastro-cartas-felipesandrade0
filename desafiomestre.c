#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // Conforme o requisito: unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // Conforme o requisito: unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- VARIÁVEIS DE COMPARAÇÃO (1 para Carta 1 vence, 0 para Carta 2 vence) ---
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    // ================= LEITURA DA CARTA 1 =================
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ================= CÁLCULOS DA CARTA 1 =================
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    
    // Super Poder: Soma de todos os atributos numéricos (incluindo o inverso da densidade)
    // O cast explícito (float) garante a conversão correta de tipos na soma
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // ================= LEITURA DA CARTA 2 =================
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ================= CÁLCULOS DA CARTA 2 =================
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // Super Poder da Carta 2
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // ================= LÓGICA DE COMPARAÇÃO =================
    // Para a maioria dos atributos, ganha quem tem o maior valor (>)
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // Regra especial: para Densidade Populacional, ganha quem tem o MENOR valor (<)
    resultadoDensidade = densidadePopulacional1 < densidadePopulacional2;

    // ================= EXIBIÇÃO DOS RESULTADOS =================
    printf("\nComparação de Cartas:\n");
    
    // Exibição condicional simulada apenas pelo resultado do operador relacional
    printf("População: %s (%d)\n", resultadoPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPopulacao);
    printf("Área: %s (%d)\n", resultadoArea ? "Carta 1 venceu" : "Carta 2 venceu", resultadoArea);
    printf("PIB: %s (%d)\n", resultadoPib ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPib);
    printf("Pontos Turísticos: %s (%d)\n", resultadoPontosTuristicos ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPontosTuristicos);
    printf("Densidade Populacional: %s (%d)\n", resultadoDensidade ? "Carta 1 venceu" : "Carta 2 venceu", resultadoDensidade);
    printf("PIB per Capita: %s (%d)\n", resultadoPibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPibPerCapita);
    printf("Super Poder: %s (%d)\n", resultadoSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu", resultadoSuperPoder);

    return 0;
}