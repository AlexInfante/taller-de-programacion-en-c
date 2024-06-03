#include <stdio.h>
int main() {
    int numero;
    int raizCubica = 0;

    printf("Ingrese el número: ");
    scanf("%d", &numero);

    do {
        numero -= raizCubica * raizCubica * raizCubica;
        raizCubica++;
    } while (numero >= 0);

    raizCubica--;

    printf("%d^(1/3) = %d\n", numero + raizCubica * raizCubica * raizCubica, raizCubica);

    return 0;
}