#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    int i = 2;
    while (i <= num) {
        fact *= i;
        i++;
    }
    return fact;
}
int main (){
    int numero;
    printf ("Ingrese un número: ");
    scanf ("%d", &numero);

    printf ("El factorial de %d es: %d\n", numero, factorial(numero));

return 0;
}