#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, max, min;
    cout << "porfavor ingrese 3 numeros." << endl;
    cin >> n1 >> n2 >> n3;
    max = n1;
    min = n1;

    if (n2>max){
        max = n2;
    }else if (n2<min){
        min = n2;
    }
    if (n3>max){
        max = n3;
    }else if (n3<min){
        min = n3;
    }
    cout << "el maximo es: " << max << endl << "el minimo es: " << min;

    return 0;
}
