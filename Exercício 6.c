/*
Exercício 6
Feira de Frutas (Controle Diário)
Um atacadista vende caixas de frutas. O sistema deve registrar 5 transações utilizando o laço for.
*/

#include <stdio.h>

int main(void) {
    char fruta;
    int caixas;
    float preco_caixa, valor_venda;
    float faturamento_total = 0.0;

    printf("=== FEIRA DE FRUTAS - CONTROLE DIÁRIO ===\n");

    for (int i = 1; i <= 5; i++) {
        printf("\n=================================");
        printf("\n--- Transação %d de 5 ---\n", i);

        while (1) {
            printf("Digite o tipo de fruta (M - Maça, U - Uva): ");
            scanf(" %c", &fruta);

            if (fruta == 'M' || fruta == 'm' || fruta == 'U' || fruta == 'u') {
                break;
            }
            printf("Erro: Fruta invalida! Digite apenas M ou U.\n");
        }

        printf("Digite a quantidade de caixas: ");
        scanf("%d", &caixas);

        preco_caixa = 0.0;

        switch (fruta) {
            case 'M':
            case 'm':
                if (caixas <= 10) {
                    preco_caixa = 50.00;
                } else {
                    preco_caixa = 45.00;
                }
                break;

            case 'U':
            case 'u':
                if (caixas <= 10) {
                    preco_caixa = 80.00;
                } else {
                    preco_caixa = 70.00;
                }
                break;
        }

        valor_venda = caixas * preco_caixa;
        faturamento_total += valor_venda;

        printf("\n--- Resumo da Transacao %d ---\n", i);
        if (fruta == 'M' || fruta == 'm') {
            printf("Fruta: Maça\n");
        } else {
            printf("Fruta: Uva\n");
        }
        printf("Quantidade: %d caixas\n", caixas);
        printf("Preço por caixa: R$ %.2f\n", preco_caixa);
        printf("Valor a pagar: R$ %.2f\n", valor_venda);
    }

    printf("\n=================================");
    printf("\n=== RESUMO DO DIA ===");
    printf("\nFaturamento total das 5 vendas: R$ %.2f\n", faturamento_total);

    return 0;
}