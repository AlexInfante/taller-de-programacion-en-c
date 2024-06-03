#include <stdio.h>
int main() {
    int numero;
    int raizCubica = 0;

    printf("Ingrese el número: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        numero -= raizCubica * raizCubica * raizCubica;
        raizCubica++;
    }

    raizCubica--;

    printf("%d^(1/3) = %d\n", numero + raizCubica * raizCubica * raizCubica, raizCubica);

    return 0;
}