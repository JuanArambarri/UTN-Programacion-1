#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres numeros." << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 != num2 && num2 != num3  &&  num1!=num3) cout << "todos distintos entre si." << endl;
    return 0;
}
