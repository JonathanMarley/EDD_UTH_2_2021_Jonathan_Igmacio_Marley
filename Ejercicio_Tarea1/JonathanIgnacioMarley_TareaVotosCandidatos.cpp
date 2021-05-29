#include <iostream>
#include <string.h>

using namespace std;

int main(){
    const int tamanio=12;
    int  candidato[tamanio], numeroVoto, i;
    char resp='s';

    for (int m = 0; m < tamanio; m++){
        
        candidato[m]=0;
    }
    cout<<"__________________________________________________________________________"<<endl;
    cout<<"             ****BIENVENIDO AL PROGRAMA DE VOTACIONES**** "<<endl;
    cout<<"__________________________________________________________________________"<<endl;
    
    while (resp=='s' && i<tamanio){

        for (int z = 0; z < tamanio; z++){
        
        if (candidato[z]==0){
            
          cout<< "\" [" <<z+1<< "\"] ";
        }
        
        }
        cout<<""<<endl;
        cout<<"__________________________________________________________________________"<<endl;
        cout<<" ----Ingrese un numero para poder elegir un candidato---- "<<endl;
        cin>>numeroVoto;
         cout<<"__________________________________________________________________________"<<endl;

        //Utilizaremos una condicion para indicar que si un numero es mayor le dira que ingrese un numero que sea correcto
        if (numeroVoto>tamanio){
            cout<<" **El numero que usted ingreso para poder votar no es valio ingrese un numero correcto** "<<endl;
        }else{
            candidato[numeroVoto-1]==1;
            i++;

        }
        
        cout<<" --Quieres seguir votando-- "<<endl;
        cin>>resp;

        for (int c = 0; c < tamanio; c++){
            
        }
        
    }
    



    return 0;
}


