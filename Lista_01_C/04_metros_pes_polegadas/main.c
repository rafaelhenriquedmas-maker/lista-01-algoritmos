#include <stdio.h>

int main() {
    float metros, pes, polegadas;

    printf("Digite a altura em metros: ");
    scanf("%f", &metros);

    pes = metros / 0.3048;
    polegadas = metros / 0.0254;

    printf("Altura em pes = %.3f\n", pes);
    printf("Altura em polegadas = %.3f\n", polegadas);

    return 0;
}
