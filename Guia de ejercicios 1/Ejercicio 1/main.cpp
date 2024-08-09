#include <iostream>
using namespace std;

int main() {
    double horasTrabajadas;
    double valorPorHora = 1500;
    double sueldo;
    cout << "Porfavor ingrese la cantidad de horas trabajadas." << endl;
    cin >> horasTrabajadas;
    sueldo = horasTrabajadas*valorPorHora;
    cout << "Su sueldo es $";
    cout << sueldo;
    return 0;
}