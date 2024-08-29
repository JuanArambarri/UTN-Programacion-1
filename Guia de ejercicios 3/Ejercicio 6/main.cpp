#include <iostream>
using namespace std;

int main() {
    int indice, numero,positivo = 0;
    cout << "por favor ingrese la cantidad de numeros que va a ingresar." << endl;
    cin >> indice;
    for (int i = 0; i < indice; ++i) {
        cin >> numero;
        if (numero > 0){
            positivo++;
        }
    }

    cout << "Cantidad de Positivos: " << positivo <<endl;

    return 0;
}
