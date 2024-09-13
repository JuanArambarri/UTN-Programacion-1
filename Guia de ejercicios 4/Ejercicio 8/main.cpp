#include <iostream>
using namespace std;

int main() {
    int input, maximo, posicion, i=1;
    while (input !=0){
        cout << "Por favor ingrese un numero." << endl;
        cin >> input;
        if (input > maximo && input !=0){
            maximo = input;
            posicion = i;
            ++i;
        }else if (maximo == 0){
            maximo = input;
            posicion = i;
            ++i;
        }else if (input < maximo) ++i;
    }
    cout << "El mayor numero fue: " << maximo << " en la posicion: " << posicion << endl;
    return 0;
}
