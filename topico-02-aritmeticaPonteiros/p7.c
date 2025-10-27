// Exercício em que se apresenta a string e o seu endereço de memória correspondente;

#include <stdio.h> 

int main () {

  
    char nome[] = "Maria";
    char *p = nome;

    while (*p != '\0') {

        printf ("%c   ", *p);
        printf ("|");
        printf ("   %p", p);
        printf ("\n");
        p++;

    }

    printf ("\n");

    return 0;
}