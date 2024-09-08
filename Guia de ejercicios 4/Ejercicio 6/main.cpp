#include <iostream>
using namespace std;

int main() {
    bool igualacero = false;
    int input,neg = 0,pos = 0;
    while (!igualacero){
        cout << "Por favor ingrese un numero" << endl;
        cin >> input;
        if (input > 0){
            pos++;
        }else if (input < 0){
            ++neg;
        }else{
            igualacero = true;
        }
    }
    cout << "Numeros positivos: " << pos << endl;
    cout << "Numeros negativos: " << neg << endl;
    return 0;
}
