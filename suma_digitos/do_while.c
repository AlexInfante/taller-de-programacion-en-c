#include <stdio.h>
int sumaDigitos(int num) {
    int suma = 0;
    
    do{
        suma += num % 10;
        num /= 10;
    }
    while (num != 0);
    
    return suma;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    printf("La suma de los dígitos de %d es: %d\n", numero, sumaDigitos(numero));
    
    return 0;
}