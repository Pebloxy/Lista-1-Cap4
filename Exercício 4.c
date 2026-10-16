/*
Exercício 4
Bilheteria de Cinema (Lote Fechado)
Um cinema está vendendo ingressos promocionais. O gerente deseja registrar as vendas de exatamente 10 grupos de
clientes. Utilize a estrutura for para iterar essas 10 vezes.
*/

#include <stdio.h>

int main(void) {
    int ingressos;
    char dia;
    float preco_ingresso, valor_total, valor_desconto, valor_final;

    printf("=== BILHETERIA DE CINEMA - LOTE FECHADO ===\n");

    for (int grupo = 1; grupo <= 10; grupo++) {
        printf("\n=================================");
        printf("\n--- Atendimento do Grupo %d de 10 ---\n", grupo);

        // Loop de validação para garantir um tipo de dia válido
        while (1) {
            printf("Digite o tipo de dia (S - Dia de Semana, F - Fim de Semana): ");
            scanf(" %c", &dia);

            if (dia == 'S' || dia == 's' || dia == 'F' || dia == 'f') {
                break; // Entrada válida, sai do loop de validação
            }
            printf("Erro: Dia invalido! Digite apenas S ou F.\n");
        }

        printf("Digite a quantidade de ingressos: ");
        scanf("%d", &ingressos);

        printf("Digite o preco unitario do ingresso: R$ ");
        scanf("%f", &preco_ingresso);

        valor_total = ingressos * preco_ingresso;
        valor_desconto = 0;

        if (dia == 'S' || dia == 's') {
            if (ingressos <= 3) {
                valor_desconto = valor_total * 0.10;
            } else {
                valor_desconto = valor_total * 0.20;
            }
        }
        else if (dia == 'F' || dia == 'f') {
            if (ingressos <= 3) {
                valor_desconto = 0;
            } else {
                valor_desconto = valor_total * 0.10;
            }
        }

        valor_final = valor_total - valor_desconto;

        printf("\n--- Resumo do Grupo %d ---\n", grupo);
        if (dia == 'S' || dia == 's') {
            printf("Dia: Semana\n");
        } else {
            printf("Dia: Fim de Semana\n");
        }
        printf("Quantidade de ingressos: %d\n", ingressos);
        printf("Valor original: R$ %.2f\n", valor_total);
        printf("Valor economizado (Desconto): R$ %.2f\n", valor_desconto);
        printf("Valor final a pagar: R$ %.2f\n", valor_final);
    }

    printf("\n=================================");
    printf("\nTodos os 10 atendimentos foram concluidos!\n");

    return 0;
}