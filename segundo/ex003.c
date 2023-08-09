int a=5, b=12;   // Criação das variáveis.
int *p, *q;      // Criação dos ponteiros.
p = &a;          // O ponteiro p recebe o endereço de memória de a.
q = &b;          // O ponteiro q recebe o endereço de memória de b.
int c = *p + *q; // Criando uma variável C que recebe a soma dos apontados de p e q, que são os valores que estão nos endereços de memória de a e b respectivamente, 5 + 12 = 17.