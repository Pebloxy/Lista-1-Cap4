/*
Exercício 5
Transportadora (Cálculo de Frotas)
Uma transportadora calcula taxas de frete baseadas na distância e urgência. Pergunte ao usuário "Quantos pacotes serão
enviados hoje?" e utilize um for para repetir a leitura dos dados para essa quantidade exata.
*/

#include <stdio.h>

int main(void) {
    int pacotes;
    float distancia, tarifa_base, acrescimo, valor_final;
    char tipo;

    printf("=== TRANSPORTADORA - CÁLCULO DE FROTAS ===\n");
    printf("Quantos pacotes serao enviados hoje? ");
    scanf("%d", &pacotes);

    for (int i = 1; i <= pacotes; i++) {
        printf("\n=================================");
        printf("\n--- Envio do Pacote %d de %d ---\n", i, pacotes);

        // Loop de validação do tipo de frete
        while (1) {
            printf("Digite o tipo de frete (N - Normal, E - Expresso): ");
            scanf(" %c", &tipo);

            if (tipo == 'N' || tipo == 'n' || tipo == 'E' || tipo == 'e') {
                break;
            }
            printf("Erro: Tipo invalido! Digite apenas N ou E.\n");
        }

        printf("Digite a distancia (em km): ");
        scanf("%f", &distancia);

        printf("Digite a tarifa base do frete: R$ ");
        scanf("%f", &tarifa_base);

        acrescimo = 0;

        // Frete Normal (N)
        if (tipo == 'N' || tipo == 'n') {
            if (distancia <= 100) {
                acrescimo = 0; // Tarifa base sem alteração
            } else {
                acrescimo = tarifa_base * 0.05; // 5%
            }
        }
        // Frete Expresso (E)
        else if (tipo == 'E' || tipo == 'e') {
            if (distancia <= 100) {
                acrescimo = tarifa_base * 0.10; // 10%
            } else {
                acrescimo = tarifa_base * 0.15; // 15%
            }
        }

        valor_final = tarifa_base + acrescimo;

        printf("\n--- Resumo do Envio (Pacote %d) ---\n", i);
        if (tipo == 'N' || tipo == 'n') {
            printf("Tipo: Frete Normal\n");
        } else {
            printf("Tipo: Frete Expresso\n");
        }
        printf("Distancia: %.2f km\n", distancia);
        printf("Tarifa base: R$ %.2f\n", tarifa_base);
        printf("Acrescimo aplicado: R$ %.2f\n", acrescimo);
        printf("Valor final a pagar: R$ %.2f\n", valor_final);
    }

    printf("\n=================================");
    printf("\nTodos os %d envios foram processados com sucesso!\n", pacotes);

    return 0;
}