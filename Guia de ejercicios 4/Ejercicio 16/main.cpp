#include <iostream>
using namespace std;

int main() {
    int input, maximo, temp;
    bool repetido = true;
    while(repetido){
        cout << "por favor ingrese un numero." << endl;
        cin >> input;
        if (input == temp){
            repetido = false;
        }
        if (maximo == 0)maximo = input;
        else if (input > maximo){
            maximo = input;
        }
        temp = input;
    }
    cout << "el numero maximo fue: " << maximo << endl;
    return 0;
}
