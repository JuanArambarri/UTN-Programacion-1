#include <iostream>
using namespace std;

int main() {
    int aRetirar;
    int resto;
    cout << "Ingrese el importe a retirar." << endl;
    cin >> aRetirar;
    cout << "Billetes de $1.000: " << aRetirar/1000 << endl;
    resto = aRetirar%1000;
    cout << "billetes de $500: " << resto/500 << endl;
    resto %= 500;
    cout << "billetes de $200: " << resto/200 << endl;
    resto %= 200;
    cout << "billetes de $100: " << resto/100;
    return 0;
}
