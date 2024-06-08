#include <stdio.h>

int main (){
    int num1, num2, mcd=1;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    
    int min=(num1 < num2)? num1 : num2;
    for (int i = 1; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);
    return 0;
}
