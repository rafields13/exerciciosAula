#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Inicialização das variáveis.
    int a = 5, b = 6, c = 7;
    int v[10] = {0,10,20,30,40,50,60,70,80,90};
    int *pt1, *pt2, *pt3;

    pt1 = &a;  			// "pt1" recebe o endereço da memória de "a".
    pt2 = &b;  			// "pt2" recebe o endereço da memória de "b".
    pt3 = &c;  			// "pt3" recebe o endereço da memória de "c".
    pt1 = pt3; 			// "pt1" recebe o endereço da memória de "c".
    pt2 = pt3; 			// "pt2" recebe o endereço da memória de "c".
    *pt1 = *pt2 + *pt3; // "*pt1" e "*pt2" são atualizados para 6 + 7 = 13.
    pt1 = &v[3];		// "pt1" recebe o endereço de memória do quarto elemento do vetor "v".

    // Loop para atualizar alguns valores.
    for (int k = 0; k < 3; k++) {
        *pt1 = *pt1 + 1000; // Dentro do loop, o valor de v[3] é atualizado para 30 + 1000 = 1030.
        pt1 = pt1 + 2;      // "pt1" é atualizado para apontar para v[5] (valor 50).
    }                       // Dentro do loop, o valor de v[5] é atualizado para 50 + 1000 = 1050.
                            // "pt1" é atualizado para apontar para v[7] (valor 70).
	system("pause");        // Dentro do loop, o valor de v[7] é atualizado para 70 + 1000 = 1070.
	return 0;
}