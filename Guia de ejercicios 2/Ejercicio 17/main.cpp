#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3 ,n4;
    cout<<"Ingrese las cuatro numeros" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    if(n1<=n2 && n2<=n3 && n3<=n4){
        cout << "conjunto ordenado" << endl;
    }else cout << "conjunto desordenado" << endl;

    return 0;
}