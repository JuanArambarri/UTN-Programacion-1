#include <iostream>
using namespace std;

int main() {
    int input, mayor1,mayor2;
    while (input !=0){
        cout << "ingrese un numero" << endl;
        cin >> input;
        if (mayor1 == 0 && mayor2 == 0){
            mayor1 = input;
            mayor2 = input;
        }
        if (input > mayor1 && input !=0) {
            mayor1 = input;
        }else if (input > mayor2 && input !=0){
            mayor2 = input;
        }
    }
    cout << "el mayor numero ingresado es: " << mayor1 << endl;
    cout << "el segundo mayor numero ingresado es: " << mayor2 << endl;
    return 0;
}
