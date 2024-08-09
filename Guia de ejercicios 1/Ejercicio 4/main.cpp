#include <iostream>
using namespace std;

int main() {
    float asientosTotales;
    float pasajesOcupados;
    float porcentajeOcupado;
    float porcentajeLibre;
    cout << "Porfavor ingresar la cantidad total de asientos totales." << std::endl;
    cin >> asientosTotales;
    cout << "Porfavor ingresar la cantidad total de asientos ocupados." << std::endl;
    cin >> pasajesOcupados;

    porcentajeLibre = ((asientosTotales - pasajesOcupados)*100) /asientosTotales;
    porcentajeOcupado = (pasajesOcupados*100) /asientosTotales;

    cout << "El porcentaje de asientos ocupados es: " << porcentajeOcupado <<"%"<< endl;
    cout << "El porcentaje de asientos libres es: " << porcentajeLibre << "%" << endl;

    return 0;
}
