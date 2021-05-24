#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double notaBase100PrimerParcial, notaBase100TercerParcial, notaBase100SegundoParcial;
    double nota1, nota2, nota3, promedio;
    int cantidad, contador = 0;

       
       cout << "Ingrese la cantidad de estudiante que desea calificar" << endl;
       cin >> cantidad;

       while (contador < cantidad) {
           

        cout<<""<<endl;
        cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
        cin >> nota1;
        cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
        cin >> nota2;
        cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
        cin >> nota3;
        promedio = nota1 + nota2 + nota3;
        cout << "El promedio es: " << promedio << endl;

        notaBase100PrimerParcial = nota1 * 100 / 20;
        cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

        notaBase100SegundoParcial = nota2 * 100 / 35;
        cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

        notaBase100TercerParcial = nota3 * 100 / 45;
        cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
      if (promedio >= 70) {
        cout << "Aprobo la clase:   " << endl;

      }else{

        cout << "Reprobo la clase:  " << endl;
      }
        contador++;
    }

    

    return 0;
}
