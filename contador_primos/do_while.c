#include <stdio.h>
int contPrimos(int n) {
    int contador = 0;
    int num = 2;
    printf("Si n = %d, hay ", n);

    do {
        int esPrimo = 1;
        int i = 2;
        do {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
            i++;
        } while (i <= num / 2);
        if (esPrimo) {
            contador++;
            if (contador == 1) {
                printf("(%d", num);
            } else {
                printf(", %d", num);
            }
        }
        num++;
    } while (num <= n);
    printf(") (%d números primos)\n", contador);
}
    
    int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    contPrimos(n);

    return 0;
}