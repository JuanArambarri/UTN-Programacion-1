#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int mayorabs =0, temp = 0;
    for (int i = 0; i < 10; ++i) {
        cout << "por favor ingrese un numero" << endl;
        cin >> vector[i];
        if (vector[i] > mayorabs && vector[i] > temp){
            mayorabs = vector[i];
        }else if (vector[i] < 0){
            temp = vector[i] - (vector[i]*2);
            if (temp > mayorabs) mayorabs = vector[i];
        }
    }
    cout << "el mayor absoluto ingresado fue: " << mayorabs << endl;
    return 0;
}
