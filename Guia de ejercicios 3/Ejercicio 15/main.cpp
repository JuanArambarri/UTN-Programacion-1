#include <iostream>
using namespace std;

int main() {
    int input, temp = 0, counter = 0;
    for (int i = 0; i < 8; ++i) {
        cout << "Ingrese un numero" << "[ " << i << " ]" << endl;
        cin >> input;
        if (temp == 0){
            temp = input;
        }else if (input >= temp){
            temp = input;
            counter++;
        }
    }
    if (counter == 7) cout << "Conjunto ordenado" ;
    else cout << "Conjunto no ordenado";
    
    return 0;
}
