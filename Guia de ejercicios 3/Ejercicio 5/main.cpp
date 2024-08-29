#include <iostream>
using namespace std;

int main() {
    int num1, num2, mayor, menor;
    cout << "Ingrese dos numeros." << endl;
    cin >> num1 >> num2;
    mayor = num1;
    if (num1<num2){
        mayor = num2;
        menor = num1;
    }else menor = num2;

    for (int i = menor+1; i < mayor; ++i) {
        cout << i << endl;
    }
    return 0;
}
