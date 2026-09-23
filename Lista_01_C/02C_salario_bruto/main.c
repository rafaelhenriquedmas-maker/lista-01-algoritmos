#include <stdio.h>

int main() {
    float boleto1, boleto2, boleto3, boleto4;
    float salarioBruto, salarioLiquido, total, restante;

    printf("Digite o valor do boleto 1: ");
    scanf("%f", &boleto1);
    printf("Digite o valor do boleto 2: ");
    scanf("%f", &boleto2);
    printf("Digite o valor do boleto 3: ");
    scanf("%f", &boleto3);
    printf("Digite o valor do boleto 4: ");
    scanf("%f", &boleto4);

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    salarioLiquido = salarioBruto * 0.86;
    total = boleto1 + boleto2 + boleto3 + boleto4;
    restante = salarioLiquido - total;

    printf("Salario liquido = R$ %.2f\n", salarioLiquido);
    printf("Total das contas = R$ %.2f\n", total);
    printf("Restante do salario = R$ %.2f\n", restante);

    return 0;
}
