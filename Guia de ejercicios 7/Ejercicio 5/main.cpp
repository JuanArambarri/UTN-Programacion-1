#include <iostream>
using namespace std;

int main() {
    int vector[10], impar, par;
    for (int i = 0; i < 10; ++i) {
        cout << "ingrese un numero." << endl;
        cin >> vector[i];
        if (impar == 0 || (vector[i] < impar && vector[i] % 2 != 0)) {
            impar = vector[i];
        }
        if (par == 0 || (vector[i] > par && vector[i] % 2 == 0)) {
            par = vector[i];
        }
    }
    cout << "el menor numero impar es: " << impar << endl;
    cout << "el mayor numero par es: " << par << endl;
    return 0;
}
