#include <stdio.h>
int main() {
    int n;
    double producto = 1;
    double base = 2;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        producto *= base;
        printf("%.0lf", producto);
        if (i != n - 1) {
            printf(", ");
        }
        base *= 2;
    }

    printf("\n");

    return 0;
}