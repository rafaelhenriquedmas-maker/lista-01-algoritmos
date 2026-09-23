#include <stdio.h>

int main() {
    int anos;
    long long segundos;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);

    segundos = (long long)anos * 365 * 24 * 60 * 60;

    printf("Quantidade de segundos = %lld\n", segundos);

    return 0;
}
