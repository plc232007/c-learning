// ex 1

#include <stdio.h>

int main (void) {

    int V[] = {3, 5, 6, 2, 8, 9}; // (4 bytes cada índice) 
    int  *p = &V[2];

    printf ("V[2 + 2] = %d\n", *(p+2)); // Valor esperado : 9;

    return 0;
}