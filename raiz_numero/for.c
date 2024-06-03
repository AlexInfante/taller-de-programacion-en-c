#include <stdio.h>
int main() {
    int numero;
    int raizCubica = 0;

    printf("Ingrese el número: ");
    scanf("%d", &numero);

    for (raizCubica = 0; numero >= 0; raizCubica++) {
        numero -= raizCubica * raizCubica * raizCubica;
    }

    raizCubica--;

    printf("%d^(1/3) = %d\n", numero + raizCubica * raizCubica * raizCubica, raizCubica);

    return 0;
}