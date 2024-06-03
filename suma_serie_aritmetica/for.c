#include <stdio.h>
int main() {
    int n, suma = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i;
        if (i != n) {
            printf("%d + ", i);
        } else {
            printf("%d ", i);
        }
    }

    printf("= %d\n", suma);

    return 0;
}