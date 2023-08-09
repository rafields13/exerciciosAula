

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	// Inicialização das variáveis.
	int a = 5, b = 6, c = 7;
   	int v[10] = {0,10, 20, 30, 40, 50, 60, 70, 80, 90};
    	int *pt1, *pt2, *pt3;


    	pt1 = &a;  			// "pt1" recebe o endereço da memória de "a".
    	pt2 = &b;  			// "pt2" recebe o endereço da memória de "b".
    	pt3 = &c;  			// "pt3" recebe o endereço da memória de "c".
    	pt2 = pt1; 			// "pt2" recebe o endereço da memória de "a".
    	*pt3 = *pt2 + 2000;		// O valor de c é atualizado para o valor de a + 2000.
    	pt1 = &v[8];			// "pt1" recebe o endereço de memória do v[8].


    	// Loop para atualizar alguns valores.
    	for (int k = 0; k < 2; k++) {
        	*pt1 -= 5; 			// O valor de v[8] é atualizado para 80 - 5  = 75.
        	pt1 += 2;     			// "pt1" é atualizado para apontar para v[5] (valor 50).
   	}                       		// {0, 10, 20, 30, 40, 50, 15, 70, 75, 90}.


system("pause");
	return 0;
}
