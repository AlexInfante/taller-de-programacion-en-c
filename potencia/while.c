#include <stdio.h>
int main() {
    int base, exponente;
    long long resultado = 1;
    int i = 0;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    while (i < exponente) {
        resultado *= base;
        i++;
    }

    printf("%d^%d = ", base, exponente);
    i = 0;

    while (i < exponente) {
        printf("%d", base);
        if (i != exponente - 1) {
            printf(" * ");
        }
        i++;
    }

    printf(" = %lld\n", resultado);

    return 0;
}