#include <stdio.h>

int main() {
    float produto1, produto2, produto3, valorPago;
    float total, troco;

    printf("Digite o preco do produto 1: ");
    scanf("%f", &produto1);

    printf("Digite o preco do produto 2: ");
    scanf("%f", &produto2);

    printf("Digite o preco do produto 3: ");
    scanf("%f", &produto3);

    printf("Digite o valor dado por Maria: ");
    scanf("%f", &valorPago);

    total = produto1 + produto2 + produto3;
    troco = valorPago - total;

    printf("Total gasto = R$ %.2f\n", total);
    printf("Troco = R$ %.2f\n", troco);

    return 0;
}
