#include<stdio.h>
int main() {
    int numero, contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int temp = numero;
    while (temp != 0) {
        contador++;
        temp /= 10;
    }

    printf("%d tiene %d dígitos\n", numero, contador);

    return 0;
}