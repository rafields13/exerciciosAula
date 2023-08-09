int i=7, j=3; // Criação das variáveis.
int *p;       // Criação do ponteiro p.
int **r;      // Criação do ponteiro de ponteiro r.
p = &i;       // O ponteiro p recebe o endereço de memória de i.
r = &p;       // O ponteiro de ponteiro r recebe o endereço de memória de p.
c = **r + j   // A variável c recebe a soma entre o apontado do apontado de r e j --> 7 + 3 = 10.
