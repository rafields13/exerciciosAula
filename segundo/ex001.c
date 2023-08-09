#include <stdio.h>
#include <stdlib.h>

int procedure(int *pointer1, int *pointer2) {
    int *assistant;

    *assistant = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = *assistant;

    system("pause");
    return 0;
}

int main(void) {
    int pointer1 = 6, pointer2 = 10;

    procedure(&pointer1, &pointer2);

    system("pause");
    return 0;
}