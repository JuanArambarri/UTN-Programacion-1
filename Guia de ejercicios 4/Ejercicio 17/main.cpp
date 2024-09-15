#include <iostream>
using namespace std;

int main() {
    int input, maximo, temp;
    bool consecutivo = true;
    while(consecutivo){
        cout << "por favor ingrese un numero." << endl;
        cin >> input;
        if (temp > 0 && input > 0){
            consecutivo = false;
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
