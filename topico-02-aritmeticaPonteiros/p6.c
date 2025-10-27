// Agora será utilizado ponteiros em matrizes 

#include <stdio.h> 

int main () {

    int num [3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int *p = (int*)num;

    for (int i = 0; i < 12; i++) {
        printf ("V[%d] = %d\n", i, *(p + i));
    }

    printf ("\n");
    return 0;
}