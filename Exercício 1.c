/*
Exercício 1
O Açougue (Controle de Estoque Contínuo)
Um açougue vende carnes com a seguinte tabela de descontos baseada no peso. O programa deve ler os pedidos
continuamente usando a estrutura while e parar apenas quando o usuário digitar um peso igual ou menor que 0.
*/

#include <stdio.h>

int main(void) {
    char tipo;
    float peso, preco_kg, valor_total, valor_desconto, valor_final;
    float total_dia = 0;
    int cliente_num = 1;

    printf("=== CONTROLE DE ESTOQUE - AÇOUGUE ===\n");

    while (1) {
        printf("\n=================================");
        printf("\n--- Atendimento do Cliente %d ---\n", cliente_num);

        printf("Digite o peso da carne em kg (0 ou menor para encerrar): ");
        scanf("%f", &peso);

        if (peso <= 0) {
            printf("\nEncerrando os atendimentos do dia...\n");
            break;
        }

        printf("Digite o tipo de carne (B - Bovino, F - Frango): ");
        scanf(" %c", &tipo);

        printf("Digite o preco por kg: R$ ");
        scanf("%f", &preco_kg);

        valor_total = peso * preco_kg;
        valor_desconto = 0;

        if (tipo == 'B' || tipo == 'b') {
            if (peso <= 5) {
                valor_desconto = valor_total * 0.03; // 3%
            } else {
                valor_desconto = valor_total * 0.05; // 5%
            }
        } else if (tipo == 'F' || tipo == 'f') {
            if (peso <= 5) {
                valor_desconto = valor_total * 0.02; // 2%
            } else {
                valor_desconto = valor_total * 0.04; // 4%
            }
        } else {
            printf("Erro: Tipo de carne invalido! Pulando atendimento.\n");
            continue; // Pula o resto da iteração e volta ao início do while
        }

        valor_final = valor_total - valor_desconto;
        total_dia += valor_final;

        printf("\n--- Cupom Fiscal (Cliente %d) ---\n", cliente_num);
        if (tipo == 'B' || tipo == 'b') {
            printf("Tipo: Bovino\n");
        } else {
            printf("Tipo: Frango\n");
        }
        printf("Peso: %.2f kg\n", peso);
        printf("Valor original: R$ %.2f\n", valor_total);
        printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
        printf("Valor a pagar: R$ %.2f\n", valor_final);

        cliente_num++;
    }

    printf("\n=================================");
    printf("\n=== RESUMO DO DIA ===");
    printf("\nTotal de clientes atendidos: %d", cliente_num - 1);
    printf("\nTotal arrecadado no dia: R$ %.2f\n", total_dia);

    return 0;
}