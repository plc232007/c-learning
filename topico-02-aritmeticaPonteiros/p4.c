// ex 3, percorrendo uma string;

#include <stdio.h> 

int main () {

    char str[] = "Aula de APC II";
    int i = 0;
    char *p = &str[0]; //Ou *p = str;

    while (str[i] != '\0') {

        printf ("%c", *(p+i));
        i++;  //Incremento que avança para o próximo índice;

    }


    printf ("\n");

    return 0;
}