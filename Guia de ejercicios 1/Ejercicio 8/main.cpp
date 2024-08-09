#include <iostream>
using namespace std;

int main() {
    float importeSinDescuento;
    float importeConDescuento;
    float porcentajeDescuento;
    cout << "Porfavor ingrese el importe a pagar." << endl;
    cin >> importeConDescuento;
    cout << "Porfavor ingrese el importe sin descuento." << endl;
    cin >> importeSinDescuento;

    porcentajeDescuento = 100 - ((importeConDescuento*100)/importeSinDescuento);

    cout << "Precio sin descuento: $" << importeSinDescuento << endl;
    cout << "Precio con descuento: $" << importeConDescuento << endl;
    cout << "El porcentaje de descuento es: " << porcentajeDescuento << "%.";
    return 0;
}
