#include <iostream>
using namespace std;

int main() {
    int indice = 1,divisor = 1, input, primo = 0, posicionprimo = 0,cantdivisores = 0, par,posicionpar = 0;
    do {
        cout << "Por favor ingrese un numero" << endl;
        cin >> input;
        divisor = 1;
        cantdivisores = 0;
        if(input % 2 == 0 && par == 0 && input != 0){
            par = input;
            posicionpar = indice;
        }
        while(divisor <= input && input!=0){
            if (input % divisor == 0){
                cantdivisores++;
            }
            divisor++;
        }
        if (cantdivisores == 2 && input !=0) {
            primo = input;
            posicionprimo = indice;
        }
        indice ++;
    }while (input !=0);
    cout << "Primero numero par: " << par << " posicion: " << posicionpar << endl;
    cout << "Ultimo numero primo: " << primo << " posicion: " << posicionprimo << endl;
    return 0;
}
