#include <stdio.h>

int main() {
    float largura, comprimento, area;
    float areaTotal = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Comodo %d - largura (m): ", i);
        scanf("%f", &largura);

        printf("Comodo %d - comprimento (m): ", i);
        scanf("%f", &comprimento);

        area = largura * comprimento;
        areaTotal += area;

        printf("Area do comodo %d = %.2f m2\n", i, area);
    }

    printf("Area total dos 3 comodos = %.2f m2\n", areaTotal);

    return 0;
}
