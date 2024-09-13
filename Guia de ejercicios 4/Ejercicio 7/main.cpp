#include <iostream>
using namespace std;

int main() {
    int input, mayor;
    cout << "ingrese un numero." <<endl;
    cin >> input;
    mayor = input;
    while (input !=0){
        if (input > mayor){
            mayor = input;
        }
        cout << "ingrese un numero." <<endl;
        cin >> input;
    }
    cout << "el mayor numero ingresado fue: " << mayor << endl;

    return 0;
}
