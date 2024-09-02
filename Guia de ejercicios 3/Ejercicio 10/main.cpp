#include <iostream>
using namespace std;

int main() {
    int mayor, input, posicion;
    cout << "Sistema de Mayor numero." <<endl;
    cout << "por favor ingrese un numero." << endl;
    cin >> input;
    mayor = input;
    posicion = 0;
    for (int i = 0; i < 10 ; ++i) {
        cout << "por favor ingrese un numero." << "[Numeros ingresados: " << i+1<<"] "<<endl;
        cin >> input;
        if (input > mayor){
            posicion = i+1;
            mayor = input;
        }
    }
    cout << "El mayor numero es: " << mayor << " en la posicion: " << posicion << endl;
    return 0;
}
