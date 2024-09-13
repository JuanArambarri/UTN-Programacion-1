#include <iostream>
using namespace std;

int main() {
    int input, maximo, minimo;
    do {
        cout << "por favor ingrese un numero." << endl;
        cin >> input;
        if (maximo == 0 && minimo == 0){
            maximo = input;
            minimo = input;
        }
        if (input > maximo && input !=0){
            maximo = input;
        }else if (input < minimo  && input !=0){
            minimo = input;
        }

    }while (input !=0);
    cout << "El maximo es: "  << maximo << " el minimo es: " << minimo << endl;
    return 0;
}
