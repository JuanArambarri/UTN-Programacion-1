#include <iostream>
using namespace std;

int main() {
    int vector[10], par1 = 0, pos1 = 0, par2, pos2;
    for (int i = 0; i < 10; ++i) {
        cout << "ingrese un numero." << endl;
        cin >> vector[i];
        if (vector[i]%2 == 0){
            par2 = par1;
            pos2 = pos1;
            par1 = vector[i];
            pos1 = i + 1;
        }
    }
    cout << "el ultimo numero par es: " << par1 << " en posicion: " << pos1 << endl;
    cout << "el anteultimo numero par es: " << par2 << " en posicion: " << pos2 << endl;
    return 0;
}
