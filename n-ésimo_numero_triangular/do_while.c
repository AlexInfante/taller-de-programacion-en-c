#include <stdio.h>
int numTri(int n) {
    int numTriangular = 0;
    int i = 1;

    printf("Si n = %d, el número triangular es ", n);

    do {
        numTriangular += i;
        if (i != 1) {
            printf(" + ");
        }
        printf("%d", i);
        i++;
    } while (i <= n);

    printf(" = %d\n", numTriangular);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    numTri(n);

    return 0;
}