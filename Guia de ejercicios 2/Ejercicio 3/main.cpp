#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Ingrese un numero." << endl;
    cin >> num1;
    if (num1%2 == 0) cout << num1 << " es par.";
    else cout << num1 << " es impar.";
    return 0;
}
