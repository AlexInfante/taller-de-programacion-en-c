#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void sumaFactorial(int n) {
    int suma = 0;

    printf("Si n = %d, suma = ", n);

    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            printf(" + ");
        }
        int fact = factorial(i);
        suma += fact;
        printf("%d!", i);
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaFactorial(n);

    return 0;
}