#include <stdio.h>
int sumaPar(int n) {
    int suma = 0;
    int primero = 1;

    printf("Si n = %d, suma = ", n);

    for (int i = 2; i <= n; i += 2) {
        if (i != 2) {
            printf(" + ");
        }
        printf("%d", i);
        suma += i;
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaPar(n);

    return 0;
}