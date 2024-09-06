#include <iostream>
using namespace std;

int main() {
    int i = 1, input;
    cout << "Porfavor ingrese un numero positivo." << endl;
    cin >> input;
    while (i < input){
        cout << i << endl;
        ++i;
    }

    return 0;
}
