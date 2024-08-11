#include <iostream>
using namespace std;

int main() {
    int cantFrascos;
    int cantBetamol = 45;
    int cantMicilina = 2;
    int cantAcidoSinitico = 7;
    cout << "Ingrese la cantidad de frascos a producir" << endl;
    cin >> cantFrascos;

    cout << "La cantidad de mg de Betamol necesarios son: " << cantFrascos*cantBetamol << " mg"<<endl;
    cout << "La cantidad de gr de Micilina necesarios son: " << cantFrascos*cantMicilina << " gr"<<endl;
    cout << "La cantidad de mg de Acido Sinitico son: " << cantFrascos * cantAcidoSinitico << " mg"<<endl;

    return 0;
}
