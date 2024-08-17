#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << " Ingrese 3 numeros." << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3) cout << "Los tres numeros son iguales.";

    return 0;
}
