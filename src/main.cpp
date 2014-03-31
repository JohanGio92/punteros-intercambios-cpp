
#include <iostream>
#include "intercambios.h"

using namespace std;

int main() {

    int primero = 1;
    int segundo = 2;
    cout << primero << " " << segundo << endl;

    intercambiarInt(primero, segundo);
    cout << primero << " " << segundo << endl;

    /* los argumentos pueden ser valores */
    intercambiarInt(3, 4);

    intercambiarIntConReferencia(primero, segundo);
    cout << primero << " " << segundo << endl;

    /* la siguiente línea no compila,
     * los argumentos deben ser variables porque los parámetros
     * son de tipo referencia a entero */
    // intercambiarIntConReferencia(3, 4);

    int* ptrPrimero = &primero;
    int* ptrSegundo = &segundo;
    intercambiarIntConPuntero(ptrPrimero, ptrSegundo);
    cout << primero << " " << segundo << endl;

    /* sin utilizar variables auxiliares */
    intercambiarIntConPuntero(&primero, &segundo);
    cout << primero << " " << segundo << endl;

    /* la siguiente línea no compila,
     * los argumentos deben ser punteros a int */
    // intercambiarIntConPuntero(primero, segundo);

    int* ptrTercero = new int(3);
    int* ptrCuarto = new int(4);
    cout << "valores: " << *ptrTercero << " " << *ptrCuarto << endl;
    cout << "direcciones: " << ptrTercero << " " << ptrCuarto << endl;

    intercambiarPuntero(ptrTercero, ptrCuarto);
    cout << "valores: " << *ptrTercero << " " << *ptrCuarto << endl;
    cout << "direcciones: " << ptrTercero << " " << ptrCuarto << endl;

    intercambiarPunteroConReferencia(ptrTercero, ptrCuarto);
    cout << "valores: " << *ptrTercero << " " << *ptrCuarto << endl;
    cout << "direcciones: " << ptrTercero << " " << ptrCuarto << endl;

    /* la siguiente línea no compila,
     * los argumentos debe ser variables, no valores
     */
    //intercambiarPunteroConReferencia(&primero, &segundo);

    intercambiarPunteroConPuntero(&ptrTercero, &ptrCuarto);
    cout << "valores: " << *ptrTercero << " " << *ptrCuarto << endl;
    cout << "direcciones: " << ptrTercero << " " << ptrCuarto << endl;

    delete ptrTercero;
    delete ptrCuarto;

    return 0;
}
