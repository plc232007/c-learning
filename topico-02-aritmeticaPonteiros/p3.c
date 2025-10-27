// ex 2

#include <stdio.h>

int main (void) {

	char vet [10] = {1,2,3,4,5,6,7,8,9,10}; // nota-se que é indicado como char?
	int i;
	char *p = vet;

	printf ("Valores apontados pelo *p\n");
	for (i = 0; i < 10; i++) {
		printf ("vet[%d] = %d\n", i, *(vet+i));
	}
	return 0;
}
