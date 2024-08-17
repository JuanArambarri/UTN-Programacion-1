#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Porfavor ingrese un numero." << endl;
    cin >> num;
    if (num!=0){
        if (num<0) cout << num << " es menor a 0.";
        else cout << num << " es mayor a 0.";
    }else cout << "numero es " << num;
    return 0;
}
