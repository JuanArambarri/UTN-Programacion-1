#include <iostream>
using namespace std;

int main() {
    float ventasA;
    float ventasB;
    float ventasC;
    float sumVentas;
    cout << "Porfavor ingrese la cantidad de ventas para la empresa A."<<endl;
    cin >> ventasA;
    cout << "Porfavor ingrese la cantidad de ventas para la empresa B."<<endl;
    cin >> ventasB;
    cout << "Porfavor ingrese la cantidad de ventas para la empresa C."<<endl;
    cin >> ventasC;
    sumVentas = ventasA+ventasB+ventasC;
    cout << "El porcentaje de ventas de A es: " << (ventasA*100)/sumVentas<<
    "%. De B es:" << (ventasB*100)/sumVentas << "%. De C es: " << (ventasC*100)/sumVentas << "%.";
    return 0;
}
