
#include <iostream>
#include "intercambios.h"

using namespace std;

int main() {

    int primero = 1;
    int segundo = 2;
    cout << primero << " " << segundo << endl;

    intercambiarConInt(primero, segundo);
    cout << primero << " " << segundo << endl;

    intercambiarConInt(3, 4);


    return 0;
}
