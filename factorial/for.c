#include <stdio.h>
int main (){
    int numero;
    int factorial = 1;
    printf ("Ingrese un numero: ");
    scanf ("%d", &numero);
    for (int i = numero; i > 0; i--){
        factorial *= i;
    }
    printf ("El factorial de %d es: %d",numero, factorial);
return 0;
}