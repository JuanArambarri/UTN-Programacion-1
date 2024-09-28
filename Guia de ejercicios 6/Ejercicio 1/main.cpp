#include <iostream>
using namespace std;
bool EsPar(int num);

int main() {
    int n;
    cout << "ingrese un numero" << endl;
    cin >> n;
    if (EsPar(n)){
        cout << "el numero ingresado es par." << endl;
    }else cout << "el numero ingresado es impar." << endl;
    return 0;
}
bool EsPar(int num){
    if (num % 2 == 0){
        return true;
    }else return false;
}