#include <iostream>
using namespace std;

int main() {
    int legajo, inscripciones, materia, aDistancia, carreraDistancia = 0, mayADistancia = 0, turnoM, turnoT, turnoN, menorInscripciones = 0;
    int carreraMenorInscripta;
    char modalidad, horario;


    for (int carrera = 1; carrera <= 20 ; ++carrera) {
        inscripciones = 0;
        aDistancia = 0;
        turnoN = 0, turnoM = 0, turnoT = 0;
        cout << "Carrera: " << carrera << ". Por favor ingrese su legajo: " << endl;
        cin >> legajo;
        while (legajo !=0){
            cout << R"(Por favor ingrese el tipo de modalidad ("P" presencial, "D" distancia))" << endl;
            cin >> modalidad;
            if (modalidad == 'D'){
                aDistancia++;
            }
            cout << R"(Por favor ingrese el horario ("M" Mañana, "T" Tarde, "N" Noche))" << endl;
            cin >> horario;
            switch (horario) {
                case 'M':
                    turnoM++;
                    break;
                case 'T':
                    turnoT++;
                    break;
                case 'N':
                    turnoN++;
                    break;
                default:
                    break;
            }

            inscripciones++;
            cout << "Por favor ingrese su legajo: " << endl;
            cin >> legajo;

        }
        cout << "Las inscripciones para la carrera " << carrera << " fueron: " << inscripciones << endl;

        if (menorInscripciones == 0 && inscripciones !=0){
            menorInscripciones = inscripciones;
            carreraMenorInscripta = carrera;
        }else if (inscripciones < menorInscripciones && inscripciones !=0){
            menorInscripciones = inscripciones;
            carreraMenorInscripta = carrera;
        }
        if (mayADistancia == 0 && inscripciones !=0){
            mayADistancia = aDistancia;
            carreraDistancia = carrera;
        }else if(aDistancia > mayADistancia && inscripciones !=0){
            mayADistancia = aDistancia;
            carreraDistancia = carrera;
        }
        if (inscripciones !=0){
        cout << "El porcentaje de alumnos para la modalidad tarde fue: " << (turnoT*100/inscripciones) << "%" << endl;
        cout << "El porcentaje de alumnos para la modalidad mañana fue: " << (turnoM*100/inscripciones) << "%" << endl;
        cout << "El porcentaje de alumnos para la modalidad Noche fue: " << (turnoN*100 /inscripciones)<< "%" << endl;
        }
    }
    cout << "la carrera con mas inscripciones a modalidad distancia fue: " << carreraDistancia << endl;
    cout << "la carrera con menos inscripciones registradas fue: " << menorInscripciones << endl;
    return 0;
}
