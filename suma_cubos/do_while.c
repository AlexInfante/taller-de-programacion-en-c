#include <stdio.h>
int sumaCubos(int n) {
    int suma = 0;
    int i = 1;

     printf("Si n = %d, suma = ", n);

    do {
        if (i != 1) {
            printf(" + ");
        }
        printf("%d^3", i);
        suma += i * i * i;
        i++;
    } while (i <= n);

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaCubos(n);

    return 0;
}