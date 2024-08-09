#include <iostream>
using namespace std;

int main() {
    float primerSemana;
    float segundaSemana;
    float tercerSemana;
    float cuartaSemana;
    float sumMes;
    cout << "Porfavor ingrese lo recaudado la primer semana: " << endl;
    cin >> primerSemana;
    cout << "Porfavor ingrese lo recaudado la segunda semana: " << endl;
    cin >> segundaSemana;
    cout << "Porfavor ingrese lo recaudado la tercer semana: " << endl;
    cin >> tercerSemana;
    cout << "Porfavor ingrese lo recaudado la cuarta semana: " << endl;
    cin >> cuartaSemana;
    sumMes = primerSemana + segundaSemana + tercerSemana + cuartaSemana;
    cout << "El promedio fue de: $" << sumMes/4 << endl;
    cout << "El porcentaje por semana fue de: " << (primerSemana*100)/sumMes << "%, segunda semana: "
    << (segundaSemana*100)/sumMes << "%, tercer semana: " << (tercerSemana*100)/sumMes << "%, cuarta semana: "
    << (cuartaSemana*100)/sumMes << "%.";

    return 0;
}
