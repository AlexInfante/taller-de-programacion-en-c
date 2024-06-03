#include <stdio.h>
int sumaCuadrados(int n) {
    int suma = 0;

    printf("Si n = %d, suma = ", n);

    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            printf(" + ");
        }
        printf("%d^2", i);
        suma += i * i;
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaCuadrados(n);

    return 0;
}