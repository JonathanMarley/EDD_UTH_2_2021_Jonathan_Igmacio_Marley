#include <iostream>
#include <string.h>

using namespace std;

int main(){
    const int tamanio=12,porcentaje=12;
    int  candidato[tamanio],votos[porcentaje], numeroVoto, contador=0, total=0, posicioncandidato, posc;
    char resp='s';

    for (int m = 0; m < tamanio; m++){
        
        candidato[m]=0;
    }
    cout<<"______________________________________________________________________________________"<<endl;
    cout<<"             ****BIENVENIDO AL PROGRAMA DE VOTACIONES**** "<<endl;
    cout<<"______________________________________________________________________________________"<<endl;
   
    while (resp=='s' && contador<tamanio){
        cout<<"                    ****Lista de candidatos**** "<<endl;
        cout<<"__________________________________________________________________________________"<<endl;
        for (int z = 0; z < tamanio; z++){
        
        //if (candidato[z]==0){
            cout<<"--Candidato: " << z+1 <<endl;
          //cout<< "\" [" <<z+1<< "\"] ";
        //}
        
        }
        //cout<<""<<endl;
        cout<<"_________________________________________________________________________________"<<endl;
        cout<<" ----Seleccione un candidato ---- "<<endl;
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
    
     
    cout<<"*************************************************************************"<<endl;
    cout<<" -----Finalizacion de los votos----- "<<endl;
    for (int s = 0; s < tamanio; s++)
    {
        cout<<"--Candidato: " << s+1 << " -> Cantidad de votos: " << candidato[s] <<endl;
        
       //if (candidato[s]>=numeroVoto){
            
            //posicioncandidato = candidato[s];
            //posicioncandidato = s;
        //}
       
    }
    
    
     cout<<"________________________________________________________________________________"<<endl;
     cout<<" ****Resultados de los porcentajes de los candidatos mas votados ****"<<endl;
     
     for (int b = 0; b < tamanio; b++)    {

         votos[b] =(candidato[b] * 100 /total);
         cout<<" --Candidato " << b+1 << " : " << candidato[b]<< votos[b] <<" % " <<endl;        
        
        }
        //Acumular datos 
        for (int t = 0; t < tamanio; t++){
        //cout<<votos[t]<<"\t\t";
        total+= votos[t];
        
    }
    
        //candidato con mas votos
        for (int n = 0; n < tamanio; n++){
          if (candidato[n]>votos[n]) {  
              votos[n] = candidato[n];
               posc = n;
         }
      
     }
        cout<<"*******************************************************************************************************************"<<endl;
        cout<<"Candidato " << candidato[posc] <<" : " << "fue el mas votado con " << votos << " votos" <<endl;
        cout<<"Gracias por votar vuelva pronto:"<<endl;
        cout<<"*******************************************************************************************************************"<<endl;
       
              
   
   
    



    return 0;
}


