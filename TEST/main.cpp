#include <iostream>
using namespace std;

int main() {
    int vector[5]={7,5,5, 3, 15};
    int a = 30;
    int b = 5;
    for (int i = 5; i >= 1 ; --i) {
        vector[i-b] = a - vector[b-1];
    }

    for (int i = 0; i < 5; ++i) {
        cout << vector[i] << endl;
    }
}
