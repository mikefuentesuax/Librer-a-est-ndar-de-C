#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    printf("Numeros aleatorios:\n");
    for (int i = 0; i < 10; i++) {
        int num = rand();
        printf("%d\n", num);
    }
    unsigned int seed = time(NULL);
    srand(seed);
    printf("Numeros aleatorios con seed:\n");
    for (int i = 0; i < 10; i++) {
        int num = rand();
        printf("%d\n", num);
    }
    return 0;
}