#include <iostream>
using namespace std;

int main() {
    int numero, positivo, negativo, cero = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero " << endl;
        cin >> numero;
        if (numero ==0){
            cero++;
        }else if(numero >0){
            positivo++;
        }else{
            negativo++;
        }
    }

    cout << "Cantidad de Positivos: " << positivo <<endl;
    cout << "Cantidad de Negativos: " << negativo <<endl;
    cout << "Cantidad de Ceros: " << cero <<endl;

    return 0;
}
