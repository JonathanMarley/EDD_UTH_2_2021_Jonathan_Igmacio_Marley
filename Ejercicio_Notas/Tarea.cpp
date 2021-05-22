#include <iostream>
#include <string.h>
using namespace std;

int main(){

   string Nombre; 
   double litros,kilometros;
   int resultado, millas;
   int contador,opcion, cantidadLitros, cantidadKilometros;
   cout<<"---BIENVENIDO AL PROGRANA PARA CALCULAR Litrso y Kilometraje--- "<<endl;
   cin>>opcion;
   while (opcion) {
   cout<<"Por favor ingrese su nombre: "<<endl;
   cin>>Nombre;
   cout<<"Escoja una opcion segun la cantidad de litros 1. = 1 litros, /2. = 3 litros, /3. = 5 litros, /4 = 8 litros en adelante: "<<endl;
   cin>>cantidadLitros;
   cout<<"Introduzca la cantidad de kilometros: "<<endl;
   cin>>cantidadKilometros;
   cout<<"El nombre de la persona es: "<< Nombre <<endl;
   if (cantidadLitros == 1 && cantidadKilometros){
       cantidadKilometros = millas * 1.6093;
       contador++;
       cout<<"Los Kilometraje /Litro para este tanque fueron: " << cantidadKilometros <<endl;
   }else{
       cout<<"No es suficiente"<<endl;
   }
   

   }
   
   
   


    return 0;
}
