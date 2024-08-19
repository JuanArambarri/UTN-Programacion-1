#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, medio;
    cout << "Por favor ingrese 3 numeros." << endl;
    cin >> n1 >> n2 >> n3;
    medio = n1;
    if (n2 > n1 && n2 < n3 || n2 > n3 && n2 < n1){
        medio = n2;
    }else if(n3 > n1 && n3 < n2 || n3 > n2 && n3 < n1){
        medio = n3;
    }
    cout << "El numero medio es: " << medio << endl;
    return 0;
}
