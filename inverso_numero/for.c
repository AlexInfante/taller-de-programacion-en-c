#include <stdio.h>
int revesDigitos(int num){
    int inverso=0, digito; 

    for (; num != 0; num /= 10) {
        digito = num % 10;
        inverso = inverso * 10 + digito;
    }
    return inverso;
}
int main (){
    int numero;
    printf ("Ingrese un número: ");
    scanf ("%d", &numero);
    printf ("El inverso de %d es: %d\n", numero, revesDigitos(numero));
    return 0;
}