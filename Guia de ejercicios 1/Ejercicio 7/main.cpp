#include <iostream>
using namespace std;

int main() {
    float importe;
    float descuento;
    float valorTotal;
    cout << "Porfavor ingrese el importe a pagar." << endl;
    cin >> importe;
    cout << "Porfavor ingrese el porcentaje de descuento." << endl;
    cin >> descuento;

    valorTotal = importe + (importe*descuento/100);
    cout << "El costo total a pagar es de: $" << valorTotal << endl;

    return 0;
}
