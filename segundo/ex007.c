#include <stdio.h>

void encontrarMaiorMenor(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int vetor[5] = {10, 5, 8, 15, 3};
    int maior, menor;
    
    encontrarMaiorMenor(vetor, 5, &maior, &menor);
    
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    
    return 0;
}
