#include <iostream>
using namespace std;

int main() {
    int huevos;
    int precioxcaja = 1000;
    int sueltos = 120;
    int preciototal;
    cout << "Por favor ingrese la cantidad de huevos comprados." << endl;
    cin >> huevos;
    preciototal = (huevos/12*precioxcaja) + (huevos%12*sueltos);
    cout << "El precio total es: $" << preciototal << endl;
    cout << "Cajas = " << huevos/12 << endl << "sueltos: " << huevos%12 << endl;
    return 0;

}
