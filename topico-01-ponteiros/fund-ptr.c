/* === Notas antes dos códigos ===

    - Toda variável precisa de um espaço na memória, e esse espaço tem um endereço único;
    - O tamanho do espaço é definido por seu tipo de dado (por exemplo, sizeof(int) pode ser 4 bytes em um sistema de 64 bits, 
      ou 2 bytes em um de 32 bits );
    - ...


*/

#include <stdio.h>

int main (void) {

    int numero = 10;
    int *p_num;
    p_num = &numero;

    printf ("Valor da variável 'numero': %d\n", numero);
    printf ("Endereço de 'numero' (&numero): %p\n", &numero);
    printf ("Valor de 'p_num'(o endereço que ele guarda): %p\n", p_num);
    printf ("Valor apontado por 'p_num'(p*num): %d\n", *p_num);
    printf ("Modificando 'numero' através do ponteiro : *p_num = 25;\n");

    *p_num = 25;

    printf ("Novo valor da variável 'numero' : %d\n", numero);

    return 0;

}