// ex 5, calculando o tamanho de uma string

#include <stdio.h> 

int main () {

    char str[] = "Hello World";
    char *p = &str[0]; //Ou *p = str;
    int tamanho;

    while (*p != '\0') {

        tamanho ++;
        p++;

    }

    printf ("\n");
    printf ("Tamanho (comprimento) da string: %d \n ", tamanho);
    printf ("\n");


    return 0;
}