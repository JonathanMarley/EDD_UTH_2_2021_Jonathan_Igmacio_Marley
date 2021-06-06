#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int z,c; 
    int matriz[3][3];
    for (int z=0; z <3; z++){
        for (int c = 0; c < 3; c++){
            
            cout<<"Ingrese los elementos ["<<z<<","<<c<<"]:"<<endl;
            cin>>matriz[z][c];
        }
        cout<<""<<endl;
    }

    //Segundo for, para mostrar la matriz
    cout<<" **** La matriz ingresada ****"<<endl;
    for (int e = 0; e < 3; e++){
       for (int q = 0; q < 3; q++){
           cout<<matriz[e][q]<<endl;
       }
       cout<<endl;
       
    }
    cout<<" ***Suma de las matrices"<<endl;
    //La suma para la matriz
    for (int g = 0; g < 3; g++){
        
        int Sumafila=0;
        int sumacol=0;
        for (int p= 0; p < 3; p++){
            
            Sumafila=Sumafila+matriz[g][p];
            sumacol=sumacol+matriz[p][g];

        }

        cout<<" --La suma de la fila "<<g<<" es: "<<Sumafila<<endl;
        cout<<" --La suma de la fila "<<g<<" es: "<<sumacol<<endl;

    }
    
    
    
    return 0;
}
