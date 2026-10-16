/*
Exercício 3
Gráfica Rápida (Impressões em Lote)
Uma gráfica cobra pelas cópias dependendo da cor e da quantidade. Use um loop while que continue solicitando
trabalhos de impressão até que o usuário informe uma quantidade de páginas igual a 0.
*/

#include <stdio.h>

int main(void) {
    int paginas;
    char cor;
    float custo_base, valor_total, valor_desconto, valor_final;
    int trabalho_num = 1;

    printf("=== GRÁFICA RÁPIDA - IMPRESSÕES EM LOTE ===\n");

    while (1) {
        printf("\n=================================");
        printf("\n--- Trabalho de Impressao %d ---\n", trabalho_num);

        printf("Digite a quantidade de paginas (0 para sair): ");
        scanf("%d", &paginas);

        if (paginas == 0) {
            printf("\nEncerrando o programa...\n");
            break;
        }

        printf("Digite o custo base por pagina: R$ ");
        scanf("%f", &custo_base);

        printf("Digite a cor (P - Preto e Branco, C - Colorida): ");
        scanf(" %c", &cor);

        valor_total = paginas * custo_base;
        valor_desconto = 0;

        if (cor == 'P' || cor == 'p') {
            if (paginas <= 100) {
                valor_desconto = valor_total * 0.05;
            } else {
                valor_desconto = valor_total * 0.10;
            }
        } else if (cor == 'C' || cor == 'c') {
            if (paginas <= 100) {
                valor_desconto = 0;
            } else {
                valor_desconto = valor_total * 0.08;
            }
        } else {
            printf("Erro: Cor invalida! Tente novamente.\n");
            continue;
        }

        valor_final = valor_total - valor_desconto;

        printf("\n--- Orcamento (Trabalho %d) ---\n", trabalho_num);
        if (cor == 'P' || cor == 'p') {
            printf("Tipo: Preto e Branco\n");
        } else {
            printf("Tipo: Colorida\n");
        }
        printf("Quantidade: %d paginas\n", paginas);
        printf("Valor original: R$ %.2f\n", valor_total);
        printf("Desconto aplicado: R$ %.2f\n", valor_desconto);
        printf("Valor final a pagar: R$ %.2f\n", valor_final);

        trabalho_num++;
    }

    return 0;
}