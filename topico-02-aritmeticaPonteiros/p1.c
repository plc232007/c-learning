// Todo Array, seja ele um vetor ou uma matriz é, de forma implícita, um ponteiro.

#include <stdio.h>

int main () {

    int V[5] = {1,2,3,4,5};
    int *p = V;
    int i;

    printf ("Os valores do vetor apontados com aritmética de ponteiros são: \n");

    for (i = 0; i < 5; i++) {

        printf ("V[%d] = %d\n", i, *(p+i));
 
    }

    return 0;

}