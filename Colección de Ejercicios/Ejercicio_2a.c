#include <stdio.h>
#include <string.h>

int main(){
    char cadena1[] = "Hola";
    char cadena2[] = "Hola";

    int resultado = strcmp(cadena1, cadena2);
    
    if (resultado == 0){
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }

    char cadena3[] = "Mundo";
    char cadena4[] = "Hola";

    int resultado2 = strcmp(cadena3, cadena4);

    if (resultado2 == 0){
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }


    return 0;
}