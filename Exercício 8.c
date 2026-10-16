/*
Exercício 8
Pousada (Diárias e Hospedagem)
Um hotel calcula as estadias de acordo com a categoria do quarto (S, L, P). Avalie a letra digitada usando switch case.
*/

#include <stdio.h>

int main(void) {
    char categoria;
    int dias;
    float preco_diaria = 0.0, valor_total = 0.0, valor_desconto = 0.0, valor_final = 0.0;

    printf("=== POUSADA - DIÁRIAS E HOSPEDAGEM ===\n");
    printf("S - Standard (R$ 150,00/dia)\n");
    printf("L - Luxo (R$ 300,00/dia)\n");
    printf("P - Premium (R$ 500,00/dia)\n");
    printf("======================================\n");

    printf("Digite a categoria do quarto (S, L ou P): ");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 's':
        case 'S':
            printf("Digite a quantidade de dias de hospedagem: ");
            scanf("%d", &dias);

            preco_diaria = 150.00;
            valor_total = dias * preco_diaria;

            if (dias > 5) {
                valor_desconto = valor_total * 0.10;
            } else {
                valor_desconto = 0.0;
            }

            valor_final = valor_total - valor_desconto;

            printf("\n--- Resumo da Hospedagem ---\n");
            printf("Categoria: Standard\n");
            printf("Quantidade de dias: %d\n", dias);
            printf("Valor da diaria: R$ %.2f\n", preco_diaria);
            printf("Valor total bruto: R$ %.2f\n", valor_total);
            printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            break;

        case 'l':
        case 'L':
            printf("Digite a quantidade de dias de hospedagem: ");
            scanf("%d", &dias);

            preco_diaria = 300.00;
            valor_total = dias * preco_diaria;

            if (dias > 5) {
                valor_desconto = valor_total * 0.15;
            } else {
                valor_desconto = 0.0;
            }

            valor_final = valor_total - valor_desconto;

            printf("\n--- Resumo da Hospedagem ---\n");
            printf("Categoria: Luxo\n");
            printf("Quantidade de dias: %d\n", dias);
            printf("Valor da diaria: R$ %.2f\n", preco_diaria);
            printf("Valor total bruto: R$ %.2f\n", valor_total);
            printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            break;

        case 'p':
        case 'P':
            printf("Digite a quantidade de dias de hospedagem: ");
            scanf("%d", &dias);

            preco_diaria = 500.00;
            valor_total = dias * preco_diaria;

            if (dias > 5) {
                valor_desconto = valor_total * 0.20;
            } else {
                valor_desconto = 0.0;
            }

            valor_final = valor_total - valor_desconto;

            printf("\n--- Resumo da Hospedagem ---\n");
            printf("Categoria: Premium\n");
            printf("Quantidade de dias: %d\n", dias);
            printf("Valor da diaria: R$ %.2f\n", preco_diaria);
            printf("Valor total bruto: R$ %.2f\n", valor_total);
            printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            break;

        default:
            printf("\nErro: Categoria invalida! Escolha entre S, L ou P.\n");
            break;
    }

    return 0;
}