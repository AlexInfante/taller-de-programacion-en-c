#include<stdio.h>
//1. suma de digitos de un numero usando for
int sumaDigitos(int num) {
    int suma = 0;
    
    for (; num != 0; num /= 10) {
        suma += num % 10;
    }
    return suma;//obtenemos el valor suma
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    printf("La suma de los dígitos de %d es: %d\n", numero, sumaDigitos(numero));
    
    return 0;
}