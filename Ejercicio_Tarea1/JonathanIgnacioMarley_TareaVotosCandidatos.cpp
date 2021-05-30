#include <iostream>
#include <string.h>

using namespace std;

int main(){
    const int tamanio=12;
    int  candidato[tamanio], numeroVoto, i, can;
    char resp='s';

    for (int m = 0; m < tamanio; m++){
        
        candidato[m]=0;
    }
    cout<<"______________________________________________________________________________________"<<endl;
    cout<<"             ****BIENVENIDO AL PROGRAMA DE VOTACIONES**** "<<endl;
    cout<<"______________________________________________________________________________________"<<endl;
   
    while (resp=='s' && i<tamanio){
        cout<<"                    ****Lista de candidatos**** "<<endl;
        cout<<"__________________________________________________________________________________"<<endl;
        for (int z = 0; z < tamanio; z++){
        
        //if (candidato[z]==0){
            cout<<"--Candidato: " << z+1<<endl;
          //cout<< "\" [" <<z+1<< "\"] ";
        //}
        
        }
        cout<<""<<endl;
        cout<<"_________________________________________________________________________________"<<endl;
        cout<<" ----Ingrese un numero para poder elegir un candidato---- "<<endl;
        cin>>numeroVoto;
         cout<<"________________________________________________________________________________"<<endl;

        //Utilizaremos una condicion para indicar que si un numero es mayor le dira que ingrese un numero que sea correcto
        if (numeroVoto<=tamanio){
            //cout<<" **El numero que usted ingreso para poder votar no es valio ingrese un numero correcto** "<<endl;
             candidato[numeroVoto-1]+=1;
            
            cout<<" **** Voto registrado exitosamente**** "<<endl;

        }else{
            cout<<" **** Error candidato no encontrado**** "<<endl;
        }
        
        cout<<" --Quieres seguir votando-- "<<endl;
        cin>>resp;
        
    }
    
    cout<<" -----Finalizacion de los votos"<<endl;
    for (int s = 0; s < tamanio; s++)
    {
        cout<<"--Candidato: " << s+1 << " -> Cantodad de votos: " << candidato[s] <<endl;
    }
    
    



    return 0;
}


