#include <iostream>
using namespace std;

int main() {
    int input, ternas = 0,temp = 0,pares = 0,negativo= 0;
    while (pares <5){
        temp = input;
        cout << "Por favor ingrese un numero." << endl;
        cin >> input;
        if (input % 2 == 0 && input !=0) pares++;
        if (temp == 0 || (temp < 0 && input <0)){
            negativo++;
        }
        if (negativo == 2){
            ternas++;
            negativo = 0;
        }
    }
    cout << "Cantidad de ternas: " << ternas;

    return 0;
}
