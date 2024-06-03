#include <stdio.h>
int main(){
    int primero = 0, segundo = 1, siguiente, n, i=3;
  
    printf ("Ingrese el valor de n: ");
    scanf ("%d", &n);

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);
    printf("%d , %d ", primero, segundo);

    do{
        siguiente = primero + segundo;
        printf(", %d ", siguiente);
        primero = segundo;
        segundo = siguiente;
        i++;
    }
    while ( i <= n);
    return 0;
}