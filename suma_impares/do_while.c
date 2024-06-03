#include <stdio.h>
int sumarImparesDoWhile(int n) {
    int suma = 0;
    int primero = 1;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    do {
        if (i != primero) {
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

    sumarImparesDoWhile(n);

    return 0;
}