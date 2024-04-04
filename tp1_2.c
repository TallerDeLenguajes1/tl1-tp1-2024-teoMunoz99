#include <stdio.h>

// a
float cuadrado(float numero);
float cuadrado(float numero) {
    return numero * numero;
}
// b
void cuadradoVoid(int *numero);
void cuadradoVoid(int *numero) {
    *numero = (*numero) * (*numero);
}
// c
void mostrarVariableRandom(void *variableX);
void mostrarVariableRandom(void *variableX) {
    printf("La direccion de la variable es: %p\n", variableX);
    printf("El contenido de la variable es: %d\n", *((int*)variableX));
}
// d
void invertir(void *a, void *b);
void invertir(void *a, void *b) {
    int aux;
    aux = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) = aux;
}
// e
void orden(void *a, void *b);
void orden(void *a, void *b) {
    if (*((int *)a) > *((int *)b)) {
        invertir(a, b);
    }
}
int main() {
    int a = 4, b = 5;
    printf("a = %d, b = %d \n", a, b);
    float aux = cuadrado(a);
    printf("Cuadrado de a: %f \n", aux);
    cuadradoVoid(&a);
    printf("Cuadrado de a con funcion void: %d \n", a);
    printf("Funcion para mostrar variable:\n");
    mostrarVariableRandom(&b);
    printf("a = %d, b = %d \n", a, b);
    printf("invertir valores\n");
    invertir(&a, &b);
    printf("a = %d, b = %d \n", a, b);
    printf("orden\n");
    orden(&a, &b);
    printf("a = %d, b = %d \n", a, b);
    return 0;
}