#include <iostream>
#include <string.h>
using namespace std;

int main(){

   string Nombre; 
   double litros=0,kilometros=0;
   double resultado;
   double contador,opcion, cantidadLitros, cantidadKilometros;
   cout<<"---BIENVENIDO AL PROGRANA PARA CALCULAR Litros y Kilometrajes--- "<<endl;

   while (litros!=1) {
   cout<<"Por favor ingrese su nombre: "<<endl;
   cin>>Nombre;
   cout<<"Escoja una opcion segun la cantidad de litros  litros en adelante: "<<endl;
   cin>>cantidadLitros;
   cout<<"Introduzca la cantidad de kilometros: "<<endl;
   cin>>cantidadKilometros;
   cout<<"El nombre de la persona es: "<< Nombre <<endl;
   
   if (cantidadLitros == 1){
        cout<<"Ejecucion de la cantidad"<<endl;
   }else{
       resultado = cantidadKilometros / cantidadLitros;
       cantidadLitros += litros;
       cantidadKilometros += kilometros;
   }
   
   cout<<"Los Kilometraje /Litro para este tanque fueron: " << resultado <<endl;

   }
   
   
   


    return 0;
}
