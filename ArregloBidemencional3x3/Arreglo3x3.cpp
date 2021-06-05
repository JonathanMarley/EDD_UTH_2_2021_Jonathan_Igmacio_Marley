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
    
    
    return 0;
}
