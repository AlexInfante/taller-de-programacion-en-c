#include <stdio.h>
int main() {
    int numero, contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int temp = numero;
    do {
        contador++;
        temp /= 10;
    } while (temp != 0);

    printf("%d tiene %d dígitos\n", numero, contador);

    return 0;
}