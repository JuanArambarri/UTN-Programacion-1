#include <iostream>
using namespace std;

int main() {
    int legajo = 0, codigomateria,legajomenornota, aprobado = 0, desaprobado = 0, estudiantes = 0,examenes10=0, promedio = 0;
    float porcentajeaprobados, porcentajedesaprobados;
    float nota,menornota =0;
    while (legajo < 30000){
        cout << "Por favor ingrese numero de legajo del estudiante: " << endl;
        cin >> legajo;
        if (legajo > 30000){
            cout << "Legajo fuera de rango." << endl;
            break;
        }else{
            cout << "Por favor ingrese el codigo de la materia y sus nota." << endl;
            cin >> codigomateria >> nota;
            if (menornota == 0) {
                menornota = nota;
                legajomenornota = legajo;
            } else if (nota < menornota) {
                menornota = nota;
                legajomenornota = legajo;
            }
            if (nota >= 6){
                ++aprobado;
                promedio+=nota;
            }else{
                ++desaprobado;
                promedio +=nota;
            }
            if (codigomateria == 10){
                examenes10++;
            }
            estudiantes++;
        }

    }
    promedio = promedio/estudiantes;
    porcentajedesaprobados =(desaprobado*100)/estudiantes;
    porcentajeaprobados = 100 - porcentajedesaprobados;
    cout << "Nota promedio entre todos los estudiantes: " << promedio << endl;
    cout << "Legajo del estudiante con menor nota: " << legajomenornota << endl;
    cout << "Cantidad de examenes rendidos para la materia 10: " << examenes10 << endl;
    cout << "Porcentaje de aprobados: " << porcentajeaprobados << "% Porcentaje de desaprobados: " << porcentajedesaprobados <<"%"<<endl;
    return 0;
}
