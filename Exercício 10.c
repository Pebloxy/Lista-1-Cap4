/*
Exercício 10
Estacionamento (Tarifação por Veículo)
Um estacionamento cobra valores diferentes por hora dependendo do tipo de veículo (1 - Moto, 2 - Carro, 3 - Van). Utilize
switch case na variável numérica do veículo.
*/

#include <stdio.h>

int main(void) {
    int veiculo, horas;
    float tarifa_base = 0.0, tarifa_adicional = 0.0;
    float valor_total = 0.0;

    printf("=== ESTACIONAMENTO - TARIFAÇÃO POR VEÍCULO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Van\n");
    printf("===============================================\n");

    printf("Digite o codigo do tipo de veiculo (1, 2 ou 3): ");
    scanf("%d", &veiculo);

    switch (veiculo) {
        case 1:
            printf("Digite o total de horas estacionado: ");
            scanf("%d", &horas);

            tarifa_base = 5.00;
            tarifa_adicional = 4.00;

            if (horas <= 3) {
                valor_total = horas * tarifa_base;
            } else {
                valor_total = (3 * tarifa_base) + ((horas - 3) * tarifa_adicional);
            }

            printf("\n--- Resumo do Estacionamento ---\n");
            printf("Tipo: Moto\n");
            printf("Tempo total: %d hora(s)\n", horas);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        case 2:
            printf("Digite o total de horas estacionado: ");
            scanf("%d", &horas);

            tarifa_base = 10.00;
            tarifa_adicional = 8.00;

            if (horas <= 3) {
                valor_total = horas * tarifa_base;
            } else {
                valor_total = (3 * tarifa_base) + ((horas - 3) * tarifa_adicional);
            }

            printf("\n--- Resumo do Estacionamento ---\n");
            printf("Tipo: Carro\n");
            printf("Tempo total: %d hora(s)\n", horas);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        case 3:
            printf("Digite o total de horas estacionado: ");
            scanf("%d", &horas);

            tarifa_base = 20.00;
            tarifa_adicional = 15.00;

            if (horas <= 3) {
                valor_total = horas * tarifa_base;
            } else {
                valor_total = (3 * tarifa_base) + ((horas - 3) * tarifa_adicional);
            }

            printf("\n--- Resumo do Estacionamento ---\n");
            printf("Tipo: Van\n");
            printf("Tempo total: %d hora(s)\n", horas);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            break;

        default:
            printf("\nErro: Codigo de veiculo invalido! Escolha entre 1, 2 ou 3.\n");
            break;
    }

    return 0;
}