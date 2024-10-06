#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int input, indice = 0;
    bool found = false;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero." << endl;
        cin >> vector[i];
    }
    cout << "Por favor ingrese  el numero a buscar: " << endl;
    cin >> input;
    while (!found && indice < 10){
        if (vector[indice] == input){
            found = true;
            cout << "numero encontrado en posicion: " << indice+1 << endl;
        }
        indice++;
    }
    if(!found) cout << "-1" << endl;
    return 0;
}
