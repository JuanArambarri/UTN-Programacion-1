#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int input, indice = 0;
    int found = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero." << endl;
        cin >> vector[i];
    }
    cout << "Por favor ingrese  el numero a buscar: " << endl;
    cin >> input;
    while (indice < 10){
        if (vector[indice] == input){
            found++;
        }
        indice++;
    }
    cout << "El numero fue encontrado: " << found << " veces." << endl;
    return 0;
}
