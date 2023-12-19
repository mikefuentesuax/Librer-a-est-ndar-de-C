#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo y positivo
    int num = -10;
    int num_positivo = 8;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);
    int abs_num_positivo = abs(num_positivo);

    printf("El valor absoluto de %d es %d\n", num, abs_num);
    printf("El valor absoluto de %d es %d\n", num_positivo, abs_num_positivo);

    return 0;
}
