#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma;
    float promedio;
    for (int i = 0; i < 10; ++i) {
        cout << "Por favor ingrese un numero." << endl;
        cin >> numeros[i];
        suma += numeros[i];
        promedio = suma / 10;
    }
    cout << "El promedio es: " << promedio << endl;
    for (int i = 0; i < 10; ++i) {
        if (numeros[i] > promedio){
            cout << "el numero " << numeros[i] << " es mayor al promedio." << endl;
        }

    }
    return 0;
}
