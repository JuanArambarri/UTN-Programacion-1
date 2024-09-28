#include <iostream>
#include <cmath>
using namespace std;

bool esNumeroArmstrong (int n);

int main() {
    bool armstrong;
    int num;
    cout << "Por favor ingrese un numero." << endl;
    cin >> num;
    armstrong = esNumeroArmstrong(num);
    if (armstrong) cout << "el numero ingresado es Armstrong." << endl;
    else cout << "el numero ingresado no es Armstrong." << endl;

    return 0;
}
bool esNumeroArmstrong (int n){
    int suma = 0, numero = n;
    if (n == 0) return 1; // Si n es 0, tiene 1 dígito
    int digitos = 0;
    while (numero > 0) {
        numero /= 10; // Dividimos n por 10
        digitos++; // Aumentamos el contador
    }
    numero = n;
    while (numero > 0){
        int cifra = numero%10;
        suma = suma + pow(cifra, digitos);
        numero = numero/10;
    }
    if (suma == n) return true;
    else return false;
}