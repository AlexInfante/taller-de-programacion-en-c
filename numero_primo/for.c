#include <stdio.h>
int main (){
int numero, primo = 1;
printf("Ingrese un numero: ");
scanf("%d", &numero);
for (int i = 2; i < numero; i++){
    if (numero % i == 0){
        primo=0;
    }
}
if (primo == 1){
    printf ("El numero %d es primo\n", numero);
} else{ 
    printf ("El numero %d no es primo\n", numero);
}
//while

return 0;
}