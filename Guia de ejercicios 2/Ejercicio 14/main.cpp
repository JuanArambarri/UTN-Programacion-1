#include <iostream>
using namespace std;

int main() {
    int dia, mes, año, edad, diaA, mesA, añoA;
    cout << "Por favor ingrese la fecha de nacimiento como 3 datos individuales (dia, mes y año)" << endl;
    cin >> dia >> mes >> año;
    diaA = 19;
    mesA = 8;
    añoA = 2024;

    edad = añoA - año;

    if (mes > mesA){
        edad -= 1;
    }else if(mes == mesA && dia > diaA){
        edad -= 1;
    }
    cout << "Su edad actual es: " << edad;
    return 0;
}
