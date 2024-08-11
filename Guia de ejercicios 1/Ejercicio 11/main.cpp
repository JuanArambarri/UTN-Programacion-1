#include <iostream>
using namespace std;

int main() {
    int minutosIngresados;
    int minutosRestantes;
    cout << "Porfavor ingrese una cantidad de minutos a continuacion:" << endl;
    cin >> minutosIngresados;
    minutosRestantes = minutosIngresados%1440;
    cout <<minutosIngresados/1440 << " dia/s." << endl << minutosRestantes/60 << " hora/s." << endl << minutosRestantes%60 << " minuto/s.";
    return 0;
}
