#include <stdio.h>
int main(){
    int primero = 0, segundo = 1, siguiente, n;
  
    printf ("Ingrese el valor de n: ");
    scanf ("%d", &n);

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);
    printf("%d , %d ", primero, segundo);

    for (int i = 3; i <= n; i++) {
        siguiente = primero + segundo;
        printf(", %d ", siguiente);
        primero = segundo;
        segundo = siguiente;
    }
    return 0;
}