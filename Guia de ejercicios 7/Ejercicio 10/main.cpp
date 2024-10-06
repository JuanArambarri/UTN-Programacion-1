#include <iostream>
using namespace std;

int main() {
    int vector[20];
    int temp = 0, ruptura = 0;
    bool ordenado = true;
    for (int i = 0; i < 20; ++i) {
        cout << "ingrese un numero." << endl;
        cin >> vector[i];
        if (vector[i] <= temp && temp != 0){
            ruptura++;
        }
        temp = vector[i];
    }
    cout << "Hay: " << ruptura << " ruptura/s. " << endl;

    return 0;
}
