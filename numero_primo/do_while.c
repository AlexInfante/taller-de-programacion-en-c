#include <stdio.h>
int main() {
    int numero, primo = 1;
    int i = 2;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    do {
        if (numero % i == 0) {
            primo = 0;
        }
        i++;
    } while (i < numero);

    if (primo == 1) {
        printf("El numero %d es primo\n", numero);
    } else { 
        printf("El numero %d no es primo\n", numero);
    }

    return 0;
}