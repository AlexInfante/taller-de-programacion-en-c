#include <stdio.h>
int sumaCubos(int n) {
    int suma = 0;

    printf("Si n = %d, suma = ", n);

    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            printf(" + ");
        }
        printf("%d^3", i);
        suma += i * i * i;
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaCubos(n);

    return 0;
}