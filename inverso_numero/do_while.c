#include <stdio.h>
int revesDigitosDoWhile(int num) {
    int inverso = 0;
    int digito;

    do {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    } while (num != 0);
    
    return inverso;
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    printf("El inverso de %d es: %d\n", numero, revesDigitosDoWhile(numero));

    return 0;
}