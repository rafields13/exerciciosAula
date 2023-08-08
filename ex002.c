#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Inicializando as variáveis.
	int y, *p, x;

	y = 0;
	p = &y;	   // "p" recebe o endereço de memória de y.
	x = *p;    // "x" = 0.
	x = 4;	   // "x" é atualizado para 4.
	(*p)++;    // "y" = 1.
	x;	       // 4.
	(*p) += x; // "y" += 4 = 1 + 4 = 5.

	printf ("y = %d\n", y); // 5

	system ("pause");
	return(0);
}