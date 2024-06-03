#include <stdio.h>
int prodFraccionario(int n) {
    float producto = 1.0;
    int i = 1;

    printf("Si n = %d, producto = ", n);

    do {
        if (i != 1) {
            printf(" * ");
        }
        printf("1/%d", i);
        producto *= 1.0 / i;
        i++;
    } while (i <= n);

    printf(" = %.2f\n", producto);
}


int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    prodFraccionario(n);

    return 0;
}