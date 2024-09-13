#include <iostream>
using namespace std;

int main() {
    int input, maximo;

    do{
        cout << "por favor ingrese un numero." << endl;
        cin >> input;
        if (input !=0 && input > maximo && input%2 == 0){
            maximo = input;
        } else if (maximo == 0 && input%2==0){
            maximo = input;
        }
    }while(input !=0);
    cout << "El maximo par es: " << maximo << endl;
    return 0;
}
