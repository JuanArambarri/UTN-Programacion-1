#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int input, indice = 0;
    int found = 0;
    for (int & i : vector) {
        cout << "por favor ingrese un numero." << endl;
        cin >> i;
        if (i % 2 == 0){
            found++;
        }
    }
    cout << "La cantidad de numeros pares encontrados fue: " << found << endl;
    return 0;
}
