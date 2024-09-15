#include <iostream>
using namespace std;

int main() {
    int input, suma, indice = 1;
    cout << "Por favor un numero." << endl;
    cin >> input;
    while (indice < input){
        if (input % indice == 0){
            suma += indice;
        }
        indice++;
    }

    if (suma == input) cout << "el numero es perfecto."<<endl;
    else cout << "el numero es imperfecto." << endl;
    return 0;
}
