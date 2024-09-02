#include <iostream>
using namespace std;

int main() {
    int input, inpar1 = 0,inpar2 = 0,inpar3 = 0,inpar4 = 0;
    cout << "**   Sistema B.A.U        **" << endl;

    for (int i = 0; i < 7 ; ++i) {
        cout << "Porfavor ingrese un numero." << "[ " << i << " ingresado/s]" << endl;
        cin >> input;
        if (input % 2 != 0) {
            if (inpar1 == 0){
                inpar1 = input;
            }else if (inpar2 == 0){
                inpar2 = input;
            }else if (inpar3 == 0){
                inpar3 = input;
            }else if (inpar4 == 0){
                inpar4 = input;
            }
        }
    }
    cout << "El primer numero impar es: " << inpar1 << endl;
    cout << "El primer segundo impar es: " << inpar2 << endl;
    cout << "El primer tercer impar es: " <<  inpar3 << endl;
    cout << "El primer cuarto impar es: " << inpar4 << endl;

    return 0;
}
