#include <iostream>
using namespace std;

int main() {
    int numeroSocio, numeroLibro, cantidadDePaginas, minlectura, tiempototalsocio = 0,tiempototaltodos = 0, over500=0,promediosocio;
    int totalPaginas = 0;
    for (int socio = 1; socio <= 10 ; ++socio) {
        cout << "Por favor ingrese su numero de socio: " << endl;
        cin >> numeroSocio;
        tiempototalsocio = 0;
        totalPaginas = 0;
        over500 = 0;
        cout << "Socio " << socio << ", por favor ingrese" << endl;
        for (int libro = 1; libro <= 5; ++libro) {
            cout << "Libro [" << libro << "]" << endl;
            cout << "Numero de libro: " << endl;
            cin >> numeroLibro;
            cout << "Ingrese la cantidad de paginas en este libro: " <<endl ;
            cin >> cantidadDePaginas;
            cout << "Ingrese el tiempo total de lectura en minutos" << endl;
            cin >> minlectura;
            tiempototalsocio += minlectura;
            tiempototaltodos += minlectura;
            promediosocio = tiempototalsocio/5;
            totalPaginas += cantidadDePaginas;

            if (cantidadDePaginas > 500) over500++;
        }
        cout << "Cantidad de paginas leidas por numero de socio " << numeroSocio << " fue: " << totalPaginas << endl;
        cout << "Tiempo promedio de lectura: " << promediosocio << "minutos" << endl;
        cout << "Cantidad de veces que leyo mas de 500 paginas: " << over500 << endl;

    }
    cout << "El tiempo total de lectura de todos los socios fue: " << tiempototaltodos << endl;
    return 0;
}
