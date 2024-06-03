#include <stdio.h>
int main() {
    int base, exponente;
    long long resultado = 1;
    int i = 0;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    do {
        resultado *= base;
        i++;
    } while (i < exponente);

    printf("%d^%d = ", base, exponente);
    i = 0;

    do {
        printf("%d", base);
        if (i != exponente - 1) {
            printf(" * ");
        }
        i++;
    } while (i < exponente);

    printf(" = %lld\n", resultado);

    return 0;
}