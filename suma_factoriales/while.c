#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    int i = 2;
    while (i <= num) {
        fact *= i;
        i++;
    }
    return fact;
}

void sumaFactorial(int n) {
    int suma = 0;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    while (i <= n) {
        if (i != 1) {
            printf(" + ");
        }
        int fact = factorial(i);
        suma += fact;
        printf("%d!", i);
        i++;
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