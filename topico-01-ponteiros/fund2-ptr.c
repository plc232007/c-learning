#include <stdio.h>

int main (void) {

    int idade;
    int *p_idade;

    p_idade = NULL; // Boa prática inicializar o ptr como NULL.

    p_idade = &idade;

    printf ("Digite sua idade: ");
    scanf ("%d", p_idade); // p_idade é o mesmo que &idade, pois armazena o seu endereço;

    printf ("A idade digitada foi: %d\n", idade);
    printf ("O valor também pode ser lido via *p_idade: %d\n", *p_idade);

    return 0;
}