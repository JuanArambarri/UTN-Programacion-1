#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3 ,n4;
    cout<<"Ingrese las cuatro notas" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    if(n1<4 && n2<4 && n3<4 && n4<4){
        cout << "Recursa la materia" << endl;
    }else if(n1>=7 && n2>=7 && n3>=7 && n4>=7 ){
        cout << "Promociona" << endl;
    }else if(n1>=4|| n2 >=4 || n3>=4 || n4>=4){
        if(n1>=4 && n2>4 && n3>4 ||
           n2>=4 && n3>=4 && n4>=4 ||
           n3>=4 && n4>=4 && n1>=4 ||
           n4>=4 && n1>=4 && n2>=4){
            cout << "rinde examen final"<<endl;
        }else{ cout <<"Recupera parciales"<<endl;
        }
    }

    return 0;
}