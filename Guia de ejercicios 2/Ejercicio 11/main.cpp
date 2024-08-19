#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, sumpos, sumneg,sumcero;
    cout << "Ingrese 5 numeros." << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    sumpos = 0;
    sumneg = 0;
    sumcero = 0;
    if (n1 != 0){
        if(n1 > 0){
            sumpos += 1;
        }else { sumneg +=1; }
    }else{ sumcero += 1;}

    if (n2 != 0){
        if(n2 > 0){
            sumpos += 1;
        }else { sumneg +=1; }
    }else{ sumcero += 1;}

    if (n3 != 0){
        if(n3 > 0){
            sumpos += 1;
        }else { sumneg +=1; }
    }else{ sumcero += 1;}

    if (n4 != 0){
        if(n4 > 0){
            sumpos += 1;
        }else { sumneg +=1; }
    }else{ sumcero += 1;}

    if (n5 != 0){
        if(n5 > 0){
            sumpos += 1;
        }else { sumneg +=1; }
    }else{ sumcero += 1;}

    cout << "Positivos: " <<sumpos << endl << "Negativos: " << sumneg << endl << "Cero: " << sumcero << endl;
    return 0;
}
