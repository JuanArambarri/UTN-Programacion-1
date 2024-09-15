#include <iostream>
using namespace std;

int main() {
    int input, divisores = 0, indice = 1;
    cout << "por favor ingrese un numero." << endl;
    cin >> input;
    while (indice <= input){
        if (input%indice == 0){
            ++divisores;
            ++indice;
        }else ++ indice;
    }
    if (divisores == 2) cout << "El numero ingresado es primo";
    else cout << "El numero ingresado no es primo";

    return 0;
}
