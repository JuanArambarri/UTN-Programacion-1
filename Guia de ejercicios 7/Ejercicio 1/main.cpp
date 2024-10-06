#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma;
    for (int i = 0; i < 10; ++i) {
        cout << "Por favor ingrese un numero." << endl;
        cin >> numeros[i];
        suma += numeros[i];
    }
    cout << "la suma de todos los numeros ingresados es: " << suma << endl;
    return 0;
}
