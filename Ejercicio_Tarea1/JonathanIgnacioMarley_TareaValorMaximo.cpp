#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    const int tamanio=12;
    int num[tamanio],  valorMaximo=0;

    for (int x = 0; x < tamanio; x++){
        num[x]=0;
    }
    
        for (int j = 0; j < tamanio; j++){
            cout<<j+1<<" **Ingrese un numero** "<<endl;
            cin>>num[j];
             //cout<<"\"["<<j+1<<"\"]";

            if (num[j] > valorMaximo){
                valorMaximo = num[j];
            }
        }

        for (int j = 0; j < tamanio; j++){
            cout<<j+1<<" **Ingrese un numero** "<<endl;
            cin>>num[j];
             //cout<<"\"["<<j+1<<"\"]";

            if (num[j] > valorMaximo){
                valorMaximo = num[j];
            }
        }
        cout<<" --Estos fueron los numeros ingresados-- "<<endl;
            
        for (int y = 0; y < tamanio; y++){
            if (num[y]==1){
                cout<<"Numeros""["<< y+1 <<"]""-> Ingresado" <<endl;
            }else
            {
              cout<<"Numeros""["<< y+1 <<"]"<< "" <<"-> Ingresado" <<endl;
            }
     }
        cout<<"El elemento maximo es: "<< valorMaximo <<endl;

    return 0;
}
