#include <iostream>
using namespace std;

int main() {
    char lang;
    int horas;
    bool urgente;
    int costo;
    int chora = 7500;
    int sharphora = 6100;
    int pyhora = 5400;
    int gohora = 5000;
    cout << "Por favor ingrese la cantidad de horas del proyecto, el tipo de lenguaje y si es urgente o no" << endl;
    cin >> horas >> lang >> urgente;

    switch (lang){
        case 'c':
            costo = horas * chora;
            cout << "costo es: $" << costo << endl << "Urgencia? " <<urgente;
            break;
        case '#':
            costo = horas *sharphora;
            cout << "costo es: $" << costo << endl << "Urgencia? " <<urgente;
            break;
        case 'p':
            costo = horas * pyhora;
            cout << "costo es: $" << costo << endl << "Urgencia? " <<urgente;
            break;
        case 'g':
            costo = horas * gohora;
            cout << "costo es: $" << costo << endl << "Urgencia? " <<urgente;
            break;
    }
    return 0;
}
