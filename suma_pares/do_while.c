#include <stdio.h>
int sumaPar(int n) {
    int suma = 0;
    int primero = 1;
    int i = 2;

    printf("Si n = %d, suma = ", n);

    do {
        if (i != 2) {
            printf(" + ");
        }
        printf("%d", i);
        suma += i;
        i += 2;
    } while (i <= n);

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaPar(n);

    return 0;
}