#include <stdio.h>
int mcd(int a, int b) {
    int min = (a < b) ? a : b;
    int mcd = 1;
    
    for (int i = 1; i <= min; ++i) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
            
        }
        
    }
    return mcd;
}

int main (){
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));
    return 0;
}