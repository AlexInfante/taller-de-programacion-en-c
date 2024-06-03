#include <stdio.h>
int mcd(int a, int b) {
    int mcd = 1;
    int i = 1;
    
    do {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
            
        }
        
        i++;
        
    } while (i<= a && i <= b);
    
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