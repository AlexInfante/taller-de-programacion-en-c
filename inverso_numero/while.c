#include <stdio.h>
int revesDigitosWhile(int num) {
    int inverso = 0;
    int digito;

    while (num != 0) {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    }
    
    return inverso;
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    printf("El inverso de %d es: %d\n", numero, revesDigitosWhile(numero));

    return 0;
}