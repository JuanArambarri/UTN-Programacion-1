#include <iostream>
using namespace std;


int main() {
    int sueldoFijo = 5000;
    int bono = 700;
    int autosVendidos;
    cout << "Ingrese la cantidad de autos vendidos:" << endl;
    cin >> autosVendidos;
    cout << "El sueldo total a pagar es: $" << autosVendidos*bono + sueldoFijo;
    return 0;
}
