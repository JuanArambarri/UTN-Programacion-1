#include <iostream>
using namespace std;

int main() {
    int input, parmayor;
    cout << "**   Sistema B.A.U        **" << endl;

    for (int i = 0; i < 10 ; ++i) {
        cout << "Porfavor ingrese un numero." << "[ " << i << " ingresado/s]" << endl;
        cin >> input;
        if (input % 2 == 0) {
            if (input > parmayor || parmayor == 0) { parmayor = input; }
        }
    }
    cout << "El numero par mas grande es: " << parmayor << endl;
    return 0;
}
