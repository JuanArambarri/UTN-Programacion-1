#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Ingrese el año" << endl;
    cin >> year;
    if (year%4 == 0 && year % 100 != 0){
        cout << "El año es bisiesto";
    }else if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
        cout << "El año es bisiesto";
    }else cout << "El año no es bisiesto";

    return 0;
}