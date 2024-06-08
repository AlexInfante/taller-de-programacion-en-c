#include <stdio.h>
int main() {
    int base, exponente;
    long long resultado = 1;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    printf("%d^%d = ", base, exponente);

    for (int i = 0; i < exponente; i++) {
        printf("%d", base);
        if (i != exponente - 1) {
            printf(" * ");
        }
    }

    printf(" = %lld\n", resultado);

    return 0;
}
