#include <iostream>
using namespace std;

int main() {
    int input, temp;
    bool desordenado;
    while (input !=0){
        cout << "ingrese un numero" << endl;
        cin >> input;
        if (temp == 0){
            temp = input;
        }else if (input < temp && input != 0){
            desordenado = true;
        }
    }
    if (desordenado) cout << "el conjunto esta desordenado" << endl;
    else cout << "el conjunto esta ordenado.";
    return 0;
}
