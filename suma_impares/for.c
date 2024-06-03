#include <stdio.h>
int sumaImpar(int n) {
    int suma = 0;
    int primero = 1;

    printf("Si n = %d, suma = ", n);

    for (int i = 1; i <= n; i += 2) {
        if (i != primero) {
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

    sumaImpar(n);

    return 0;
}