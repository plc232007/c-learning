#include <stdio.h>

int main (void) {

    int n1 = 3;
    int n2 = 5;

    int aux;

    int *p1 = &n1;
    int *p2 = &n2;

    printf ("Valores originais: n1 %d, n2 = %d\n", n1, n2);

    aux = *p1;

    *p1 = *p2;

    *p2 = aux;

    printf ("Valores trocados: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}