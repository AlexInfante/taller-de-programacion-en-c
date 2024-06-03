#include <stdio.h>
int main() {
    int n = 0;
    double producto = 1;
    double base = 2;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        producto *= base;
        printf("%.0lf", producto);
        if (i != n - 1) {
            printf(", ");
        }
        base *= 2;
        i++;
    }

    printf("\n");

    return 0;
}