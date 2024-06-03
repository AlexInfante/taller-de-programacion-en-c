#include <stdio.h>
int main() {
    int n, suma = 0;
    int i = 1;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        suma += i;
        if (i != n) {
            printf("%d + ", i);
        } else {
            printf("%d ", i);
        }
        i++;
    } while (i <= n);

    printf("= %d\n", suma);

    return 0;

}