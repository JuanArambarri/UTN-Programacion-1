#include <iostream>
using namespace std;

int main() {
    float importe;
    cout << "Porfavor ingrese el importe" << endl;
    cin >> importe;
    if (importe < 100) importe-=(importe*.05);
    if (importe >= 100 && importe <=500) importe -= (importe*.1);
    else importe -= importe*.15;

    cout << "El importe final a pagar es: $" << importe << endl;
    return 0;
}
