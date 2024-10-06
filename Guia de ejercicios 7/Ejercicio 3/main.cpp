#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int mayor =0, posicion = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero" << endl;
        cin >> vector[i];
        if (mayor == 0 || vector[i] > mayor){
            mayor = vector[i];
            posicion = i+1;
        }
    }
    cout << "el mayor numero ingresado fue: " << mayor << ". Su posicion fue: " << posicion << endl;
    return 0;
}
