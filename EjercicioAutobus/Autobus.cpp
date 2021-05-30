//En un autobus con capacidad para 50 asientos la venta del boleto tiene la siguiente condicion
//1- se podra vender un boleto siempre y cuando el asiento este vacio imprimir boletos vendidos

#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int tamanio=12;
    int AutoBus[tamanio], NumAsiento, contador;
    char resp='s';


    for (int x = 0; x < tamanio; x++){
        AutoBus[x]=0;
    }
    while (resp=='s' && contador<tamanio){
        cout<<" ****Asiento vacios**** "<<endl;
        for (int  z = 0; z < tamanio; z++)
        {
            if (AutoBus[z]==0)
            {
                cout<<"\"["<<z+1<<"\"]";
                //cout<<""<<endl;
            }
            
        }
       
        
        cout<<""<<endl;
        cout<<" -----Digite un numero de asiento----- "<<endl;
        cin>>NumAsiento;

        if (NumAsiento>tamanio)
        {
            cout<<" **Asiento no existente ingrese un numero valido** "<<endl;
        }else
        {
            AutoBus[NumAsiento-1]=1;
            contador++;

        }

        cout<<" ----Quiere continuar vendiendo?----"<<endl;
        cin>>resp;
    
        cout<<" *****Informes de boletos vendidos y no comprados*****"<<endl;

        for (int y = 0; y < tamanio; y++){
            if (AutoBus[y]==1){
                cout<<"Asiento #"<< y+1 << "-> vendido" <<endl;
            }else
            
            cout<<"Asiento #"<< y+1 << "-> DESOCUPADO" <<endl;
        }

        
        
        
    }
    

    
    return 0;
}
