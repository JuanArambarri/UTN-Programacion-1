#include <iostream>
using namespace std;

int main() {
    int num1, num2, diferencia;
    cout << "Porfavor ingrese dos numeros." << endl;
    cin >> num1 >> num2;
    diferencia = num1 - num2;
    if (diferencia<0){
        diferencia = abs(diferencia);
    }
    cout << "la diferencia es: " << diferencia << endl;
    return 0;
}
