#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade;

    printf("Digite um valor inteiro em reais: ");
    scanf("%d", &valor);

    for (int i = 0; i < 7; i++) {
        quantidade = valor / notas[i];
        valor = valor % notas[i];

        printf("Notas de R$ %d: %d\n", notas[i], quantidade);
    }

    return 0;
}
