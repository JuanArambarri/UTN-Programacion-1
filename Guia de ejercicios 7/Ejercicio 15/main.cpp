#include <iostream>
using namespace std;

int main() {
    int vector1[5], vector2[9];
    cout << "ingrese 5 numeros." << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> vector1[i];
    }
    int j = 1;
    for (int i = 0; i < 9; ++i) {
        if (i==0) {
            vector2[i] = vector1[i];
        }else if (i%2 == 0){
                vector2[i] = vector1[j];
                j++;
        }else{
            vector2[i] = (vector1[i/2] + vector1[(i/2)+1])/2;
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << vector1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 9; ++i) {
        cout << vector2[i] << " ";
    }
    return 0;
}
