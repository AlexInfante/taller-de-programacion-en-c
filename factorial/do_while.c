#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    int i = 2;
    do {
         fact *= i;
        i++;
    }
    while (i <= num);
    return fact;
}
int main (){
    int numero;
    printf ("Ingrese un número: ");
    scanf ("%d", &numero);

    printf ("El factorial de %d es: %d\n", numero, factorial(numero));

return 0;
}