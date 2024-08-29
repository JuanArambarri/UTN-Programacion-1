#include <iostream>
using namespace std;

int main() {
    int edad1, edad2, edad3, edad4, edad5;
    double altura1, altura2, altura3, altura4, altura5, promaltmay30;
    int veintea = 0,treintaa = 0,cuarentaa = 0,alturamedia = 0, treintametroochenta = 0;
    cout << "Ingrese la edad y altura: [1]" << endl;
    cin >> edad1 >> altura1;
    if (edad1<40 && edad1>=30){
        treintaa++;
        if (altura1 >= 1.8){
            treintametroochenta++;
            promaltmay30 += altura1;
        }
    }else if (edad1<30 && edad1>=20){
        veintea++;
    }else if(edad1<50 && edad1>=40){
        cuarentaa++;
    }
    if (altura1 >=1.7 && altura1 <=1.8){
        alturamedia++;
    }
    cout << "Ingrese la edad y altura: [2]" << endl;
    cin >> edad2 >> altura2;
    if (edad2<40 && edad2>=30){
        treintaa++;
        if (altura2 >= 1.8){
            treintametroochenta++;
            promaltmay30 += altura2;
        }
    }else if (edad2<30 && edad2>=20){
        veintea++;
    }else if(edad2<50 && edad2>=40){
        cuarentaa++;
    }
    if (altura2 >=1.7 && altura2 <=1.8){
        alturamedia++;
    }
    cout << "Ingrese la edad y altura: [3]" << endl;
    cin >> edad3 >> altura3;
    if (edad3<40 && edad3>=30){
        treintaa++;
        if (altura3 >= 1.8){
            treintametroochenta++;
            promaltmay30 += altura3;
        }
    }else if (edad3<30 && edad3>=20){
        veintea++;
    }else if(edad3<50 && edad3>=40){
        cuarentaa++;
    }
    if (altura3 >=1.7 && altura3 <=1.8){
        alturamedia++;
    }
    cout << "Ingrese la edad y altura: [4]" << endl;
    cin >> edad4 >> altura4;
    if (edad4<40 && edad4>=30){
        treintaa++;
        if (altura4 >= 1.8){
            treintametroochenta++;
            promaltmay30 += altura4;
        }
    }else if (edad4<30 && edad4>=20){
        veintea++;
    }else if(edad4<50 && edad4>=40){
        cuarentaa++;
    }
    if (altura4 >=1.7 && altura4 <=1.8){
        alturamedia++;
    }
    cout << "Ingrese la edad y altura: [5]" << endl;
    cin >> edad5 >> altura5;
    if (edad5<40 && edad5>=30){
        treintaa++;
        if (altura5 >= 1.8){
            treintametroochenta++;
            promaltmay30 += altura5;
        }
    }else if (edad5<30 && edad5>=20){
        veintea++;
    }else if(edad5<50 && edad5>=40){
        cuarentaa++;
    }
    if (altura5 >=1.7 && altura5 <=1.8){
        alturamedia++;
    }
    promaltmay30= promaltmay30/treintametroochenta;

    cout << "Cantidad de personas mayores a 30 que miden mas de 1.8m: " << treintametroochenta << endl;
    cout << "Promedio de altura de las personas mayores a 30: " << promaltmay30 << endl;
    cout << "Personas con altura entre 1.7m y 1.8m: " << alturamedia <<endl;
    cout << "Personas de 20: " << veintea << endl << "Personas de 30: " << treintaa << endl << "Personas de 40: " << cuarentaa << endl;

    return 0;
}
