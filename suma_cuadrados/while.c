#include <stdio.h>
int sumaCuadrados(int n) {
    int suma = 0;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    while (i <= n) {
        if (i != 1) {
            printf(" + ");
        }
        printf("%d^2", i);
        suma += i * i;
        i++;
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