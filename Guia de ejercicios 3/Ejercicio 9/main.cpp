#include <iostream>
using namespace std;

int main() {
    int mayor, input;
    cout << "Sistema de Mayor numero." <<endl;
    cout << "por favor ingrese un numero." << endl;
    cin >> input;
    mayor = input;
    for (int i = 0; i < 10 ; ++i) {
        cout << "por favor ingrese un numero." << endl;
        cin >> input;
        if (input > mayor){
            mayor = input;
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}
