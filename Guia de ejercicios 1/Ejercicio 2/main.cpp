#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int suma;
    cout << "Porfavor ingrese un numero" << endl;
    cin >> num1;
    cout << "Porfavor ingrese otro numero" << endl;
    cin >> num2;
    suma = num1+num2;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " <<num2 << endl;
    cout << " - - - - - - - - Numeros invertidos - - - - - - - -" << endl;
    num1 = suma - num1;
    num2 = suma - num2;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " <<num2 << endl;
    return 0;
}


