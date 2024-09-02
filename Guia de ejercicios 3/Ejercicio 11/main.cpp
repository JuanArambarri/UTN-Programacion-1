#include <iostream>
using namespace std;

int main() {
    int mayor, input, menor;
    cout << "Sistema de Mayor numero." <<endl <<endl;
    cout << "por favor ingrese un numero." << endl;
    cin >> input;
    mayor = input;
    menor = input;
    for (int i = 0; i < 10 ; ++i) {
        cout << "por favor ingrese un numero." << "[Cantidad de numeros ingresados es "<< i+1 << "]" << endl;
        cin >> input;
        if (input > mayor){
            mayor = input;
        }
        if (input < menor){
            menor = input;
        }
    }
    cout << "El mayor numero es: " << mayor << endl;
    cout << "El menor numero es: " << menor << endl;

    return 0;
}
