// Agora será utilizado ponteiros em matrizes 

#include <stdio.h> 

int main () {

    int acumulo = 0;
    int vezes = 0;
    double media;
    int num [3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int *p = (int*)num;

    for (int i = 0; i < 12; i++) {
        if (*(p+i) % 2 == 0) {
            acumulo = acumulo + *(p + i);
            vezes++;
        }
    }

    media = (double) acumulo / vezes;
    printf ("Soma dos pares = %d\n", acumulo);
    printf ("Quantidade de pares = %d\n", vezes);
    printf ("Média dos valores pares = %.2lf\n", media);

    printf ("\n"); // Essa linha é para evitar o problema de aparecer o '%' no final da mansagem!
    return 0;
}