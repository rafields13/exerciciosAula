#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf('Digite o tamanho do vetor: ');
    scanf(&n);

    int *vet = (int *) malloc(n * sizeof(int)); //int vet[n];

    system("pause");
    return 0;
}