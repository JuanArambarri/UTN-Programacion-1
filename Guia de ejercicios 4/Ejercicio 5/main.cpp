#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Por favor ingrese los dos numeros." << endl;
    cin >> num1 >> num2;

    if(num1 > num2){
        while (num2 <= num1){
            cout << num2 << endl;
            ++num2;
        }
    }else{
        while (num1 <= num2) {
            cout << num1 << endl;
            ++num1;
        }
    }
    return 0;
}
