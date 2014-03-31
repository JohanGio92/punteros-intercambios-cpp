#include "intercambios.h"

void intercambiarInt(int valor1, int valor2) {

    int anterior2 = valor2;
    valor2 = valor1;
    valor1 = anterior2;
}

void intercambiarIntConReferencia(int& referencia1, int& referencia2) {

    int valor2 = referencia2;
    referencia2 = referencia1;
    referencia1 = valor2;
}

void intercambiarIntConPuntero(int* puntero1, int* puntero2) {

    int valor2 = *puntero2;
    *puntero2 = *puntero1;
    *puntero1 = valor2;
}

void intercambiarPuntero(int* puntero1, int* puntero2) {

    int* anterior2 = puntero2;
    puntero2 = puntero1;
    puntero1 = anterior2;
}
