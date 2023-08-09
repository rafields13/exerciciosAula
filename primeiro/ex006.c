void main(void) {

    // Inicialização das varáveis.
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.7};
    float *f;
    int i;
    f = vet;

    printf("contador / valor / valor / endereco/ endereco");

    // Inicializa o Loop para fazer os "prints".
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);                  // Imprime o valor atual de i (contador).
        printf(" vet[%d] = %.1f",i, vet[i]);   // Imprime o valor do elemento vet[i].
        printf(" *(f + %d) = %.1f",i, *(f+i)); // Imprime o valor apontado por (f + i).
        printf(" &vet[%d] = %X",i, &vet[i]);   // Imprime o endereço de memória do elemento vet[i].
        printf(" (f + %d) = %X\n",i, f+i);     // Imprime o endereço de memória apontado por (f + i)
    }

    system ("pause");
    return 0;
}