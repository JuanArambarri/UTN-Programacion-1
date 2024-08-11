#include <iostream>
using namespace std;

int main() {
    int minutosIngresados;
    cout << "Porfavor ingrese una cantidad de minutos a continuacion:" << endl;
    cin >> minutosIngresados;
    cout <<minutosIngresados/60 << " hora/s." << endl << minutosIngresados%60 << " minuto/s.";
    return 0;
}
