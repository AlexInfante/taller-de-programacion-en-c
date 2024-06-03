#include <stdio.h>
int contPrimos(int n) {
    int contador = 0;
    printf("Si n = %d, hay ", n);

    for (int num = 2; num <= n; num++) {
        int esPrimo = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo) {
            contador++;
            if (contador == 1) {
                printf("(%d", num);
            } else {
                printf(", %d", num);
            }
        }
    }
    printf(") (%d números primos)\n", contador);
}
    
    int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    contPrimos(n);

    return 0;
}