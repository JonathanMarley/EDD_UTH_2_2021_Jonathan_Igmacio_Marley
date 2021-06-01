#include <iostream>
#include <string.h>

using namespace std;

int main(){
    const int tamanio=25;
    int asientos[tamanio],primeraClase, segundaClase, opcion ;
   for (int x = 0; x < tamanio; x++){
        asientos[x]=0;
    }
    while (opcion){
     
        
      cout<<" ****Benvenido al sistema de reservacion areolinea**** "<<endl;
      cout<<" 1.Primera clase: "<<endl;
      cout<<" 2.Vuelo economico:"<<endl;
      cout<<" 3.Mostrar los asientos vacios y reservados"<<endl;
      cout<<" 4. Salir"<<endl;
      cout<<" ---Seleccione una de las siguiente opciones:"<<endl;
      cin>>opcion;
      switch (opcion){
      case 1:
          primeraClase;

          break;
      case 2:
         
      default:
          break;
      }
    } while (opcion !=4);
    
    
    return 0;
}
