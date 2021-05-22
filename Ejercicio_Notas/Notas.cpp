#include <iostream>
#include <stdlib.h>
using namespace std;
 
void PrimerEstudiante();
void SegundoEstudiantes();
void TercerEstudiantes();
void CuartoEstudiantes();
void QuientoEstudiantes();
//int ResultadosPromedios();
void salir();

void PrimerEstudiante(){
  double nota1, nota2, nota3;
  double notaBase100PrimerParcial, notaBase100SegundoParcial, notaBase100TercerParcial, promedio;
  cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
  cin >> nota1;
  cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
  cin >> nota2;
  cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
  cin >> nota3;
  promedio = nota1 + nota2 + nota3;
  cout << "Su promedio es:" << promedio << endl;
  notaBase100PrimerParcial = nota1 * 100 / 20;
  cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

  notaBase100SegundoParcial = nota2 * 100 / 35;
  cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

  notaBase100TercerParcial = nota3 * 100 / 45;
  cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
  if (promedio >= 70)
  {
    cout << "--El primer estudiante aprobo la clase:" << endl;
  }
  else{
    cout << "--El primer reprobo la clase::" << endl;
  }
  return ;
}
 void SegundoEstudiante()
{
  double nota1, nota2, nota3;
  double notaBase100PrimerParcial, notaBase100SegundoParcial, notaBase100TercerParcial, promedio;
  cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
  cin >> nota1;
  cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
  cin >> nota2;
  cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
  cin >> nota3;
  promedio = nota1 + nota2 + nota3;
  cout << "Su promedio es:" << promedio << endl;
  notaBase100PrimerParcial = nota1 * 100 / 20;
  cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

  notaBase100SegundoParcial = nota2 * 100 / 35;
  cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

  notaBase100TercerParcial = nota3 * 100 / 45;
  cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
  if (promedio >= 70)
  {
    cout << "--El segundo estudiante aprobo la clase:   " << endl;
  }
  else
  {
    cout << "--El segundo reprobo la clase:  " << endl;
  }
  return ;
}

void TercerEstudiante()
{
  double nota1, nota2, nota3;
  double notaBase100PrimerParcial, notaBase100SegundoParcial, notaBase100TercerParcial, promedio;
  cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
  cin >> nota1;
  cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
  cin >> nota2;
  cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
  cin >> nota3;
  promedio = nota1 + nota2 + nota3;
  cout << "Su promedio es:" << promedio << endl;
  notaBase100PrimerParcial = nota1 * 100 / 20;
  cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

  notaBase100SegundoParcial = nota2 * 100 / 35;
  cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

  notaBase100TercerParcial = nota3 * 100 / 45;
  cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
  if (promedio >= 70)
  {
    cout << "--El tercer estudiante aprobo la clase:   " << endl;
  }
  else
  {
    cout << "--El tercer estudiante reprobo la clase:  " << endl;
  }
 return ;
}

void CuartoEstudiante()
{
  double nota1, nota2, nota3;
  double notaBase100PrimerParcial, notaBase100SegundoParcial, notaBase100TercerParcial, promedio;
  cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
  cin >> nota1;
  cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
  cin >> nota2;
  cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
  cin >> nota3;
  promedio = nota1 + nota2 + nota3;
  cout << "Su promedio es:" << promedio << endl;
  notaBase100PrimerParcial = nota1 * 100 / 20;
  cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

  notaBase100SegundoParcial = nota2 * 100 / 35;
  cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

  notaBase100TercerParcial = nota3 * 100 / 45;
  cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
  if (promedio >= 70)
  {
    cout << "--El cuarto estudiante aprobo la clase:   " << endl;
  }
  else
  {
    cout << "--El cuarto estudiante reprobo la clase:  " << endl;
  }
 return ;
}

void QuintoEstudiante()
{
  double nota1, nota2, nota3;
  double notaBase100PrimerParcial, notaBase100SegundoParcial, notaBase100TercerParcial, promedio;
  cout << "Por favor ingrese la nota del primer parcial: (0-20)" << endl;
  cin >> nota1;
  cout << "Por favor ingrese la nota del segundo parcial: (0-35)" << endl;
  cin >> nota2;
  cout << "Por favor ingrese la nota del tecer parcial: (0-45)" << endl;
  cin >> nota3;
  promedio = nota1 + nota2 + nota3;
  cout << "Su promedio es:" << promedio << endl;
  notaBase100PrimerParcial = nota1 * 100 / 20;
  cout << "Nota en base a 100 del primer parcial: " << notaBase100PrimerParcial << endl;

  notaBase100SegundoParcial = nota2 * 100 / 35;
  cout << "Nota en base a 100 del segundo parcial:" << notaBase100SegundoParcial << endl;

  notaBase100TercerParcial = nota3 * 100 / 45;
  cout << "Nota en base a 100 del tercer parcial:" << notaBase100TercerParcial << endl;
  if (promedio >= 70)
  {
    cout << "--El quinto estudiante aprobo la clase:   " << endl;
  }
  else
  {
    cout << "--El quinto estudiante reprobo la clase:  " << endl;
  }
 return ;
}

  
 
//Declaracion 
int main()
{
  int opcion;
     cout << "  ****BIENVENIDO AL PROGRAMA DE NOTAS****         " << endl;
  do
  {
    cout << "1-Ingresar la nota del primer estudiante:        " << endl;
    cout << "2-Ingresar la nota del segundo estudiante:       " << endl;
    cout << "3-Ingresar la nota del tercer estudiante:        " << endl;
    cout << "4-Ingresar la nota del cuarto estudiante:        " << endl;
    cout << "5-Ingresar la nota del quinto estudiante:        " << endl;
    cout << "6-Salir:                                         " << endl;
    cout << "---SELECCIONE UNA DE LAS OPCIONES---             " << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      PrimerEstudiante();
      break;
    case 2:
      SegundoEstudiante();
      break;
    case 3:
      TercerEstudiante();
      break;
    case 4:
      CuartoEstudiante();
      break;
    case 5:
      QuintoEstudiante();
      break;
    case 6:
      salir();
      break;
    default:
      cout << "Opcion no valida" << endl;
      system("pause");
    }
  } while (opcion != 6);
 
  return 0;
}

void salir()
{
  cout << "Gracias vuelva pronto";
}


