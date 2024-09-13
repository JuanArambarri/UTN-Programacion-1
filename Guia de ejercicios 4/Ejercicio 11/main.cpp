#include <iostream>
using namespace std;

int main() {
    int input, maxneg, minpos;
    while (input != 0){
        cout << "Por favor ingrese un numero" << endl;
        cin >> input;
        if (maxneg == 0 && input < 0){
            maxneg = input;
        }else if (input < 0 && input > maxneg){
            maxneg = input;
        }
        if (minpos == 0 && input > 0){
            minpos = input;
        }else if(input > 0 && input < minpos){
            minpos = input;
        }
    }
    cout << "el maximo negativo es: " << maxneg << endl;
    cout << "el minimo positivo es: " << minpos << endl;
    return 0;
}
