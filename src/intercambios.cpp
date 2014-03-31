#include "intercambios.h"

void intercambiarConInt(int valor1, int valor2) {

    int anterior2 = valor2;
    valor2 = valor1;
    valor1 = anterior2;
}

void intercambiarConReferenciaInt(int& referencia1, int& referencia2) {

    int valor2 = referencia2;
    referencia2 = referencia1;
    referencia1 = valor2;
}
