#include <iostream>
using namespace std;

int main() {
    int vector1[10];
    bool repetido = false;
    cout << "ingrese 10 numeros." << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> vector1[i];
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = i+1; j < 10; ++j) {
            if (vector1[i] == vector1[j]){
                repetido = true;
            }
        }
    }
    if (repetido) cout << "Hay repetidos" << endl;
    return 0;
}
