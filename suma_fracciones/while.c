#include <stdio.h>
int sumaFraccionarios(int n) {
    float suma = 0.0;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    while (i <= n) {
        if (i != 1) {
            printf(" + ");
        }
        printf("1/%d", i);
        suma += 1.0 / i;
        i++;
    }

    printf(" = %.2f\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaFraccionarios(n);

    return 0;
}