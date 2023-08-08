#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Declarando as variáveis.
	int i, j, M[3][4];

	// Preenchendo a Matriz M com os números de 1 a 12.
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {
			M[i][j] = (i*4)+j+1;
		}
	}

	// Imprimindo a Matriz M na tela.
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {	
			printf ("[%3d] ", M[i][j]); // 3d para alinhar os números, usando 3 casas, mas sem mostrar o 0. Exemplo --> 001, 002, ..., 011, 012.
		}

		printf ("\n");
	}

	/* Output:
	[  1] [  2] [  3] [  4] 
	[  5] [  6] [  7] [  8] 
	[  9] [ 10] [ 11] [ 12] 
	*/

	system ("pause");
	return(0);
}