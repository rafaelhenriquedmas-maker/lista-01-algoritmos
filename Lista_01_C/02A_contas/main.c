#include <stdio.h>

int main() {
    float boleto1, boleto2, boleto3, boleto4, total;

    printf("Digite o valor do boleto 1: ");
    scanf("%f", &boleto1);
    printf("Digite o valor do boleto 2: ");
    scanf("%f", &boleto2);
    printf("Digite o valor do boleto 3: ");
    scanf("%f", &boleto3);
    printf("Digite o valor do boleto 4: ");
    scanf("%f", &boleto4);

    total = boleto1 + boleto2 + boleto3 + boleto4;

    printf("Total das contas = R$ %.2f\n", total);

    return 0;
}
