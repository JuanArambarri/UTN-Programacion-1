#include <iostream>
using namespace std;

int CalcularMaximo (int n1, int n2);



int main() {
    int n1, n2;
    cout << "Por favor ingrese dos numeros" << endl;
    cin >> n1 >> n2;
    cout << "El mayor numero es: " << CalcularMaximo (n1,n2) << endl;
    return 0;
}

int CalcularMaximo(int n1, int n2) {
    if (n1>n2){
        return n1;
    }else return n2;
}