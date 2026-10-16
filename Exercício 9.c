/*
Exercício 9
Academia (Planos de Fidelidade)
A academia possui três modalidades (B - Básico, P - Pro, M - Master). Use switch case para aplicar os descontos com base
nos meses de fidelidade fechados no contrato.
*/

#include <stdio.h>

int main(void) {
    char plano;
    int meses;
    float mensalidade_base = 0.0, desconto_percentual = 0.0;
    float mensalidade_ajustada = 0.0, valor_total_contrato = 0.0;

    printf("=== ACADEMIA - PLANOS DE FIDELIDADE ===\n");
    printf("B - Basico (R$ 80,00/mes)\n");
    printf("P - Pro (R$ 120,00/mes)\n");
    printf("M - Master (R$ 200,00/mes)\n");
    printf("=======================================\n");

    printf("Digite o plano desejado (B, P ou M): ");
    scanf(" %c", &plano);

    switch (plano) {
        case 'b':
        case 'B':
            printf("Digite a quantidade de meses do contrato: ");
            scanf("%d", &meses);

            mensalidade_base = 80.00;
            if (meses > 6) {
                desconto_percentual = 0.05; // 5%
            } else {
                desconto_percentual = 0.0;
            }

            mensalidade_ajustada = mensalidade_base * (1.0 - desconto_percentual);
            valor_total_contrato = mensalidade_ajustada * meses;

            printf("\n--- Resumo do Contrato ---\n");
            printf("Plano: Basico\n");
            printf("Duracao: %d meses\n", meses);
            printf("Mensalidade base: R$ %.2f\n", mensalidade_base);
            printf("Mensalidade ajustada: R$ %.2f\n", mensalidade_ajustada);
            printf("Valor total do contrato: R$ %.2f\n", valor_total_contrato);
            break;

        case 'p':
        case 'P':
            printf("Digite a quantidade de meses do contrato: ");
            scanf("%d", &meses);

            mensalidade_base = 120.00;
            if (meses > 6) {
                desconto_percentual = 0.10; // 10%
            } else {
                desconto_percentual = 0.0;
            }

            mensalidade_ajustada = mensalidade_base * (1.0 - desconto_percentual);
            valor_total_contrato = mensalidade_ajustada * meses;

            printf("\n--- Resumo do Contrato ---\n");
            printf("Plano: Pro\n");
            printf("Duracao: %d meses\n", meses);
            printf("Mensalidade base: R$ %.2f\n", mensalidade_base);
            printf("Mensalidade ajustada: R$ %.2f\n", mensalidade_ajustada);
            printf("Valor total do contrato: R$ %.2f\n", valor_total_contrato);
            break;

        case 'm':
        case 'M':
            printf("Digite a quantidade de meses do contrato: ");
            scanf("%d", &meses);

            mensalidade_base = 200.00;
            if (meses > 6) {
                desconto_percentual = 0.15; // 15%
            } else {
                desconto_percentual = 0.0;
            }

            mensalidade_ajustada = mensalidade_base * (1.0 - desconto_percentual);
            valor_total_contrato = mensalidade_ajustada * meses;

            printf("\n--- Resumo do Contrato ---\n");
            printf("Plano: Master\n");
            printf("Duracao: %d meses\n", meses);
            printf("Mensalidade base: R$ %.2f\n", mensalidade_base);
            printf("Mensalidade ajustada: R$ %.2f\n", mensalidade_ajustada);
            printf("Valor total do contrato: R$ %.2f\n", valor_total_contrato);
            break;

        default:
            printf("\nErro: Plano invalido! Escolha entre B, P ou M.\n");
            break;
    }

    return 0;
}