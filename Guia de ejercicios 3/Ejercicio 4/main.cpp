#include <iostream>
using namespace std;

int main() {
    int input;
    std::cout << "ingrese un numero." << std::endl;
    cin >> input;
    cout << "Los numeros entre " << input << " y 1, son:" << endl;
    for (int i = input - 1; i > 0; --i) {
         cout << i << endl;
    }
    return 0;
}
