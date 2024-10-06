#include <iostream>
using namespace std;

int main() {
    int vector[20];
    int temp = 0;
    bool ordenado = true;
    for (int i = 0; i < 20; ++i) {
        cout << "ingrese un numero." << endl;
        cin >> vector[i];
        if (vector[i] < temp && temp != 0){
            ordenado = false;
        }
        temp = vector[i];
    }
    if (ordenado) cout << "el conjunto esta ordenado." << endl;
    else cout << "el conjunto esta desordenado." << endl;
    return 0;
}
