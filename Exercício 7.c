/*
Exercício 7
Fast Food (Menu de Combos)
Crie um programa onde o usuário digita o número do combo (1, 2 ou 3). Use switch case para avaliar o combo escolhido e
calcular o preço final com base na quantidade pedida.
*/

#include <stdio.h>

int main(void) {
    int combo, quantidade;
    float preco_unitario = 0.0, valor_total = 0.0;

    printf("=== FAST FOOD - MENU DE COMBOS ===\n");
    printf("1 - Combo Hamburguer\n");
    printf("2 - Combo Pizza\n");
    printf("3 - Combo Salada\n");
    printf("===================================\n");

    printf("Digite o numero do combo (1, 2 ou 3): ");
    scanf("%d", &combo);

    switch (combo) {
        case 1:
            printf("Digite a quantidade de hamburgueres: ");
            scanf("%d", &quantidade);

            if (quantidade <= 2) {
                preco_unitario = 30.00;
            } else {
                preco_unitario = 25.00;
            }

            valor_total = quantidade * preco_unitario;

            printf("\n--- Resumo do Pedido ---\n");
            printf("Item: Combo Hamburguer\n");
            printf("Quantidade: %d\n", quantidade);
            printf("Preco unitario: R$ %.2f\n", preco_unitario);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        case 2:
            printf("Digite a quantidade de pizzas: ");
            scanf("%d", &quantidade);

            if (quantidade <= 2) {
                preco_unitario = 40.00;
            } else {
                preco_unitario = 35.00;
            }

            valor_total = quantidade * preco_unitario;

            printf("\n--- Resumo do Pedido ---\n");
            printf("Item: Combo Pizza\n");
            printf("Quantidade: %d\n", quantidade);
            printf("Preco unitario: R$ %.2f\n", preco_unitario);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        case 3:
            printf("Digite a quantidade de saladas: ");
            scanf("%d", &quantidade);

            if (quantidade <= 2) {
                preco_unitario = 20.00;
            } else {
                preco_unitario = 15.00;
            }

            valor_total = quantidade * preco_unitario;

            printf("\n--- Resumo do Pedido ---\n");
            printf("Item: Combo Salada\n");
            printf("Quantidade: %d\n", quantidade);
            printf("Preco unitario: R$ %.2f\n", preco_unitario);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        default:
            printf("\nErro: Codigo de combo invalido! Escolha entre 1, 2 ou 3.\n");
            break;
    }

    return 0;
}