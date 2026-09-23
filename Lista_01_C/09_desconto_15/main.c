#include <stdio.h>

int main() {
    float preco, precoFinal;

    printf("Digite o preco original: ");
    scanf("%f", &preco);

    precoFinal = preco * 0.85;

    printf("Preco final com 15%% de desconto = R$ %.2f\n", precoFinal);

    return 0;
}
