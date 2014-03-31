
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

    /* la siguiente linea no compila,
     * los argumentos deben ser variables porque los parámetros
     * son de tipo referencia a entero */
    // intercambiarConReferenciaInt(3, 4);



    return 0;
}
