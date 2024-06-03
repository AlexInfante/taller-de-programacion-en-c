#include<stdio.h>
int main() {
    int numero, contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (int temp = numero; temp != 0; temp /= 10) {
        contador++;
    }

    printf("%d tiene %d dígitos\n", numero, contador);

    return 0;
}