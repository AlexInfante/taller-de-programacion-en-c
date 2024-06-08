#include <stdio.h>

int main (){
    int num1, num2, i=1, mcd=1;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
      while (i <= num1 && i <= num2) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i++;
    }
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);
    return 0;
}
