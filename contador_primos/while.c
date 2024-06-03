#include <stdio.h>
int contPrimos(int n) {
    int contador = 0;
    int num = 2;
    printf("Si n = %d, hay ", n);

    while (num <= n) {
        int esPrimo = 1;
        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
            i++;
        }
        if (esPrimo) {
            contador++;
            if (contador == 1) {
                printf("(%d", num);
            } else {
                printf(", %d", num);
            }
        }
        num++;
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