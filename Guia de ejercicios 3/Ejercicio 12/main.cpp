#include <iostream>
using namespace std;

int main() {
    int menorPos, input, mayorNeg;
    cout << "Sistema de Mayor numero." <<endl <<endl;

    for (int i = 0; i < 10 ; ++i) {
        cout << "por favor ingrese un numero." << "[Cantidad de numeros ingresados es "<< i << "]" << endl;
        cin >> input;
        if (menorPos == 0 && input > 0){
            menorPos = input;
        }else if (input < menorPos && input >0){
            menorPos = input;
        }
        if(mayorNeg == 0 && input < 0){
            mayorNeg = input;
        }else if (input > mayorNeg && input < 0){
            mayorNeg = input;
        }
    }
    cout << "El menor numero positivo es: " << menorPos << endl;
    cout << "El mayor numero negativo es: " << mayorNeg << endl;

    return 0;
}
