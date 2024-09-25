#include <iostream>
using namespace std;

int main() {
    int input, mayor, menor, indice = 0;
    bool mayora10 = false;
    while (!mayora10){
        cout << "Por favor ingrese un numero" << endl;
        cin >> input;
        if (mayor == 0 && menor == 0){
            mayor = input;
            menor = input;
        }
        if (input > mayor){
            mayor = input;
        }else if (input < menor){
            menor = input;
        }
        if ((mayor - menor) > 10){
            mayora10 = true;
        }
        indice++;
    }
    cout << "Cantidad de numeros ingresados: " << indice << endl;
    return 0;
}
