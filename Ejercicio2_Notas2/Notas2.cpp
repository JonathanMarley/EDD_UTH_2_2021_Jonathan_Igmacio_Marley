#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int apropados, excelente, reprobados, i = 0, notaBase100PrimerParcial, notaBase100TercerParcial, notaBase100SegundoParcial;
    int nota1, nota2, nota3, promedio;
    int calificaciones;
    int cantidad, opcion = 0;
    while (opcion!=5)
    {
        cout << "Ingrese la cantidad de estudiante que desea calificar" << endl;
        cin >> cantidad;
        cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
        cin >> nota1;
        cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
        cin >> nota2;
        cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
        cin >> nota3;
        promedio = nota1 + nota2 + nota3;
        
        
        if (promedio >= 70)
        {
            cout << "Su promedio es:" << promedio << endl;
        notaBase100PrimerParcial = nota1 * 100 / 20;
        cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

        notaBase100SegundoParcial = nota2 * 100 / 35;
        cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

        notaBase100TercerParcial = nota3 * 100 / 45;
        cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
        
            cout << "Aprobaste la clase!" << endl;
        }
        else
        cout<<"jola"<<endl;
        {
            cout << "Reprobarste!" << endl;
        }
        i++;
    }

    return 0;
}
