#include <iostream>
using namespace std;

int main() {
    int horasIngresadas;
    cout << "Porfavor ingrese una cantidad de horas a continuacion:" << endl;
    cin >> horasIngresadas;
    cout <<horasIngresadas/24 << " dia/s." << endl << horasIngresadas%24 << " hora/s.";
    return 0;
}
