#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int input, indice = 0, divisor = 0;
    int found = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero." << endl;
        cin >> vector[i];
        for (int j = 1; j <= vector[i]; ++j) {
            if (vector[i] % j == 0){
                divisor++;
            }
        }
        if (divisor == 2){
            found++;
        }
        divisor = 0;
    }
    cout << "Cantidad de numeros primos: " << found << endl;
    return 0;
}
