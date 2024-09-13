#include <iostream>
using namespace std;

int main() {
    int input, impar1, impar2;
    while (input != 0){
        cout << "ingrese un numero." << endl;
        cin >> input;
        if (impar1 == 0 && input % 2 != 0){
            impar1 = input;
        }else if (impar2 == 0 && input % 2!= 0){
            impar2 = input;
        }
    }
    cout << "el primer numero impar fue: " << impar1 << endl;
    cout << "el segundo numero impar fue: " << impar2 << endl;
    return 0;
}
