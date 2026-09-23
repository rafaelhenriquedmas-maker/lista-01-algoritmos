#include <stdio.h>

int main() {
    float reais, taxa, euros;

    printf("Digite o valor em Reais: ");
    scanf("%f", &reais);

    printf("Digite a taxa de conversao (1 EUR em BRL): ");
    scanf("%f", &taxa);

    euros = reais / taxa;

    printf("Valor em Euros = EUR %.2f\n", euros);

    return 0;
}
