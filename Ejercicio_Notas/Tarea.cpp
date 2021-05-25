#include <iostream>
#include <string.h>
using namespace std;

int main(){

   string Nombre; 
   int cantidad;
   double litros=0,kilometros=0;
   double resultado;
   double contador,opcion, cantidadLitros, cantidadKilometros;
   cout<<"---BIENVENIDO AL PROGRANA PARA CALCULAR Litros y Kilometrajes--- "<<endl;
   cout << "Ingrese la cantidad que desea calcular: " << endl;
   cin >> cantidad;

   while (contador < cantidad) {
   cout<<"Por favor ingrese su nombre: "<<endl;
   cin>>Nombre;
   cout<<"Introduzca los litros utilizado en adelante: "<<endl;
   cin>>cantidadLitros;
   cout<<"Introduzca la cantidad de kilometros: "<<endl;
   cin>>cantidadKilometros;
   if (cantidadLitros < cantidadKilometros)
   {
       resultado = cantidadKilometros / cantidadLitros;
       cantidadLitros += litros;
       cantidadKilometros += kilometros;
        cout<<"Los Kilometraje /Litro para este tanque fueron: " << resultado <<endl;    
        cout<<"Los Kilometraje de: " << Nombre << "Fueron en total:" << resultado <<endl;
   }else{
     cout<<"Los kilometrajes a litros no son correctoros"<<endl;
   }
  contador++;

   
   /*for (int i = 0; i < cantidadKilometros; i++) {
        
       resultado = cantidadKilometros / cantidadLitros;
       cantidadLitros += litros;
       cantidadKilometros += kilometros;
       cout<<"Los Kilometraje /Litro para este tanque fueron: " << resultado <<endl;
        
   }*/
 
   }
       return 0;
}
