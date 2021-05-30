#include <iostream>
#include <string.h>

using namespace std;



int main(){

    const int tamanio=12;
    int  candidato[tamanio], cantidad;
    char opc;
    for (int m = 0; m < tamanio; m++){
        
        candidato[m]=0;
    }
    cout<<"__________________________________________________________________________"<<endl;
    cout<<"             ****BIENVENIDO AL PROGRAMA DE VOTACIONES**** "<<endl;
    cout<<"__________________________________________________________________________"<<endl;
    do
    {
        cout<<"1- Votacion. "<<endl;
        cout<<"2- Ver candidatos. "<<endl;
        cout<<"3- Finalizar la votacion. "<<endl;
        cout<<"4- Salir. "<<endl;
        cout<<"---- SELECCIONE UNA DE LAS OPCIONES---- "<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
        for (int z = 0; z < tamanio; z++){
        
        if (candidato[z]==0){
            
          cout<< "\" [" <<z+1<< "\"] ";
        }
         cout<<"-> selecione un candidato de la lista"<<endl;
         cin>>cantidad;
        
        }
        
            break;
        case 2:
        cout<<"Hola"<<endl;
            break;
        default:
           cout<<"Opcion no valida"<<endl;
            break;
        }
    } while (opc !=4);
    

    


    
    
    return 0;
}


