#include <iostream>
using namespace std;

int main() {
    int importe;
    int descuento;
    cout << "Ingrese el importe y su descuento: " << endl;
    cin >> importe >> descuento;

    cout << "Importe total: $" << importe-((importe*descuento)/100) << endl;
    cout << "Importe sin descuento: $" << importe << endl;
    cout << "Descuento aplicado: $" << (importe*descuento)/100;

    return 0;
}
