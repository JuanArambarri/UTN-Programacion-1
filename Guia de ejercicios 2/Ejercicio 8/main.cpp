#include <iostream>
using namespace std;

int main() {
    int l1, l2, l3;
    cout << "Porfavor ingrese los tres lados del triangulo" << endl;
    cin >> l1 >> l2 >> l3;

    if (l1 != l2 && l2 != l3 && l1 != l3){
        cout << "Es escaleno." << endl;
    }else if(l1 == l2 && l2 == l3){
        cout << "Es equilatero." << endl;
    }else cout << "Es Isoceles." << endl;

    return 0;
}
