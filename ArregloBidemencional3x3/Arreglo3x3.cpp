#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int z,c; 
    int matriz[3][3];
    for (int z=0; z <3; z++){
        for (int c = 0; c < 3; c++){
            
            cout<<" ****Ingrese los elementos ["<<z<<","<<c<<"]:"<<endl;
            cout<<" "; cin>>matriz[z][c];
        }
        cout<<""<<endl;
    }

    //Segundo for, para mostrar la matriz
    cout<<" **** La matriz ingresada **** "<<endl;
    for (int e = 0; e < 3; e++){
       for (int q = 0; q < 3; q++){
           cout<<" | "<<matriz[e][q]<<" | "<<endl;
       }
       cout<<endl;
       
    }
    cout<<" ***Suma de la filas*** "<<endl;
    //La suma para la matriz
    for (int g = 0; g < 3; g++){
        
        int Sumafila=0;
        //int sumacol=0;
        for (int p= 0; p < 3; p++){
            
            Sumafila=Sumafila+matriz[g][p];
            //sumacol=sumacol+matriz[p][g];


        }

          cout<<" --La suma de la fila "<<g<<" es: "<<Sumafila<<endl;
          //cout<<" --La suma de la columna "<<g<<" es: "<<sumacol<<endl;

    }
    cout<<""<<endl;
    cout<<" ***La suma de la columna*** "<<endl;
    for (int d = 0; d < 3; d++)
    {
        int sumacol=0;
        for (int  m = 0; m < 3; m++)
        {
          sumacol=sumacol+matriz[m][d];
        }
        cout<<" --La suma de la columna: "<<d<<" es: "<<sumacol<<endl;
    }
    
    system("pause");
    return 0;
}
