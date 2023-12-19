#include <stdio.h>

int main() {
    const char *nombre_archivo = "archivo.txt";

    FILE *archivo = fopen(nombre_archivo, "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        fclose(archivo);
    } else {
        printf("Se pudo abrir el archivo\n");
        fclose(archivo);
    }

    return 0;



}