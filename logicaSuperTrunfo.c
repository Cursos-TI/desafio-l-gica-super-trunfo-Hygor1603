#include <stdio.h>

int main() {
    char codigo[4]; // Código da cidade (exemplo: A01, A02)
    char nome[50]; // Nome da cidade
    char estado[3]; // Estado da cidade (exemplo: SP, RJ)
    int populacao;
    float area, pib;
    int pontos_turisticos;
    char continuar; // Variável para perguntar se o usuário quer cadastrar outra cidade
    
    // Variáveis para armazenar os dados das duas cidades
    char codigo1[4], nome1[50], estado1[3];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    char codigo2[4], nome2[50], estado2[3];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    
    do {
        // Cadastro da primeira cidade
        printf("Cadastro da primeira cidade:\n");
        printf("Digite o código da cidade (exemplo: A01): ");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]%*c", nome1); // Leitura com espaços
        printf("Digite o estado da cidade (exemplo: SP): ");
        scanf("%s", estado1);
        printf("Digite a população da cidade: ");
        scanf("%d", &populacao1);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB da cidade (em bilhões de R$): ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos1);

        printf("\nDados cadastrados da primeira cidade:\n");
        printf("Código: %s\n", codigo1);
        printf("Nome: %s\n", nome1);
        printf("Estado: %s\n", estado1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$%.2f bilhões\n", pib1);
        printf("Pontos turísticos: %d\n", pontos_turisticos1);
        printf("-------------------------------\n");

        // Pergunta se o usuário quer cadastrar uma segunda cidade
        printf("Deseja cadastrar uma segunda cidade? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c é para limpar o buffer

        if (continuar == 's' || continuar == 'S') {
            // Cadastro da segunda cidade
            printf("Cadastro da segunda cidade:\n");
            printf("Digite o código da cidade (exemplo: B02): ");
            scanf("%s", codigo2);
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]%*c", nome2); // Leitura com espaços
            printf("Digite o estado da cidade (exemplo: SP): ");
            scanf("%s", estado2);
            printf("Digite a população da cidade: ");
            scanf("%d", &populacao2);
            printf("Digite a área da cidade (em km²): ");
            scanf("%f", &area2);
            printf("Digite o PIB da cidade (em bilhões de R$): ");
            scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos da cidade: ");
            scanf("%d", &pontos_turisticos2);

            printf("\nDados cadastrados da segunda cidade:\n");
            printf("Código: %s\n", codigo2);
            printf("Nome: %s\n", nome2);
            printf("Estado: %s\n", estado2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$%.2f bilhões\n", pib2);
            printf("Pontos turísticos: %d\n", pontos_turisticos2);
            printf("-------------------------------\n");
        }

        // Pergunta se o usuário deseja cadastrar mais cidades
        printf("Deseja cadastrar mais cidades? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c é para limpar o buffer

    } while (continuar == 's' || continuar == 'S');

    // Se o usuário cadastrou pelo menos 2 cidades, faz a comparação
    if (continuar == 'n' || continuar == 'N') {
        int escolha;
        printf("\nEscolha o critério de comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("Digite o número do critério escolhido: ");
        scanf("%d", &escolha);

        if (escolha == 1) { // Comparação pela população
            if (populacao1 > populacao2) {
                printf("A cidade 1 venceu pela população.\n");
            } else if (populacao1 < populacao2) {
                printf("A cidade 2 venceu pela população.\n");
            } else {
                printf("As cidades têm a mesma população.\n");
            }
        } else if (escolha == 2) { // Comparação pela área
            if (area1 > area2) {
                printf("A cidade 1 venceu pela área.\n");
            } else if (area1 < area2) {
                printf("A cidade 2 venceu pela área.\n");
            } else {
                printf("As cidades têm a mesma área.\n");
            }
        } else if (escolha == 3) { // Comparação pelo PIB
            if (pib1 > pib2) {
                printf("A cidade 1 venceu pelo PIB.\n");
            } else if (pib1 < pib2) {
                printf("A cidade 2 venceu pelo PIB.\n");
            } else {
                printf("As cidades têm o mesmo PIB.\n");
            }
        } else if (escolha == 4) { // Comparação pelos pontos turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("A cidade 1 venceu pelos pontos turísticos.\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("A cidade 2 venceu pelos pontos turísticos.\n");
            } else {
                printf("As cidades têm o mesmo número de pontos turísticos.\n");
            }
        } else {
            printf("Critério de comparação inválido.\n");
        }
    }

    return 0;
}