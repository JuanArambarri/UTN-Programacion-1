#include <iostream>
using namespace std;

int main() {
    int vector[10];
    for (int i = 0; i < 10; ++i) {

        if (vector[ i-1] == 0 || i==0){
            vector[i] = 1;
        }else vector[i]=0;
    }
    for (int i = 0; i < 10; ++i) {
        cout << vector[i] << endl;
    }
    return 0;
}
