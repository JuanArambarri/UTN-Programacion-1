#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, max;
    cout << "Porfavor ingrese 3 numeros." << endl;
    cin >> n1 >> n2 >> n3;
    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    cout << "El maximo es: " << max;

    return 0;
}
