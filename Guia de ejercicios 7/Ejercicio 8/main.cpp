#include <iostream>
using namespace std;

int main() {
    int vectorfinal[10];
    for (int i = 0; i < 10; ++i) {
        int mayor = 0;
        cout << "ingrese 10 numeros para el vector " << i+1 << endl;
        for (int j = 0; j < 10; ++j) {
            int vector[10];
            cin >> vector[j];
            if (mayor == 0 || vector[j] > mayor){
                mayor = vector[j];
            }
        }
        vectorfinal[i] = mayor;
    }
    for (int i = 0; i < 10; ++i) {
        cout << vectorfinal[i] << endl;

    }
    return 0;
}
