#include <iostream>
#include <cmath>
using namespace std;

int contarDigitos(long long n);

int main() {
    long long num; // Cambiado a long long para permitir números más grandes
    cout << "Por favor ingrese un numero" << endl;
    cin >> num;
    cout << "El numero ingresado contiene: " << contarDigitos(num) << " digitos." << endl;

    return 0;
}

int contarDigitos(long long n) { // Cambiado a long long
    n = abs(n); // Tomar el valor absoluto

    if (n == 0) return 1; // Si n es 0, tiene 1 dígito

    int digitos = 0;
    while (n > 0) {
        n /= 10; // Dividimos n por 10
        digitos++; // Aumentamos el contador
    }
    return digitos;
}