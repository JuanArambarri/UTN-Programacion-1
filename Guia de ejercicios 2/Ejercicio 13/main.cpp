#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, temp;
    cout << "Ingrese tres numeros distintos." << endl;
    cin >> n1 >> n2 >> n3;

    if (n1 >n2){
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if (n2 > n3){
        temp = n3;
        n3 = n2;
        n2 = temp;
    }
    if (n1 > n2){
        temp = n1;
        n2 = n1;
        n1 = temp;
    }
    cout << "Numeros en orden: " << endl << n1 << endl << n2 << endl << n3 << endl;
    return 0;
}
