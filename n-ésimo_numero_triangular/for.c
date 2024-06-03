#include <stdio.h>
int numTri(int n) {
    int numTriangular = 0;

    printf("Si n = %d, el número triangular es ", n);

    for (int i = 1; i <= n; i++) {
        numTriangular += i;
        if (i != 1) {
            printf(" + ");
        }
        printf("%d", i);
    }

    printf(" = %d\n", numTri);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    numTri(n);

    return 0;
}
