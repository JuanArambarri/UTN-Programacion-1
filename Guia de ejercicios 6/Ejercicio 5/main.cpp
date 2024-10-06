#include <iostream>
using namespace std;

int Redondear (float n);
int main() {
    float num;
    int redondeado;
    cout << "Por favor ingrese un numero con decimal." << endl;
    cin >> num;
    redondeado = Redondear(num);
    cout << "el numero redondeado es: " << redondeado << endl;
    return 0;
}

int Redondear (float n){
    if (n - (int)n > 0.5){
        return n+1;
    }else return n;
}