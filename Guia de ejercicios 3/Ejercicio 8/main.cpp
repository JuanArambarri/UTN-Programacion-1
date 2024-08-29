#include <iostream>
using namespace std;

int main() {
    int numero, positivo, negativo, cero = 0, porcpos, porcneg, porccero;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero " << endl;
        cin >> numero;
        if (numero ==0){
            cero++;
        }else if(numero >0){
            positivo++;
        }else{
            negativo++;
        }
    }
    porcpos = (positivo*100)/10;
    porcneg = (negativo*100)/10;
    porccero = (cero*100)/10;
    cout << "Porcentaje de Positivos: " << porcpos << " %" <<endl;
    cout << "Porcentaje de Negativos: " << porcneg << " %"  <<endl;
    cout << "Porcentaje de Ceros: " << porccero << " %"  <<endl;

    return 0;
}
