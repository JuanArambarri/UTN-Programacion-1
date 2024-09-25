#include <iostream>
using namespace std;

int main() {
    int input, impar = 0, previoimpar = 0;
    bool divisiblex7 = false;
    while (!divisiblex7){
        cout << "Por favor ingrese un numero." << endl;
        cin >> input;
        if(previoimpar == 0 && input%7 !=0 && impar !=0){
            previoimpar = impar;
        }
        if (input % 2 != 0 && input%7 != 0){
            impar = input;
        }
        if (input % 7 ==0){
            divisiblex7=true;
        }
    }

    if (impar == 0 && previoimpar == 0) cout << "no hay numeros impares." << endl;
    else cout << "el anteultimo numero impar es: " << previoimpar << ", el ultimo es: " << impar << endl;
    return 0;
}
