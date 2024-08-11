#include <iostream>
using namespace std;

int main() {
    int tempMaxima;
    int tempMinima;
    cout << "Por favor ingrese la temperatura maxima y luego la temperatura minima." << endl
    << "recuerde que la temperatura maxima debe ser mayor o igual a la temperatura minima." << endl;
    cin >> tempMaxima >> tempMinima;
    cout << "La amplitud termina fue de: " << tempMaxima - tempMinima << "°C";

    return 0;
}
