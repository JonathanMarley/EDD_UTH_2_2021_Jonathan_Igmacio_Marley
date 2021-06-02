//Leer un arreglo de datos tipo entero de 2 filas y 3 columnas
//imptimir todos los elementos del arreglo de datos
#include <iostream>
using namespace std;

int main(){
    int Duplex[2][3];
    //cout<<"Ingrese los elementos de los arreglos"<<endl;
    for (int fila=0 ; fila < 2; fila++){
        for ( int col=0; col<3; col++) {
             cout<<"Ingrese los elementos de los arreglos["<<fila<<"] ["<<col<<"]"<<endl;
            cout<< ""; cin>>Duplex[fila][col];
        }
        
    }
    cout<<"Impresion de los elementos del arreglo9 de datos"<<endl;
    for (int f = 0; f < 2; f++){
        //cout<<(f+1)<<"\t";
        for (int i =0; i<3; i++){
            cout<<Duplex[f][i];
            cout<<" | "<<Duplex[f][i]<<"|";
            cout<<""<<endl;
        }
        
        
    }
    system("pause");
    return 0;
}
