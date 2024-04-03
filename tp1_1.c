#include <stdio.h>
// a

int main() {
    // printf("Hola mundo \n");
    // e
    int variable = 34;
    int *puntero = &variable;
    printf("Contenido del puntero: %d \n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p \n", puntero);
    printf("Direccion de memoria de la variable: %p \n", &variable);
    printf("Direccion de memoria del puntero: %p \n", &puntero);
    printf("Tamanio de memoria de la variable: %zu \n", sizeof(variable));

    return 0;
}