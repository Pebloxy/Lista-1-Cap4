/*
Exercício 2
Loja de Informática (Caixa Registradora)
Uma loja oferece descontos baseados no tipo de cliente. O programa deve rodar em um loop while aguardando novos
clientes até que o operador de caixa digite X para o tipo de cliente, encerrando o programa.
*/

#include <stdio.h>

int main(void) {
    char tipo;
    float valor_compra, valor_desconto, valor_final;
    int cliente_num = 1;

    printf("=== CAIXA REGISTRADORA - LOJA DE INFORMÁTICA ===\n");

    while (1) {
        printf("\n=================================");
        printf("\n--- Atendimento do Cliente %d ---\n", cliente_num);

        printf("Digite o tipo de cliente (V - VIP, C - Comum, X - Sair): ");
        scanf(" %c", &tipo);

        if (tipo == 'X' || tipo == 'x') {
            printf("\nEncerrando o programa...\n");
            break;
        }

        if (tipo == 'V' || tipo == 'v' || tipo == 'C' || tipo == 'c') {
            printf("Digite o valor total da compra: R$ ");
            scanf("%f", &valor_compra);

            valor_desconto = 0;

            if (tipo == 'V' || tipo == 'v') {
                if (valor_compra <= 1000.00) {
                    valor_desconto = valor_compra * 0.10;
                } else {
                    valor_desconto = valor_compra * 0.15;
                }
            }
            else if (tipo == 'C' || tipo == 'c') {
                if (valor_compra <= 1000.00) {
                    valor_desconto = 0;
                } else {
                    valor_desconto = valor_compra * 0.05;
                }
            }

            valor_final = valor_compra - valor_desconto;

            printf("\n--- Cupom Fiscal (Cliente %d) ---\n", cliente_num);
            if (tipo == 'V' || tipo == 'v') {
                printf("Categoria: Cliente VIP\n");
            } else {
                printf("Categoria: Cliente Comum\n");
            }
            printf("Valor bruto: R$ %.2f\n", valor_compra);
            printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
            printf("Valor final a pagar: R$ %.2f\n", valor_final);

            cliente_num++;
        } 
        else {
            printf("Erro: Tipo de cliente invalido! Tente novamente.\n");
            continue;
        }
    }

    return 0;
}