
#include <iostream>
#include "intercambios.h"

using namespace std;

int main() {

    int primero = 1;
    int segundo = 2;
    cout << primero << " " << segundo << endl;

    intercambiarConInt(primero, segundo);
    cout << primero << " " << segundo << endl;

    /* los argumentos pueden ser valores */
    intercambiarConInt(3, 4);

    intercambiarConReferenciaInt(primero, segundo);
    cout << primero << " " << segundo << endl;

    /* la siguiente l�nea no compila,
     * los argumentos deben ser variables porque los par�metros
     * son de tipo referencia a entero */
    // intercambiarConReferenciaInt(3, 4);

    int* ptrPrimero = &primero;
    int* ptrSegundo = &segundo;
    intercambiarConPunteroInt(ptrPrimero, ptrSegundo);
    cout << primero << " " << segundo << endl;

    /* sin utilizar variables auxiliares */
    intercambiarConPunteroInt(&primero, &segundo);
    cout << primero << " " << segundo << endl;

    /* la siguiente l�nea no compila,
     * los argumentos deben ser punteros a int */
    // intercambiarConPunteroInt(primero, segundo);

    return 0;
}
